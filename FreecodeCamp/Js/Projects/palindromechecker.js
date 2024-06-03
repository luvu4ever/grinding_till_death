function trim(str) {
    return str.replace(/[^a-zA-Z1-9]/g, "").toLowerCase();
}

function palindrome(str) {
    str = trim(str);
    
    for (let i = 0; i < str.length / 2; i++) {
        if(str[i] !== str[str.length - 1 - i]) {
            return false;
        }
    }
    return true;
}

palindrome("eye");