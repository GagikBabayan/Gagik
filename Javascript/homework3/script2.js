function add(number1, number2) {
  if (number2 != undefined) {
    return number1 + number2;
  }
  if (typeof number1 == "number") {
    return function generic(number2) {
      if (typeof number2 == "number") {
        return number1 + number2;
      }
      return generic;
    };
  }
  return add;
}

console.log(add(7, 15)); // -> 22
console.log(add(7)(15)); // -> 22
console.log(add(7)()(15)); // -> 22
console.log(add(7)()()()(15)); // -> 22
console.log(add(7)()()()()()()()()()()()(15)); // -> 22
console.log(add()(7)(15)); // -> 22
console.log(add()()()()(7)(15)); // -> 22
console.log(add()(7)()(15)); // -> 22
console.log(add()()()()()(7)()()()(15)); // -> 22
