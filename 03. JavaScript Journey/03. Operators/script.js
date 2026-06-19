// ======================================== CHAPTER 3: OPERATORS ========================================

// ------------------------------------------------------------------------------------------
// Q1. Create two variables:
// Perform: Addition | Subtraction | Multiplication | Division | Modulus | Exponentiation
// Print all results.
// ------------------------------------------------------------------------------------------

let num1 = 20
let num2 = 5
console.log(num1 + num2)
console.log(num1 - num2)
console.log(num1 * num2)
console.log(num1 / num2)
console.log(num1 % num2)
console.log(num1 ** num2)


// ------------------------------------------------------------------------------------------
// Q2. Find the output:
// ------------------------------------------------------------------------------------------

console.log(10 + 5)           //  15
console.log(10 - 5)           //  5
console.log(10 * 5)           //  50
console.log(10 / 5)           //  2
console.log(10 % 3)           //  1
console.log(2 ** 4)           //  16


// ------------------------------------------------------------------------------------------
// Q3. Create a variable score = 10.
// Perform: score += 5 | score -= 2 | score *= 2 | score /= 2 | score %= 3
// Print the value after each operation.
// ------------------------------------------------------------------------------------------

let score = 10;
console.log(score += 5)
console.log(score -= 5)
console.log(score *= 5)
console.log(score /= 5)
console.log(score %= 5)

// ------------------------------------------------------------------------------------------
// Q4. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(5 == "5");       //  true


// ------------------------------------------------------------------------------------------
// Q5. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(5 === "5");      //  flase


// ------------------------------------------------------------------------------------------
// Q6. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(10 != "10");     //  false


// ------------------------------------------------------------------------------------------
// Q7. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(10 !== "10");        //  true


// ------------------------------------------------------------------------------------------
// Q8. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(10 > 5);     //  true
console.log(10 < 5);     //  false
console.log(10 >= 10);   //  true
console.log(10 <= 5);    //  false


// ------------------------------------------------------------------------------------------
// Q9. Explain the difference between  -->  ==  |  ===  |  !=  |  !==
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q10. Create a program that checks whether a number is:
// Greater than 100  |  Equal to 100  |  Less than 100
// Using comparison operators.
// ------------------------------------------------------------------------------------------

let num = 100;
if (num > 100){
    console.log("Greater than 100");
} else if (num < 100){
    console.log("Less than 100");
} else {
    console.log("Equal to 100");
}


// ------------------------------------------------------------------------------------------
// Q11. Create variables:
// Check whether a person can enter a club using: &&
// ------------------------------------------------------------------------------------------

let age = 18
let hasID = true
if (age >= 18 && hasID === true){
    console.log("Eligible!")
} else {
    console.log("Not Eligible!!")
}


// ------------------------------------------------------------------------------------------
// Q12. Create variables:
// Check whether you can relax using: ||
// ------------------------------------------------------------------------------------------

let isWeekend = true
let isHoliday = false
if (isWeekend === true || isHoliday === true){
    console.log("You can relax!")
} else {
    console.log("Work Work Work !!!")
}


// ------------------------------------------------------------------------------------------
// Q13. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(true && true);           //   true
console.log(true && false);          //   false
console.log(false && true);          //   false
console.log(false && false);         //   false


// ------------------------------------------------------------------------------------------
// Q14. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(true || true);           //   true
console.log(true || false);          //   true
console.log(false || true);          //   true
console.log(false || false);         //   false


// ------------------------------------------------------------------------------------------
// Q15. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(!true);          //   false
console.log(!false);         //   true


// ------------------------------------------------------------------------------------------
// Q16. Create a login system using:
// isLoggedIn = true   -->   Print:   Welcome User   |   Please Login
// Using the NOT operator.
// ------------------------------------------------------------------------------------------

isLoggedIn = false
if(!isLoggedIn){
    console.log("Welcome User 😊")
} else {
    console.log("Please Login")
}


// ------------------------------------------------------------------------------------------
// Q17. Convert the following string into a number using unary plus: "42"
// ------------------------------------------------------------------------------------------

let str = "42";
console.log(+str);


// ------------------------------------------------------------------------------------------
// Q18. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(+"10");      //  10 
console.log(+"100");     //  100
console.log(+"abc");     //  NaN


// ------------------------------------------------------------------------------------------
// Q19. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(-10);        //  -10
console.log(-(-10));     //  10


// ------------------------------------------------------------------------------------------
// Q20. Create a variable count = 5. Use:  |  count++  |  ++count
// Observe the difference.
// ------------------------------------------------------------------------------------------

let count = 4;
console.log(count++)        //  4
console.log(++count)        //  6


// ------------------------------------------------------------------------------------------
// Q21. Predict the output:
// ------------------------------------------------------------------------------------------

let x = 5;

console.log(x++);        //  5
console.log(x);          //  6


// ------------------------------------------------------------------------------------------
// Q22. Predict the output:
// ------------------------------------------------------------------------------------------

let y = 5;

console.log(++y);        //  6
console.log(y);          //  6


// ------------------------------------------------------------------------------------------
// Q23. Explain the difference between  -->  x++  |  ++x
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q24. Use a ternary operator to print  -->  "Adult" if age >= 18  |  "Minor" otherwise
// ------------------------------------------------------------------------------------------

let age1 = 22;
console.log(age1 >= 18 ? "Adult" : "Minor");


// ------------------------------------------------------------------------------------------
// Q25. Convert the following if-else into a ternary operator:
// if (marks >= 40) {
//     console.log("Pass");
// }
// else {
//     console.log("Fail");
// }
// ------------------------------------------------------------------------------------------

let marks = 44;
console.log(marks >= 40 ? "PASS" : "FAIL")


// ------------------------------------------------------------------------------------------
// Q26. Predict the output:
// ------------------------------------------------------------------------------------------

let age2 = 17;
let result = age2 >= 18 ? "Adult" : "Minor";
console.log(result);         //   Minor


// ------------------------------------------------------------------------------------------
// Q27. Check the datatype of:
// ------------------------------------------------------------------------------------------

console.log(typeof "Akash")
console.log(typeof 100)
console.log(typeof true)
console.log(typeof undefined)
console.log(typeof null)
console.log(typeof [])
console.log(typeof {})
console.log(typeof function(){})


// ------------------------------------------------------------------------------------------
// Q28. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(typeof "Hello");         //   String
console.log(typeof 123);             //   Number
console.log(typeof true);            //   Boolean
console.log(typeof []);              //   Object


// ------------------------------------------------------------------------------------------
// Q29. Predict the output:
// ------------------------------------------------------------------------------------------

console.log("5" + 1);        //  51
console.log("5" - 1);        //  4


// ------------------------------------------------------------------------------------------
// Q30. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(true + false);       //  1
console.log(true + 1);           //  2
console.log(false + 1);          //  1


// ------------------------------------------------------------------------------------------
// Q31. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(!!"Akash");      //  True
console.log(!!0);            //  false
console.log(!![]);           //  true
console.log(!!"");           //  false


// ------------------------------------------------------------------------------------------
// Q32. Create a calculator using  -->  +  |  -  |  *  |  /
// Take two numbers and print the result.
// ------------------------------------------------------------------------------------------

let n1 = 5;
let n2 = 4;
console.log("Addition : " + (n1 + n2))
console.log("Subtraction : " + (n1 - n2))
console.log("Multiply : " + (n1 * n2))
console.log("Division : " + (n1 / n2))


// ------------------------------------------------------------------------------------------
// Q33. Create a grade checker using ternary operators.
// Conditions:  Marks >= 90 → Excellent  |  Otherwise → Not Excellent
// ------------------------------------------------------------------------------------------

let Marks = 77;
console.log(Marks >= 90 ? "Excellent" : "Not Excellent")


// ------------------------------------------------------------------------------------------
// Q34. Create a voting eligibility checker using  -->  age  |  citizenship
// Use logical operators.
// ------------------------------------------------------------------------------------------

let age3 = 12;
let isCitizen = true;
if (age3 >= 18 && isCitizen === true){
    console.log("Eligible!")
} else {
    console.log("Not Eligible!!")
}


// ------------------------------------------------------------------------------------------
// Q35. Explain in your own words:
// Arithmetic Operators | Assignment Operators | Comparison Operators | Logical Operators  |  
// Unary Operators  |  Ternary Operator
// ------------------------------------------------------------------------------------------


// ======================================== CHALLENGE ========================================

// ------------------------------------------------------------------------------------------
// Q36. Without running the code, predict every output:
// ------------------------------------------------------------------------------------------

console.log("10" + 1);            //   101
console.log("10" - 1);            //   9
console.log(5 == "5");            //   true
console.log(5 === "5");           //   false
console.log(true && false);       //   false
console.log(true || false);       //   true
console.log(!true);               //   false
let p = 5;
console.log(p++); -               //   5
console.log(++p);                 //   7
console.log(typeof null);         //   object
console.log(!!"JavaScript");      //   true


// ------------------------------------------------------------------------------------------
// Q37. Create a program that:
// Accepts two numbers  -->  Accepts an operator (+, -, *, /)  -->  Performs the operation
// Prints the result
// (Hint: You'll properly learn a better solution using switch-case in the next chapter.)
// ------------------------------------------------------------------------------------------

let N1 = 5;
let N2 = 3;
let operator = "+";

if (operator === "+") {
    console.log("Result:", N1 + N2);
}
else if (operator === "-") {
    console.log("Result:", N1 - N2);
}
else if (operator === "*") {
    console.log("Result:", N1 * N2);
}
else if (operator === "/") {
    console.log("Result:", N1 / N2);
}
else {
    console.log("Invalid operator");
}