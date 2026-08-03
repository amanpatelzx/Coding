import React, {useEffect, useState} from 'react'
import AppContext from './app-context';
const AppContextProvider = ({ children }) => {
    const [showCart, setShowCart] = useState(false); 
    const [showAddProduct, setAddProduct] = useState(false);
    const [showDeleteProduct, setDeleteProduct] = useState(false);
    const [cartItems, setCartItems] = useState([]);
    const [Products, setProduct] = useState([]);
    const [loading, setLoading] = useState(false);

    const openCart = () => setShowCart(true);
    const closeCart = () => setShowCart(false);

    const openAddProduct = () => setAddProduct(true);
    const closeAddProduct = () => setAddProduct(false);

    const openDeleteProduct = () => setDeleteProduct(true);
    const closeDeleteProduct = () => setDeleteProduct(false);
    
    const handleAddToCart = (productId, productName, productImage) => {
        const IndexOfCurrItem = cartItems.findIndex((item) => item.id === productId);
        if(IndexOfCurrItem === -1){
        const cartItem = {
            id: productId,
            name: productName,
            image: productImage,
            quantity: 1,
        }
        setCartItems((state) => [...state, cartItem]);
        }
        else{
        const updateCartItem = [...cartItems];
        updateCartItem[IndexOfCurrItem].quantity++;
        setCartItems(updateCartItem);
        }
    };

    const handleIncreaseQuantity = (id) => {
        const updateCartItem = [...cartItems];
        for(const item of updateCartItem){
        if(item.id === id){
            item.quantity++;
        }
        }
        setCartItems(updateCartItem);
    };
    const handleDecreaseQuantity = (id) => {
        let updateCartItem = [...cartItems];
        for(const item of updateCartItem){
        if(item.id === id){
            item.quantity--;
            if(item.quantity === 0){
            updateCartItem = updateCartItem.filter((item) => (item.id) !== id);
            }
        }
        }
        setCartItems(updateCartItem);
    };
    const sentProductData = async (Product) => {
        try {
            const response = await fetch(
                "https://aman-patel-store-default-rtdb.firebaseio.com/products.json",
                {
                    method: "POST",
                    headers: {
                        "Content-Type": "application/json",
                    },
                    body: JSON.stringify(Product),
                }   
            );
            if (!response.ok) {
                throw new Error("Failed to add product");
            }
            if(response.ok) await fetchProducts();
            const data = await response.json();
            console.log("Product Added:", data);
        } catch (error) {
            console.log(error);
        }
    };
    const handleAddProduct = (productName) => {
        const Product = {
        id : Products.length+1,
        name : productName,
        image : "default_product.png"
        }
        sentProductData(Product);
        setAddProduct(false);
    };
    const fetchProducts = async () => {
    setLoading(true);
        try{
            const response = await fetch(
            "https://aman-patel-store-default-rtdb.firebaseio.com/products.json"
        );
        const data = await response.json();
        console.log(data); 
        const loadedProducts = [];
        for (const key in data) {
            loadedProducts.push({
                firebaseId: key,
                ...data[key],
            });
        }
        setProduct(loadedProducts);
        }catch (error){
            console.log(error);
        }
        setLoading(false);
    };

    useEffect(() => {
        fetchProducts();
    }, []);

    const handleDeleteProduct = async (firebaseId) => {
        try {
            const response = await fetch(
                `https://aman-patel-store-default-rtdb.firebaseio.com/products/${firebaseId}.json`,
                {
                    method: "DELETE",
                }
            );
            if (!response.ok) {
                throw new Error("Failed to delete product");
            }
            await fetchProducts();
        } catch (err) {
            console.log(err);
        }
    };
    const appContextValue = {
        showCart,
        showAddProduct,
        showDeleteProduct,
        Products,
        cartItems,
        loading,
        openCart,
        closeCart,
        openAddProduct,
        closeAddProduct,
        handleAddToCart,
        handleIncreaseQuantity,
        handleDecreaseQuantity,
        handleAddProduct,
        openDeleteProduct,
        closeDeleteProduct,
        handleDeleteProduct,
    }
  return (
    <AppContext.Provider value={appContextValue}>{children}</AppContext.Provider>
  )
}
export default AppContextProvider;