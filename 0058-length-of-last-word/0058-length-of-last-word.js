/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    s = s.trim();
    const newArr = s.split(" ");

    let len = newArr.length;

    return newArr[len-1].length;
};