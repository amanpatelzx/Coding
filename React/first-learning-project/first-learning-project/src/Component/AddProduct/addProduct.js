import AppContext from "../../store/app-context";
import Modal from "../UI/Modal";
import "./addProduct.css"
import { useRef } from "react";
import { useContext } from "react";
function AddProduct(){
    const {showAddProduct, closeAddProduct, handleAddProduct} = useContext(AppContext);
    const nameRef = useRef();
    function handleSubmit(event){
        event.preventDefault();
        handleAddProduct(nameRef.current.value);
    }
    return (
        <Modal show={showAddProduct} onClose={closeAddProduct}>
            <div className="add-product-container">
                <div className="add-product-heading">
                    <form onSubmit={handleSubmit} className="add-product-form">
                        <div className="form-lebel">Enter Product name</div>
                        <input className="form-input" name="product-name" ref={nameRef}/>
                        <button type="submit" className="submit-button yellow-button">Add Product</button>
                    </form>
                </div>
            </div>
        </Modal>
    );
}
export default AddProduct;  