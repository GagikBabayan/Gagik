import { changedArr } from "./renderMoves";
import { useParams } from "react-router-dom";
import "./FilmShow.css";

function FilmShow() {
  const { id } = useParams();
  return (
    <div className="descDiv">
      <div className="descTitle">{changedArr[id].name}</div>;
      <img className="descImg" src={changedArr[id].image} />
      <p className="descParag">{changedArr[id].text}</p>
    </div>
  );
}

export { FilmShow };

