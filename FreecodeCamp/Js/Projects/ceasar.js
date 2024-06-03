function rot13(str) {
    const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    let result = "";

    for (let i = 0; i < str.length; i++) {
        let char = str[i];
        let index = alphabet.indexOf(char);

        if (index === -1) {
            // Character is not in the alphabet, keep it as it is
            result += char;
        } else {
            // Apply the ROT13 cipher
            let newIndex = (index + 13) % 26;
            let newChar = alphabet[newIndex];
            result += newChar;
        }
    }

    return result;
}

rot13("SERR PBQR PNZC");