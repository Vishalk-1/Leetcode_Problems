/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
     const MAX_NUMBER = 2**31;
    const number = parseInt(s)    
    if (!number) return 0
    return Math.max(-MAX_NUMBER, Math.min(MAX_NUMBER-1, number))
};