// 555-555-5555
// (555)555-5555
// (555) 555-5555
// 555 555 5555
// 5555555555
// 1 555 555 5555


function telephoneCheck(str) {
    var pattern = /^(1\s?)?(\(\d{3}\)|\d{3})[-\s]?(\d{3})[-\s]?(\d{4})$/;

    // Check if the input string matches the pattern
    if (pattern.test(str)) {
        return true
    }
    return false;
}

telephoneCheck("555-555-5555");