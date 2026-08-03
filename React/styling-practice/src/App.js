import Home from "./Component/pages/home";
import Product from "./Component/pages/product";
import {createBrowserRouter, RouterProvider} from "react-router-dom"
const router = createBrowserRouter([
  {path: "/", element: <Home/>},
  {path: "/product", element : <Product/>}, 
]);
function App() {
  return (
    <RouterProvider router={router}/>
  );
  // return (
  //     <div className="flex justify-center bg-red-500">
  //       <p >Helllo dosto</p>
  //     </div>
  // );
}

export default App;
