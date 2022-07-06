import React, { useRef, useState } from "react";
import "../../Styles/Modal.css";
import Pirates from "../../images/Pirates.jpeg";
import {Input} from "../InputComponent/Input";

const Modal = ({ onClose, show, addElem, elem }) => {
  const [name, setName] = useState("");
  const [text, setText] = useState("");

  if (!show) {
    return null;
  }

  const addElement = () => {
    // console.log(elem.length, "====elem LEnght");

    const newMovies= {
      id: Date.now(),
      name,
      image: Pirates,
      text,
    };

    addElem(newMovies);
  };
  return (
    <div className="modal" onClick={onClose}>
      <div className="modal-content" onClick={(e) => e.stopPropagation()}>
        <h4>Add Film</h4>
        <button className="close" onClick={onClose}>
          X
        </button>
        <Input placeholder="Name" onChange={(e) => setName(e.target.value)} />
        <Input
          placeholder="Description"
          onChange={(e) => setText(e.target.value)}
        />
        <button className="add-film" onClick={addElement}>
          Add Film
        </button>
      </div>
    </div>
  );
};
export default Modal;
