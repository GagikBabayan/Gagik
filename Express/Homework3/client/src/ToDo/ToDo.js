import React, { useEffect, useState } from "react";
import { useParams } from "react-router";
import Button from "../Component/Button";

function ToDo() {
  const { id } = useParams();
  const [inputValue, setInputValue] = useState("");
  const [todos, setTodos] = useState([]);
  const URL = "http://localhost:3001";

  useEffect(() => {
    fetch(`${URL}/ToDo/${id}`)
      .then((res) => res.json())
      .then(setTodos);
  }, []);

  const getInputValue = (event) => {
    setInputValue(event.target.value);
  };

  const addTodo = () => {
    const sendingData = {
      task: inputValue,
      userId: id,
    };

    fetch(`${URL}/ToDo/${id}`, {
      method: "POST",
      body: JSON.stringify(sendingData),
      headers: {
        "Content-Type": "application/json; charset=UTF-8",
      },
    })
      .then((resp) => resp.json())
      .then(setTodos);

    setInputValue("");
  };

  const update = (taskId) => {
    fetch(`${URL}/ToDo/${taskId}`, {
      method: "PUT",
      body: JSON.stringify({ userId: id }),
      headers: {
        "Content-Type": "application/json; charset=UTF-8",
      },
    })
      .then((res) => res.json())
      .then(setTodos);
  };

  const removeToDo = () => {
    fetch(`${URL}/ToDo/${id}`, { method: "delete" })
      .then((res) => res.json())
      .then(setTodos);
  };

  return (
    <div className="ToDo">
      <h1>Todos</h1>
      <div>
        <input onChange={getInputValue} value={inputValue} />
        <Button onClick={addTodo}>Add</Button>
      </div>
      <ol>
        {todos.map((todo) => (
          <li key={todo.id}>
            <input
              type="checkbox"
              onChange={() => update(todo.id)}
              className="checkBox"
              checked={todo.complete}
            />
            <span>{todo.task} </span>
          </li>
        ))}
      </ol>
      <Button onClick={removeToDo}>Remove</Button>
    </div>
  );
}

export default ToDo;
