

function firstWordUppercase(str) {
    const tmp = str.slice(0, str.indexOf(' '));
    str = str.replace(tmp, tmp.toUpperCase());
    console.log(str);
}

const str = "Javascript is a programming language";
console.log(str);
firstWordUppercase(str);

