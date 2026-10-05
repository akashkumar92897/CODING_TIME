// ======================================== CHAPTER 7: ARRAYS ========================================
// ------------------------------------------------------------------------------------------
// Q1. Create an array containing  -->  10, 20, 30, 40, 50  -->  Print the entire array.
// ------------------------------------------------------------------------------------------
const arr1 = [10, 20, 30, 40, 50];
console.log(arr1);


// ------------------------------------------------------------------------------------------
// Q2. Print  -->  First element  |  Last element  |  Length of the array.
// ------------------------------------------------------------------------------------------
console.log("First:", arr1[0]);
console.log("Last:", arr1[arr1.length - 1]);
console.log("Length:", arr1.length);


// ------------------------------------------------------------------------------------------
// Q3. Create an array of 5 favorite movies. Print each movie using a loop.
// ------------------------------------------------------------------------------------------
const movies = [
  "Inception",
  "Interstellar",
  "3 Idiots",
  "The Dark Knight",
  "Avengers",
];
for (const movie of movies) {
  console.log(movie);
}


// ------------------------------------------------------------------------------------------
// Q4. Update the third element of an array. Print the updated array.
// ------------------------------------------------------------------------------------------
const arr4 = [10, 20, 30, 40, 50];
arr4[2] = 35;
console.log(arr4);


// ------------------------------------------------------------------------------------------
// Q5. Add an element to the end using push().
// ------------------------------------------------------------------------------------------
const arr5 = [10, 20, 30];
arr5.push(40);
console.log(arr5);


// ------------------------------------------------------------------------------------------
// Q6. Remove the last element using pop().
// ------------------------------------------------------------------------------------------
const arr6 = [10, 20, 30, 40];
arr6.pop();
console.log(arr6);


// ------------------------------------------------------------------------------------------
// Q7. Add an element at the beginning using unshift().
// ------------------------------------------------------------------------------------------
const arr7 = [20, 30, 40];
arr7.unshift(10);
console.log(arr7);


// ------------------------------------------------------------------------------------------
// Q8. Remove the first element using shift().
// ------------------------------------------------------------------------------------------
const arr8 = [10, 20, 30, 40];
arr8.shift();
console.log(arr8);


// ------------------------------------------------------------------------------------------
// Q9. Predict the output:
// ------------------------------------------------------------------------------------------
let nums9 = [1, 2, 3];
nums9.push(4);
console.log(nums9); // [1, 2, 3, 4]


// ------------------------------------------------------------------------------------------
// Q10. Predict the output:
// ------------------------------------------------------------------------------------------
let nums10 = [1, 2, 3];
nums10.pop();
console.log(nums10); // [1, 2]


// ------------------------------------------------------------------------------------------
// Q11. Use delete on an array element  -->  Check: Resulting array  |  Length
// ------------------------------------------------------------------------------------------
let arr11 = [10, 20, 30, 40];
delete arr11[1];
console.log(arr11); // [10, empty, 30, 40]
console.log("Length:", arr11.length); // Length: 4


// ------------------------------------------------------------------------------------------
// Q12. Explain why delete does not reduce array length.
// delete removes the element/property at that index,
// but it does not shift the remaining elements.
// The array keeps the same length and leaves an empty slot (a hole).
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q13. Create two arrays and combine them using concat().
// ------------------------------------------------------------------------------------------
const arr13a = [1, 2, 3];
const arr13b = [4, 5, 6];
const combined13 = arr13a.concat(arr13b);
console.log(combined13);


// ------------------------------------------------------------------------------------------
// Q14. Sort an array of numbers. Observe the output.
// ------------------------------------------------------------------------------------------
const arr14 = [10, 2, 30, 5, 25];
console.log(arr14.sort());
// Default sort() converts elements to strings and sorts lexicographically.
// For numeric ascending order:
// arr14.sort((a, b) => a - b);


// ------------------------------------------------------------------------------------------
// Q15. Reverse an array.
// ------------------------------------------------------------------------------------------
const arr15 = [1, 2, 3, 4, 5];
arr15.reverse();
console.log(arr15);


// ------------------------------------------------------------------------------------------
// Q16. Replace one element using splice().
// ------------------------------------------------------------------------------------------
const arr16 = [10, 20, 30, 40];
arr16.splice(2, 1, 35);
console.log(arr16);


// ------------------------------------------------------------------------------------------
// Q17. Remove two elements using splice().
// ------------------------------------------------------------------------------------------
const arr17 = [10, 20, 30, 40, 50];
arr17.splice(1, 2);
console.log(arr17);


// ------------------------------------------------------------------------------------------
// Q18. Add elements using splice().
// ------------------------------------------------------------------------------------------
const arr18 = [10, 40, 50];
arr18.splice(1, 0, 20, 30);
console.log(arr18);


// ------------------------------------------------------------------------------------------
// Q19. Create a new array using slice().
// ------------------------------------------------------------------------------------------
const arr19 = [10, 20, 30, 40, 50];
const newArr19 = arr19.slice(1, 4);
console.log(newArr19);


// ------------------------------------------------------------------------------------------
// Q20. Explain the difference between splice() and slice().
// ---------- slice(): ----------
// - Creates and returns a new array from a selected portion.
// - Does NOT modify the original array.
//
// ---------- splice(): ----------
// - Adds, removes, or replaces elements.
// - DOES modify the original array.
//
// ---------- Easy memory: ----------
// slice  -> copy a portion
// splice -> change the original
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q21. Print all elements using: for loop  |  for...of  |  forEach()
// ------------------------------------------------------------------------------------------
const arr21 = [10, 20, 30, 40, 50];
// for loop
for (let i = 0; i < arr21.length; i++) {
  console.log(arr21[i]);
}
// for...of
for (const element of arr21) {
  console.log(element);
}
// forEach()
arr21.forEach((element) => {
  console.log(element);
});


// ------------------------------------------------------------------------------------------
// Q22. Create an array: [1, 2, 3, 4, 5]  -->  Use map() to create: [2, 4, 6, 8, 10]
// ------------------------------------------------------------------------------------------
const arr22 = [1, 2, 3, 4, 5];
const doubled22 = arr22.map((num) => num * 2);
console.log(doubled22);


// ------------------------------------------------------------------------------------------
// Q23. Use map() to square every number in an array.
// ------------------------------------------------------------------------------------------
const arr23 = [1, 2, 3, 4, 5];
const squares23 = arr23.map((num) => num * num);
console.log(squares23);


// ------------------------------------------------------------------------------------------
// Q24. Use filter() to extract even numbers.
// ------------------------------------------------------------------------------------------
const arr24 = [1, 2, 3, 4, 5, 6, 7, 8];
const even24 = arr24.filter((num) => num % 2 === 0);
console.log(even24);


// ------------------------------------------------------------------------------------------
// Q25. Use filter() to extract numbers greater than 50.
// ------------------------------------------------------------------------------------------
const arr25 = [20, 55, 10, 75, 40, 90];
const greaterThan50 = arr25.filter((num) => num > 50);
console.log(greaterThan50);


// ------------------------------------------------------------------------------------------
// Q26. Use reduce() to calculate sum of an array.
// ------------------------------------------------------------------------------------------
const arr26 = [10, 20, 30, 40];
const sum26 = arr26.reduce((sum, num) => sum + num, 0);
console.log(sum26);


// ------------------------------------------------------------------------------------------
// Q27. Use reduce() to find product of array elements.
// ------------------------------------------------------------------------------------------
const arr27 = [1, 2, 3, 4, 5];
const product27 = arr27.reduce((product, num) => product * num, 1);
console.log(product27);


// ------------------------------------------------------------------------------------------
// Q28. Convert the string: "JavaScript" into an array using Array.from().
// ------------------------------------------------------------------------------------------
const chars28 = Array.from("JavaScript");
console.log(chars28);


// ------------------------------------------------------------------------------------------
// Q29. Create an array of marks and find: Highest mark  |  Lowest mark
// ------------------------------------------------------------------------------------------
const marks29 = [85, 92, 76, 60, 98];
const highest29 = Math.max(...marks29);
const lowest29 = Math.min(...marks29);
console.log("Highest:", highest29);
console.log("Lowest:", lowest29);


// ------------------------------------------------------------------------------------------
// Q30. Count how many even numbers exist in an array.
// ------------------------------------------------------------------------------------------
const arr30 = [1, 2, 4, 7, 8, 10, 13];
const evenCount30 = arr30.filter((num) => num % 2 === 0).length;
console.log("Even count:", evenCount30);


// ------------------------------------------------------------------------------------------
// Q31. Reverse a string using arrays.
// ------------------------------------------------------------------------------------------
const str31 = "JavaScript";
const reversed31 = Array.from(str31).reverse().join("");
console.log(reversed31);


// ------------------------------------------------------------------------------------------
// Q32. Remove duplicates from an array.
// ------------------------------------------------------------------------------------------
const arr32 = [1, 2, 2, 3, 4, 4, 5, 5];
const unique32 = [...new Set(arr32)];
console.log(unique32);


// ------------------------------------------------------------------------------------------
// Q33. Create an array of student names. Print only names starting with "A".
// ------------------------------------------------------------------------------------------
const students33 = ["Akash", "Aman", "Rahul", "Anjali", "Riya", "Arjun"];
const namesStartingWithA = students33.filter((name) => name.startsWith("A"));
console.log(namesStartingWithA);


// ------------------------------------------------------------------------------------------
// Q34. Explain: map()  |  filter()  |  reduce()  -->  in your own words.
// ---------- map(): ----------
// Creates a new array by transforming every element.
//
// ---------- filter(): ----------
// Creates a new array containing only elements that pass a condition.
//
// ---------- reduce(): ----------
// Processes all elements and combines them into one final value.
//
// ---------- Easy memory: ----------
// map    -> transform
// filter -> select
// reduce -> combine
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q35. Predict every output:
// ------------------------------------------------------------------------------------------
let nums35 = [1, 2, 3];
console.log(nums35.slice(1)); // [2, 3]
console.log(nums35.splice(1, 1)); // [2]
console.log(nums35); // [1, 3]


// ======================================== CHALLENGE ========================================
// ------------------------------------------------------------------------------------------
// Q36. Build a Student Marks Analyzer  -->  Input: [85, 92, 76, 60, 98]
// Find: Total marks | Average marks | Highest marks | Lowest marks
// ------------------------------------------------------------------------------------------
function analyzeMarks(marks) {
  const total = marks.reduce((sum, mark) => sum + mark, 0);
  const average = total / marks.length;
  const highest = Math.max(...marks);
  const lowest = Math.min(...marks);
  return { total, average, highest, lowest };
}
console.log(analyzeMarks([85, 92, 76, 60, 98]));


// ------------------------------------------------------------------------------------------
// Q37. Create a shopping cart system.
// Features: Add item | Remove item | Display all items  -->  Use array methods.
// ------------------------------------------------------------------------------------------
const cart = [];
function addItem(item) {
  cart.push(item);
}
function removeItem(item) {
  const index = cart.indexOf(item);
  if (index !== -1) {
    cart.splice(index, 1);
  }
}
function displayItems() {
  console.log(cart);
}
addItem("Laptop");
addItem("Mouse");
addItem("Keyboard");
displayItems();
removeItem("Mouse");
displayItems();


// ------------------------------------------------------------------------------------------
// Q38. Without running the code, predict every output:
// ------------------------------------------------------------------------------------------
let nums38 = [1, 2, 3];
nums38.push(4);
console.log(nums38); // [1, 2, 3, 4]
nums38.splice(1, 1);
console.log(nums38); // [1, 3, 4]
let doubled38 = nums38.map((num) => num * 2);
console.log(doubled38); // [2, 6, 8]
let even38 = nums38.filter((num) => num % 2 === 0);
console.log(even38); // [4]
let sum38 = nums38.reduce((a, b) => a + b);
console.log(sum38); // 8