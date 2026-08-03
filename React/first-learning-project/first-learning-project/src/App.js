  import React from "react";
  import Header from "./Component/Header/Header";
  import Product from "./Component/Product/Product";
  import Cart from "./Component/Cart/cart";
  import DeleteItems from "./Component/DeleteProduct/deleteProduct";
  import AddProduct from "./Component/AddProduct/addProduct";
  import AppContextProvider from "./store/AppContextProvider";

  function App() {
    return (
      //React.Fragment -> 
      <AppContextProvider>
        <Header/>
        <Product/>
        <Cart/>
        <DeleteItems/>
        <AddProduct/> 
      </AppContextProvider>
    );
  }
  export default App;
