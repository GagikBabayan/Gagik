import React from "react";
import ReactDOM from "react-dom/client";
import Menu from "./Menu/Menu";
import { BrowserRouter } from "react-router-dom";

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(
  <>
    <BrowserRouter>
      <Menu />
    </BrowserRouter>
  </>
);



