function popShift(arr) {
    let popped; // Change this line
    let shifted; // Change this line
    popped = arr.pop(); // Change this line
    shifted = arr.shift(); // Change this line
    return [shifted, popped];
  }
  
  console.log(popShift(['challenge', 'is', 'not', 'complete']));