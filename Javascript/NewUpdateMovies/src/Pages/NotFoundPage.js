import React from "react";
import "../Styles/NotFoundPage.css";
import error from "../images/error.jpeg";

function NotFoundPage() {
  return (
    <div className="notfound">
      <h1>This Page is Not Found!</h1>
      <img src={error} />
    </div>
  );
}

export { NotFoundPage };
