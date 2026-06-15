// ======================================== CHAPTER 1: VARIABLES & DECLARATIONS ========================================

Q1. Create variables to store:
- Your name
- Your age
- Your city
Use the most appropriate declaration keyword.


Q2. Declare a variable using let and update its value three times. Print the final value.


Q3. Declare a constant PI with value 3.14. Try changing its value. Observe the error.



Q4. Predict the output before running.
console.log(a);
var a = 10;


Q5. Predict the output before running.
console.log(b);
let b = 20;


Q6. Predict the output before running.
console.log(c);
const c = 30;


Q7. Will this work?
let score = 10;
let score = 20;
Why?


Q8. Will this work?
var marks = 50;
var marks = 80;
Why?


Q9. Create a block using {}
Declare:
- var x
- let y
- const z
Try accessing them outside the block. Observe the result.


Q10. Predict the output.
{
    var a = 10;
}
console.log(a);


Q11. Predict the output.
{
    let b = 20;
}
console.log(b);


Q12. Predict the output.
{
    const c = 30;
}
console.log(c);



// ======================================== TDZ & HOISTING ========================================

Q13. Observe the output.
console.log(count);
var count = 42;
Explain why.


Q14. Observe the output.
console.log(age);
let age = 21;
Explain why.


Q15. Observe the output.
console.log(name);
const name = "Akash";
Explain why.


Q16. What is Temporal Dead Zone? Write the definition in comments.



// ======================================== CONST OBJECTS & ARRAYS ========================================

Q17. Create a const object:
{
    name: "Akash"
}
Add:
- age
- city
Print the object.


Q18. Try doing:
student = {}
Observe the result.


Q19. Create a const array. Add 5 values using push().


Q20. Try reassigning the array. Observe the result.



// ======================================== DEBUGGING QUESTIONS ========================================

Q21. Fix the code.
const age;
age = 21;


Q22. Fix the code.
let city = "Delhi";
let city = "Mumbai";


Q23. Fix the code.
console.log(name);
const name = "Akash";



// ======================================== REAL WORLD QUESTIONS ========================================

Q24. Create variables for a student:
- name
- age
- course
- college
Choose correct declaration keywords.


Q25. Create a profile object using const.
Store:
- name
- skills
- education
Add one more property later.


Q26. Create a shopping cart array using const.
Add:
- Laptop
- Mouse
- Keyboard
Print the final array.


// ======================================== INTERVIEW STYLE QUESTIONS ========================================

Q27. Difference between:
var
let
const
Write answer in comments.


Q28. What is hoisting? Write answer in comments.


Q29. What is block scope? Write answer in comments.


Q30.
Why should modern JavaScript prefer:
const → let → var
Write answer in comments.


// ======================================== CHALLENGE ========================================

Q31. Without running the code, predict every output.
var a = 10;
{
    var a = 20;
}
console.log(a);

let b = 10;
{
    let b = 20;
}

console.log(b);

const obj = {
    name: "Akash"
};

obj.name = "Rahul";

console.log(obj.name);