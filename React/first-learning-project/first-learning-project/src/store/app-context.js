import { createContext } from "react";

const AppContext = createContext({
    showCart : false,
    showAddProduct : false,
    showDeleteProduct : false,
    loading : false,
    Products : [],
    cartItems : [],
    openCart : () => {},
    closeCart : () => {},
    openAddProduct : () => {},
    closeAddProduct : () => {},
    openDeleteProduct : () => {},
    closeDeleteProduct : () => {},
    handleAddToCart : () => {},
    handleIncreaseQuantity : () => {},
    handleDecreaseQuantity : () => {},
    handleAddProduct : () => {},
    handleDeleteProduct : () => {},
});
export default AppContext;