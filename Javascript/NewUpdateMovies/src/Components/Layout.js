import { Link, Outlet } from "react-router-dom";
import "../Styles/Layout.css";

function Layout() {
  return (
    <>
      <header className="header">
        <Link to="/"> Home</Link>
        <Link to="/films"> Films</Link>
      </header>
      <Outlet />
    </>
  );
}

export { Layout };
