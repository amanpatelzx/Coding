import AppContext from "../../store/app-context";
import Modal from "../UI/Modal";
import "./deleteProduct.css";
import { useContext } from "react";
function CurrList({id, name , image}){
    const { handleDeleteProduct } = useContext(AppContext);
    return (
        <div className="cart-item">
            <div className="item-img">
                <img src={require(`../../Asset/${image}`)} alt="product.name"/>
            </div>
            <div className="item-info">
            <div>{name}</div>
            </div>
            <div>
                <button className="yellow-button" onClick={() => handleDeleteProduct(id)}>Delete</button>
            </div>
        </div>
    );  
}
function DeleteItems(){
    const { Products, showDeleteProduct, closeDeleteProduct} = useContext(AppContext);
    return (
        <Modal show={showDeleteProduct} onClose={closeDeleteProduct}>
             <div className="cart-container">
                <div className="cart-heading">Delete Items</div>
                {Products.length > 0 ? 
                Products.map((item) => (    
                    <CurrList key={item.firebaseId}
                    id={item.firebaseId}
                    name={item.name}
                    image={item.image}
                />)) 
                : <div className="empty-cart">List is Empty</div>}
                <div className="cart-buttons">
                    <button className="black-button close-cart" onClick={closeDeleteProduct}>Close</button>
                    {Products.length > 0 && (
                        <button className="yellow-button" onClick={ closeDeleteProduct}>Checkout</button>
                    )}  
                </div> 
            </div> 
        </Modal>
    );
}
export default DeleteItems;