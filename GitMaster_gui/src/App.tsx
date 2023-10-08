//import { useState } from "react";
//import reactLogo from "./assets/react.svg";
//import { invoke } from "@tauri-apps/api/tauri";
import "./App.css";
import { Routes, BrowserRouter, Route } from "react-router-dom";
import Home from "./pages/Home";
function App() {

  return <Routes>
    <Route path="/" element={<Home />} />
  </Routes>

};
export default App;
