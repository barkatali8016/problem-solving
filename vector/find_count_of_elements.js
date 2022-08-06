/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function (array) {
  let obj = {};
  for (let i = 0; i < array.length; i++) {
    let counter = 1;
    for (let j = i + 1; j < array.length; j++) {
      if (array[i] === array[j]) {
        counter++;
      }
    }
    if (obj[array[i]]) {
      continue;
    } else {
      obj[array[i]] = counter;
    }
  }
  let counts = Object.keys(obj).map((key) => {
    return obj[key];
  });
  console.log(counts);
  for (let i = 0; i < counts.length; i++) {
    for (let j = i + 1; j < counts.length; j++) {
      if (counts[i] === counts[j]) {
        return false;
      }
    }
  }
  return true;
};
