function convertToRoman(num) {
    var roman = "";
    var romanNumeral = {
        M: 1000,
        CM: 900,
        D: 500,
        CD: 400,
        C: 100,
        XC: 90,
        L: 50,
        XL: 40,
        X: 10,
        IX: 9,
        V: 5,
        IV: 4,
        I: 1
    };
    for (var key in romanNumeral) {
        while (num >= romanNumeral[key]) {
            roman += key;
            num -= romanNumeral[key];
        }
    }

    return roman;
}

convertToRoman(36);