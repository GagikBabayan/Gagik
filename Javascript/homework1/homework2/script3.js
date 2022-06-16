function SumNumber(obj) {
  let sum = 0;
  let arr = Object.values(obj);
  for (let i = 0; i < arr.length; i++) {
    if (typeof arr[i] === "number") {
      sum += arr[i];
    }
  }
  return sum;
}

let obj = {
  a: 10,
  b: 20,
  c: "string",
  d: 12,
};

console.log(SumNumber(obj));
