import "./App.css";
import arr from "./arrayMovies";

export function renderMoves(name) {
 
  let newArr =
    name == ""
      ? renderMoves(arr)
      : renderMoves(
          arr.filter(
            (value) =>
              value.name.toLowerCase().substring(0, name.length) ===
              name.toLowerCase()
          )
        );

  function renderMoves(arr) {
    return arr.map((value) => {
      return (
        <div className="style" id={value.name} key={value.id.toString()}>
          <p className="title">{value.name}</p>
          <img src={value.image} />
          <p className="description"> {value.text}</p>
        </div>
      );
    });
  }
  return newArr;
}
