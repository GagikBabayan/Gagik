import "./App";
import "./App.css";
import moviesContainer from "./MoviesContainer";
import { Button } from "./Button/Button";
import { Link } from "react-router-dom";

export let changedArr = moviesContainer;

export function RenderMovies({ newArr, setArr, setCount }) {
  function removeMovie(id) {
    changedArr = changedArr.filter((el) => el.id !== id);

    for (let i = id; i < changedArr.length; i++) {
      changedArr[i].id = changedArr[i].id - 1;
    }


    console.log(changedArr);
    setArr(changedArr);
    setCount(changedArr.length);
  }
  return newArr.map((value) => {
    return (
      <div className="style" id={value.name} key={value.id.toString()}>
        <p className="title">{value.name}</p>
        <img src={value.image} />
        <div className="description">
          <p id="text"> {value.text}</p>
          <div class="ButtonsContainer">
            <Button onClick={() => removeMovie(value.id)}>Delete</Button>

            <Link to={`/film/${value.id}`}>Goto</Link>
          </div>
        </div>
      </div>
    );
  });
}
