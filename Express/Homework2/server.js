import express from "express";
import cors from "cors";
import fs from "fs";
import todos from "./todos.json" assert { type: "json" };

const app = express();
app.use(express.json());
app.use(cors());

function writeFile(param) {
  fs.writeFileSync("todos.json", JSON.stringify(param));
}

// let todos = [
//   {
//     id: 1,
//     name: "Joe",
//     todos: [
//       {
//         id: Math.random(),
//         text: "Learn JS",
//         isCompleted: false,
//       },
//       {
//         id: Math.random(),
//         text: "Learn CSS",
//         isCompleted: false,
//       },
//     ],
//   },
//   {
//     id: 2,
//     name: "Elina",
//     todos: [
//       {
//         id: Math.random(),
//         text: "Learn JS",
//         isCompleted: false,
//       },
//       {
//         id: Math.random(),
//         text: "Learn CSS",
//         isCompleted: false,
//       },
//     ],
//   },
// ];

app.get("/todos", (req, res) => {
  res.json(todos);

  res.end();
});

app.get("/todos/:userId", (req, res) => {
  // console.log("Hello ", req.params.userId)
  // console.log("Hello ", todos.find(todo => todo.id === Number(req.params.userId)).todos)
  const obj = todos.find((todo) => todo.id === Number(req.params.userId)).todos;
  res.json(obj);
  res.end();
});

app.post("/setUser", (req, res) => {
  const newUser = req.body;
  todos.push({
    id: req.body.user.id,
    name: req.body.user.userName,
    todos: [],
  });

  writeFile(todos);
});

app.post("/setUserTodos", (req, res) => {
  const user = req.body;
  todos.forEach((element) => {
    if (element.id == user.user.id) {
      element.todos.push(user.user.todos);
    }
  });
  writeFile(todos);
});

app.delete("/deleteUser/:userId", (req, res) => {
  const { userId } = req.params;
  todos = todos.filter((user) => user.id != userId);
  writeFile(todos);
});

app.delete("/deleteUserTodo/:userId/:todoId", (req, res) => {
  todos.forEach((element) => {
    if (element.id == req.params.userId) {
      element.todos = element.todos.filter(
        (value) => value.id != req.params.todoId
      );
    }
  });
  writeFile(todos);
});

const PORT = 3001;
app.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});
