import App from "../App";
import { Routes, Route, Link } from "react-router-dom";
import { Homepage } from "../Homepage";
import { NotFoundPage } from "../NotFoundPage";

import "./Menu.css";

function Menu() {
  {
    return (
      <div>
        <header>
          <Link to="/">Home</Link>
          <Link to="/movies">Movies</Link>
        </header>
        <Routes>
          <Route path="/" element={<Homepage />} />
          <Route path="/movies" element={<App />} />
          <Route path="*" element={<NotFoundPage />} />
        </Routes>
      </div>
    );
  }
}

export default Menu;
