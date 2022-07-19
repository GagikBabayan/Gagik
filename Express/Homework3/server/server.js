const express = require("express");
const cors = require("cors");
const bodyParser = require("body-parser");
const app = express();
const mongoose = require("mongoose");
const { Schema } = mongoose;
const url = "mongodb://localhost:27017/database";

mongoose.connect(url);

const datasSchema = new Schema({
  userId: Number,
  id: Number,
  task: String,
  complete: Boolean,
});

const usersSchema = new Schema({
  userId: Number,
  name: String,
});

const Users = mongoose.model("users", usersSchema);
const Datas = mongoose.model("datas", datasSchema);

app.use(express.json());

app.use(cors());

app.use(
  bodyParser.urlencoded({
    extended: true,
  })
);

async function getUsersBase() {
  let temp = Users.find({});
  return temp;
}

async function getDatasBase() {
  let temp = await Datas.find({});
  return temp;
}

app.get(`/ToDo/:id`, async (req, res) => {
  const todos = await getDatasBase();
  const id = req.params.id;
  const userTodos = todos.filter((todo) => todo.userId == id);
  res.json(userTodos);
});

app.post("/ToDo/:user", async (req, res) => {
  const addObj = new Datas({
    userId: Number(req.body.userId),
    id: Date.now() + 1,
    task: req.body.task,
    complete: false,
  });

  await addObj.save(() => {});

  let newBase = await Datas.find({ userId: req.body.userId });
  res.send(newBase);
});

app.put("/ToDo/:id/", async (req, res) => {
  const base = await Datas.findOne({ id: Number(req.params.id) });
  await Datas.findOneAndUpdate(
    { id: Number(req.params.id) },
    { $set: { complete: !base.complete } }
  );

  const temp = await Datas.find({ userId: Number(req.body.userId) });
  return res.json(temp);
});

app.delete("/ToDo/:userId", async (req, res) => {
  await Datas.deleteMany({ userId: Number(req.params.userId), complete: true });
  const temp = await Datas.find({ userId: Number(req.params.userId) });
  return res.json(temp);
});

app.get("/", async (req, res) => {
  const users = await Users.find({});
  res.send(users);
  res.end();
});

app.listen(process.env.MY_PORT, () => {
  console.log(`Example app listening on port ` + process.env.MY_PORT);
});
