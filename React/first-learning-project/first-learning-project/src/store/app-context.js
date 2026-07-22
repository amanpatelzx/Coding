import { createContext } from "react";

const AppContext = createContext({
    showCart : false,
    showAddProduct : false,
    loading : false,
    Products : [],
    cartItems : [],
    openCart : () => {},
    closeCart : () => {},
    openAddProduct : () => {},
    closeAddProduct : () => {},
    handleAddToCart : () => {},
    handleIncreaseQuantity : () => {},
    handleDecreaseQuantity : () => {},
    handleAddProduct : () => {},
});
export default AppContext;