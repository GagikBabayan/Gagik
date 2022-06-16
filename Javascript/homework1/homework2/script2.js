function cutArray(array, cutSize) {
    const tmp = [];

    for (let i = 0; i < array.length; i += cutSize) {
        tmp.push(array.slice(i, i + cutSize));
    }
    return  tmp;
}

console.log(cutArray([1, 2, 3, 4], 2));
console.log(cutArray([1, 2, 3, 4, 5], 4));
console.log(cutArray([1, 2, 3, 4, 5, 6, 7, 8], 3));
