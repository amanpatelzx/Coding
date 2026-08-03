import React from 'react'
import { Link } from 'react-router-dom';
function Home() {
  return (
    <>
    <div className="flex justify-center bg-red-500">home</div>
    <Link to="/product" className= "hover:bg-red-500">Go to product pages</Link>
    </>
  )
}

export default Home;