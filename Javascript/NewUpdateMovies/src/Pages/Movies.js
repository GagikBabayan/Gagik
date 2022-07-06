import React, { useState, useEffect, useContext } from "react";
import { Input } from "../Components/InputComponent/Input";
import { Button } from "../Components/ButtonComponent/Button";
import { Movie } from "../Components/Movie";
import { MoviesContext } from "../Components/Context";

import "../Styles/Movies.css";
import Modal from "../Components/Modal/Modal";

function Movies() {
  const [searchedMovie, setSearchedMovie] = useState("");
  const [filteredMovies, setFilteredMovies] = useState([]);

  const searchMovie = (e) => {
    setSearchedMovie(e.target.value);
  };

  const { allMovies, setAllMovies } = useContext(MoviesContext);

  useEffect(() => {
    setFilteredMovies(
      !searchedMovie
        ? allMovies
        : allMovies.filter((e) =>
            e.name.toLowerCase().includes(searchedMovie.toLowerCase())
          )
    );
  }, [searchedMovie]);

  useEffect(() => {
    setFilteredMovies(allMovies);
  }, [allMovies]);
  const addMovie = (newMovie) => {
    setShow(false);
    setAllMovies([...allMovies, newMovie]);
  };
  function deleteMovie(id) {
    console.log(id);
    setAllMovies((allMovies) => allMovies.filter((e) => e.id !== id));
  }
  const [show, setShow] = useState(false);
  return (
    <div className="moviesPage">
      <div>
        <p className="count">Count : {filteredMovies.length}</p>
        <Input
          className="search"
          placeholder="Search..."
          onChange={searchMovie}
        />
        <Button value="Add Movie" onClick={() => setShow(true)} />
      </div>
      <Modal
        onClose={() => setShow(false)}
        show={show}
        addElem={addMovie}
        elem={allMovies}
      />
      <Movie movies={filteredMovies} onClick={deleteMovie} />
    </div>
  );
}

export { Movies };
