import AppContext from "../../store/app-context";
import "./Product.css";
import { useContext } from "react";
import Loader from "../UI/Loader";
function Product({id , name , image}){
    const {handleAddToCart} = useContext(AppContext);
    return (
        <div key={id} className="product">
            <img src={require(`../../Asset/${image}`)} alt="product.name"/>
            <div className="product-name"> {name}</div>
            <button className="yellow-button" onClick={() => handleAddToCart(id,name, image)}>Add to Cart</button>
        </div>
    );
}
function Products(){
    const {Products, loading} = useContext(AppContext);
    if(loading){
        return (
            <Loader/>
        );
    }
    return (
        <div className="products-container">
            {Object.keys(Products).map((k) =>(
                <Product key={k} id ={Products[k].id} name = {Products[k].name} image = {Products[k].image} />
            ))} 
        </div>
    );
}
export default Products;