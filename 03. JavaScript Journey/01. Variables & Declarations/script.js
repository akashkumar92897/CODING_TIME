// ======================================== CHAPTER 1: VARIABLES & DECLARATIONS ========================================

// ------------------------------------------------------------------------------------------
// Q1. Create variables to store:
// Your name  |  Your age  |  Your city
// Use the most appropriate declaration keyword.
// ------------------------------------------------------------------------------------------

let name = "AKASH";
let age = 22;
let city = "New Delhi";


// ------------------------------------------------------------------------------------------
// Q2. Declare a variable using let and update its value three times. Print the final value.
// ------------------------------------------------------------------------------------------

let height = 40;
height = 60;
height = 90;
console.log(height)


// ------------------------------------------------------------------------------------------
// Q3. Declare a constant PI with value 3.14. Try changing its value. Observe the error.
// ------------------------------------------------------------------------------------------

const pi = 3.14
// pi = 22.4           ->          Uncaught TypeError: Assignment to constant variable.
console.log(pi)


// ------------------------------------------------------------------------------------------
// Q4. Predict the output before running.
// ------------------------------------------------------------------------------------------

console.log(a);
var a = 10;         //undefined (Reason: Hoisting)


// ------------------------------------------------------------------------------------------
// Q5. Predict the output before running.
// console.log(b);
// let b = 20;          ->   Uncaught ReferenceError: Cannot access 'b' before initialization
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q6. Predict the output before running.
// console.log(c);
// const c = 30;        ->   Uncaught ReferenceError: Cannot access 'c' before initialization
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q7. Will this work?
// let score = 10;
// let score = 20;
// Why?         ->   SyntaxError   ->   We can't redeclare let.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q8. Will this work?
// var marks = 50;
// var marks = 80;
// Why?         ->   NoError   ->   Var can be redecalre and reassignes.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q9. Create a block using {}
// Declare: var x  |  let y  |  const z  |  Try accessing them outside the block.
// ------------------------------------------------------------------------------------------

{
    var x = 33;
    let y = 54;
    const z = 22 / 7;
}
console.log(x)          //   33 (var is function scoped, will consider as global scoped here)
// console.log(y)      //   Uncaught ReferenceError: y is not defined {let is block scoped}
// console.log(z)     //   Uncaught ReferenceError: z is not defined {const is block scoped}


// ------------------------------------------------------------------------------------------
// Q10. Predict the output.
// ------------------------------------------------------------------------------------------

// {
//     var a = 10;
// }
// console.log(a);         // 10 


// ------------------------------------------------------------------------------------------
// Q11. Predict the output.
// ------------------------------------------------------------------------------------------

{
    let b = 20;
}
// console.log(b);     ->  Uncaught ReferenceError: b is not defined {let is block scoped}


// ------------------------------------------------------------------------------------------
// Q12. Predict the output.
// ------------------------------------------------------------------------------------------

{
    const c = 30;
}
// console.log(c);      ->  Uncaught ReferenceError: z is not defined {const is block scoped}



// // ======================================== TDZ & HOISTING ========================================

// ------------------------------------------------------------------------------------------
// Q13. Observe the output.
// ------------------------------------------------------------------------------------------

console.log(count);
var count = 42;         //   //undefined (Reason: Hoisting)


// Q14. Observe the output.
// console.log(age);
// let age = 21;
// Explain why.


// Q15. Observe the output.
// console.log(name);
// const name = "Akash";
// Explain why.

// ------------------------------------------------------------------------------------------
// Q16. What is Temporal Dead Zone? Write the definition in comments.
// ------------------------------------------------------------------------------------------



// ======================================== CONST OBJECTS & ARRAYS ========================================

// Q17. Create a const object:
// {
//     name: "Akash"
// }
// Add:
// - age
// - city
// Print the object.


// Q18. Try doing:
// student = {}
// Observe the result.


// Q19. Create a const array. Add 5 values using push().


// Q20. Try reassigning the array. Observe the result.



// // ======================================== DEBUGGING QUESTIONS ========================================

// Q21. Fix the code.
// const age;
// age = 21;


// Q22. Fix the code.
// let city = "Delhi";
// let city = "Mumbai";


// Q23. Fix the code.
// console.log(name);
// const name = "Akash";



// // ======================================== REAL WORLD QUESTIONS ========================================

// Q24. Create variables for a student:
// - name
// - age
// - course
// - college
// Choose correct declaration keywords.


// Q25. Create a profile object using const.
// Store:
// - name
// - skills
// - education
// Add one more property later.


// Q26. Create a shopping cart array using const.
// Add:
// - Laptop
// - Mouse
// - Keyboard
// Print the final array.


// // ======================================== INTERVIEW STYLE QUESTIONS ========================================

// Q27. Difference between:
// var
// let
// const
// Write answer in comments.


// Q28. What is hoisting? Write answer in comments.


// Q29. What is block scope? Write answer in comments.


// Q30.
// Why should modern JavaScript prefer:
// const → let → var
// Write answer in comments.


// // ======================================== CHALLENGE ========================================

// Q31. Without running the code, predict every output.
var a = 10;
{
    var a = 20;
}
console.log(a);         // 20

let b = 10;
{
    let b = 20;
}

console.log(b);         // 10

const obj = {
    name: "Akash"
};

obj.name = "Rahul";

console.log(obj.name);          // Rahul