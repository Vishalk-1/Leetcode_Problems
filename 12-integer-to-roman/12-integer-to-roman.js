/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    let roman = "";
    const obj = {
        M : 1000,
        CM : 900,
        D : 500,
        CD : 400,
        C : 100,
        XC : 90,
        L : 50,
        XL : 40,
        X : 10,
        IX : 9,
        V : 5,
        IV : 4,
        I : 1
    }
    for( let i in obj){
        while(num >= obj[i]){
            roman += i;
            num -= obj[i];
        }
    }return roman;
};