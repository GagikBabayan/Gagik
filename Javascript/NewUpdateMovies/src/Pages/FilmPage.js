import React, { useState, useEffect, useContext } from "react";
import { useParams } from "react-router-dom";
import "../Styles/FilmPage.css";
import { MoviesContext } from "../Components/Context";

const FilmPage = () => {
  const { allMovies } = useContext(MoviesContext);
  const [movie, setMovie] = useState({});
  const { id } = useParams();

  useEffect(() => {
    setMovie(allMovies.find((n) => n.id === Number(id)));
  }, []);
  return (
    <div className="PageDiv">
      <h1 className="name">{movie.name}</h1>
      <img className="image" src={movie.image} />
      <p className="text">{movie.text}</p>
    </div>
  );
};
export {FilmPage};
