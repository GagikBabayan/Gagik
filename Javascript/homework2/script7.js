function CheckAnagram(arr) {
  let map = new Map();

  for (let word of arr) {
    let sorted = word
      .toLowerCase()
      .split("")
      .sort()
      .join("")
      .replace(/[`~!@#$%^&*()_|+\-=?;:'",.<>\{\}\[\]\\\/]/gi, "");
    map.set(sorted, word);
  }
  console.log(map.size, arr.length);
  return arr.length > map.size;
}

let arr1 = ["rail safety", "fairy tales"];
let arr2 = ["RAIL! SAFETY!", "fairy tales"];
let arr3 = ["Hi there", "Bye ther"];

console.log(CheckAnagram(arr1));
console.log(CheckAnagram(arr2));
console.log(CheckAnagram(arr3));
