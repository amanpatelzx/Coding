import "./Header.css";
import { useContext } from "react";
import AppContext from "../../store/app-context";
function Header(){ 
    const {openCart, openAddProduct, openDeleteProduct} = useContext(AppContext);
    return (
        <div className="header">
            <h1>Aman Patel's Store</h1>
            <div>
                <button className="yellow-button" style={{marginRight:"20px"}} onClick={openAddProduct}>Add Product</button>
                <button className="yellow-button" style={{marginRight:"20px"}} onClick={openDeleteProduct}>Delete Product</button>
                <button className="yellow-button" onClick={openCart}>Cart</button>
            </div>
            {/* <Modal show={showCart} onClose={closeCart} >
                Hello from cart
            </Modal> */}
        </div>  
    );
}
export default Header;