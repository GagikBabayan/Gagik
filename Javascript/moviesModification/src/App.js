import { filterArr, moviesFilter, Render } from "./renderMoves";
import { useEffect, useState } from "react";
import arr from "./arrayMovies";
import Modal from "./Modal/Modal";
import Spider from "./images/download.jpeg";

export function App() {
  const [count, setCount] = useState(0);
  const [name, setName] = useState("");
  const [newArr, setNewArr] = useState([]);
  const [show, setShow] = useState(false);

  useEffect(() => {
    // reflesh array
    setNewArr(moviesFilter(name));
  }, [name]);

  useEffect(() => {
    // reflesh  Count
    setCount(newArr.length);
  }, [newArr]);

  // Check text is empty or not.
  function checkText() {
    const createdArr = {
      //input  new movies
      id: arr[arr.length - 1].id + 1,
      name: `${document.querySelector(".filmName").value}`,
      image: Spider,
      text: `${document.querySelector(".description").value}`,
    };
    console.log(document.querySelector(".filmName").value);
    console.log(document.querySelector(".description").value);
    if (
      document.querySelector(".filmName").value &&
      document.querySelector(".description").value
    ) {
      filterArr.push(createdArr); //push new movies in array
      setNewArr(filterArr);
      setCount(filterArr.length);
      document.querySelector(".filmName").value = "";
      document.querySelector(".description").value = "";
    } else {
      alert("You didn't write the movie's name or description");
    }
  }

  return (
    <div id="App">
      <div className="header">
        <div className="count">count: {count}</div>
        <input
          id="input"
          type="text"
          placeholder="search"
          onChange={(event) => {
            setTimeout(() => setName(event.target.value), 500);
          }}
        ></input>
        <button onClick={() => setShow(true)}>add</button>
        <Modal title="My Modal" onClose={() => setShow(false)} show={show}>
          <p>
            Add filme
            <button onClick={() => setShow(false)} className="buttonX">
              X
            </button>
          </p>
          <div className="modalContent">
            <input
              type="text"
              placeholder="Film name"
              className="filmName style__"
            />
            <input
              type="text"
              placeholder="description"
              className="description style__"
            />
            <button
              className="modalAdd style__"
              onClick={() => {
                setShow(false);
                {
                  checkText();
                }
              }}
            >
              Add
            </button>
          </div>
        </Modal>
      </div>
      <div id="films">
        <Render newArr={newArr} setArr={setNewArr} setCount={setCount} />
      </div>
    </div>
  );
}

export default App;
