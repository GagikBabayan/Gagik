import { Routes, Route, Outlet, BrowserRouter } from "react-router-dom";
import "../Styles/App.css";

import { FilmPage } from "../Pages/FilmPage";
import { HomePage } from "../Pages/HomePage";
import { Movies } from "../Pages/Movies";
import { NotFoundPage } from "../Pages/NotFoundPage";
import { Layout } from "./Layout";
import { MoviesContext } from "./Context";
import { useState } from "react";
import { moviesList } from "../Database/MoviesList";

function App() {
  const [allMovies, setAllMovies] = useState(moviesList);
  return (
    <MoviesContext.Provider value={{allMovies,setAllMovies }}>
      <BrowserRouter>
        <Routes>
          <Route path="/" element={<Layout />}>
            <Route index element={<HomePage />} />
            <Route path="films/" element={<Outlet />}>
              <Route index element={<Movies />} />
              <Route path=":id" element={<FilmPage />} />
            </Route>
            <Route path="*" element={<NotFoundPage />} />
          </Route>
        </Routes>
      </BrowserRouter>
    </MoviesContext.Provider>
  );
}

export default App;
