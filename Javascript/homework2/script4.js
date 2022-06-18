function vowels(text) {
  let result = text.replace(/[aeiou]/g, "");
  console.log(result);
  return text.length - result.length;
}

let text = "Today is the best day of my life";
console.log(vowels(text));
