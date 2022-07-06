import React from "react";
import { Link } from "react-router-dom";
import { Button } from "../Components/ButtonComponent/Button";
import "../Styles/Movie.css";

const Movie = (props) => {
  const moviesList = props.movies.map((e) => (
    <li key={e.id}>
      <h1>{e.name}</h1>
      <img src={e.image} />
      <p>{e.text.substring(0, 5).concat("...")}</p>
      <Button
        value="Delete"
        onClick={() => {
          props.onClick(e.id);
        }}
      />
      <Link className="more" to={`${e.id}`}>
        more...
      </Link>
    </li>
  ));

  return (
    <container className="constainer">
      <ul className="moviesUl">{moviesList}</ul>
    </container>
  );
};

export { Movie };
