import { changedArr } from "./renderMoves";

function moviesFilter(name) {
  const filteredАrr =
    name === ""
      ? changedArr
      : changedArr.filter(
          (value) =>
            value.name.toLowerCase().substring(0, name.length) ===
            name.toLowerCase()
        );
  return filteredАrr;
}

export default moviesFilter;
