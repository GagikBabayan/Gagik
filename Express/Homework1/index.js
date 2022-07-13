import express from "express";
import path from "path";
const app = express();

app.use((req, res, next) => {
  console.log("This is use");
  next();
});

app.use(express.static("public"));

app.get("/", (req, res) => {
  req.redirect("./index.html");
});

app.get("/hello", (req, res) => {
  res.send({
    name: "Poxos",
  });
});

app.listen(3000);
