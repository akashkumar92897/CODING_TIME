// ======================================== CHAPTER 6: FUNCTIONS ========================================
// ------------------------------------------------------------------------------------------
// Q1. Create a function that prints  -->  Hello JavaScript
// ------------------------------------------------------------------------------------------
function helloJavaScript() {
  console.log("Hello JavaScript");
}
helloJavaScript();


// ------------------------------------------------------------------------------------------
// Q2. Create a function that prints your name.
// ------------------------------------------------------------------------------------------
function printName() {
  console.log("Akash");
}
printName();


// // ------------------------------------------------------------------------------------------
// Q3. Create a function that accepts a name parameter and prints:  -->  Hello <name>
// ------------------------------------------------------------------------------------------
function greetName(name) {
    console.log(`Hello ${name}`);
}
greetName("Akash");


// ------------------------------------------------------------------------------------------
// Q4. Create a function that accepts two numbers and prints their sum.
// ------------------------------------------------------------------------------------------
function printSum(a, b) {
    console.log(a + b);
}
printSum(10, 20);


// ------------------------------------------------------------------------------------------
// Q5. Create a function that returns the sum of two numbers.
// ------------------------------------------------------------------------------------------
function add(a, b) {
    return a + b;
}
console.log(add(10, 20));


// ------------------------------------------------------------------------------------------
// Q6. Explain the difference between  -->  console.log()  and  return
// ---------- console.log(): ----------
// - Prints a value to the console.
// - Mainly used to display/debug a value.
// - Does not send the value back to the caller.

// ---------- return: ----------
// - Sends a value back from a function to its caller.
// - Ends the function execution immediately.
// - The returned value can be stored or used in another expression.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q7. Create a function that returns the square of a number.
// ------------------------------------------------------------------------------------------
function squareNumber(num) {
    return num * num;
}
console.log(squareNumber(5));


// ------------------------------------------------------------------------------------------
// Q8. Create a function that returns the cube of a number.
// ------------------------------------------------------------------------------------------
function cubeNumber(num) {
    return num * num * num;
}
console.log(cubeNumber(3));


// ------------------------------------------------------------------------------------------
// Q9. Create a function that checks whether a number is even or odd.
// ------------------------------------------------------------------------------------------
function checkEvenOdd(num) {
    return num % 2 === 0 ? "Even" : "Odd";
}
console.log(checkEvenOdd(7));


// ------------------------------------------------------------------------------------------
// Q10. Create a function that returns the larger of two numbers.
// ------------------------------------------------------------------------------------------
function largerNumber(a, b) {
    return a > b ? a : b;
}
console.log(largerNumber(10, 25));


// ------------------------------------------------------------------------------------------
// Q11. Create a function that returns the smallest of three numbers.
// ------------------------------------------------------------------------------------------
function smallestNumber(a, b, c) {
    return Math.min(a, b, c);
}
console.log(smallestNumber(10, 5, 20));


// ------------------------------------------------------------------------------------------
// Q12. Create a function that returns  -->  "Adult" if age >= 18  |  "Minor" otherwise
// ------------------------------------------------------------------------------------------
function checkAge(age) {
    return age >= 18 ? "Adult" : "Minor";
}
console.log(checkAge(21));


// ------------------------------------------------------------------------------------------
// Q13. Create a function that calculates the area of a rectangle.
// ------------------------------------------------------------------------------------------
function rectangleArea(length, width) {
    return length * width;
}
console.log(rectangleArea(10, 5));


// ------------------------------------------------------------------------------------------
// Q14. Create a function that calculates the area of a circle.
// ------------------------------------------------------------------------------------------
function circleArea(radius) {
    return Math.PI * radius * radius;
}
console.log(circleArea(5));


// ------------------------------------------------------------------------------------------
// Q15. Create a function that calculates the perimeter of a rectangle.
// ------------------------------------------------------------------------------------------
function rectanglePerimeter(length, width) {
    return 2 * (length + width);
}
console.log(rectanglePerimeter(10, 5));


// ------------------------------------------------------------------------------------------
// Q16. Predict the output:
// ------------------------------------------------------------------------------------------
function greet() {
    console.log("Hello"); // Hello
}
greet();


// ------------------------------------------------------------------------------------------
// Q17. Predict the output:
// ------------------------------------------------------------------------------------------
function add(a, b) {
    return a + b;
}
console.log(add(10, 20)); // 30


// ------------------------------------------------------------------------------------------
// Q18. Predict the output:
// ------------------------------------------------------------------------------------------
function test() {
    return;
}
console.log(test()); // undefined


// ------------------------------------------------------------------------------------------
// Q19. Create a function expression that prints  -->  Welcome
// ------------------------------------------------------------------------------------------
const welcome = function () {
    console.log("Welcome");
};
welcome();


// ------------------------------------------------------------------------------------------
// Q20. Convert the following into a function expression:
// ------------------------------------------------------------------------------------------
// function greet() {
//     console.log("Hello");
// }
// ------------------------------------------------------------------------------------------
const greetExpression = function () {
    console.log("Hello");
};
greetExpression();


// ------------------------------------------------------------------------------------------
// Q21. Create an arrow function that prints  -->  Hello World
// ------------------------------------------------------------------------------------------
const helloWorld = () => {
    console.log("Hello World");
};
helloWorld();


// ------------------------------------------------------------------------------------------
// Q22. Convert the following into an arrow function:
// function square(num) {
//     return num * num;
// }
// ------------------------------------------------------------------------------------------
const squareArrow = (num) => {
    return num * num;
};
console.log(squareArrow(5));


// ------------------------------------------------------------------------------------------
// Q23. Create an arrow function that adds two numbers.
// ------------------------------------------------------------------------------------------
const addArrow = (a, b) => a + b;
console.log(addArrow(10, 20));


// ------------------------------------------------------------------------------------------
// Q24. Create an arrow function that checks whether a number is positive or negative.
// ------------------------------------------------------------------------------------------
const checkPositiveNegative = (num) => {
    if (num > 0) {
        return "Positive";
    } else if (num < 0) {
        return "Negative";
    } else {
        return "Zero";
    }
};
console.log(checkPositiveNegative(-5));


// ------------------------------------------------------------------------------------------
// Q25. Predict the output:
// ------------------------------------------------------------------------------------------
const square = num => num * num;
console.log(square(5));
// Output:
// 25


// ------------------------------------------------------------------------------------------
// Q26. Create a function with a default parameter  -->  name = "Guest"
// ------------------------------------------------------------------------------------------
function greetGuest(name = "Guest") {
    console.log(`Hello ${name}`);
}
greetGuest();
greetGuest("Akash");


// ------------------------------------------------------------------------------------------
// Q27. Create a greeting function that uses default parameters.
// ------------------------------------------------------------------------------------------
function greeting(name = "Guest", city = "Delhi") {
    console.log(`Hello ${name} from ${city}`);
}
greeting();
greeting("Akash", "Delhi");


// ------------------------------------------------------------------------------------------
// Q28. Explain  -->  Parameters and Arguments in your own words.
// ---------- Parameters: ----------
// - Variables written in the function definition.
// - They act as placeholders for incoming values.
//
// ---------- Arguments: ----------
// - Actual values passed when calling the function.
//
// ---------- Example: ----------
// function greet(name) { }  --> name is a parameter.
// greet("Akash");           --> "Akash" is an argument.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q29. Demonstrate function scope using an example.
// ------------------------------------------------------------------------------------------
function functionScopeExample() {
    let message = "Inside function";
    console.log(message);
}
functionScopeExample(); // message cannot be accessed outside the function.


// ------------------------------------------------------------------------------------------
// Q30. Predict the output:
// ------------------------------------------------------------------------------------------
function demo() {
    let age = 21;
}
console.log(typeof age); // "undefined"
// Note: age itself is not accessible outside the function.
// Direct console.log(age) would throw ReferenceError.


// ------------------------------------------------------------------------------------------
// Q31. Predict the output:
// ------------------------------------------------------------------------------------------
sayHi();
function sayHi() {
    console.log("Hi"); // Hi
}


// ------------------------------------------------------------------------------------------
// Q32. Predict the output:
// ------------------------------------------------------------------------------------------
// sayHi();
// const sayHi = function() {
//     console.log("Hi"); // ReferenceError: Cannot access 'sayHi' before initialization
// };


// ------------------------------------------------------------------------------------------
// Q33. Create a callback function example.
// ------------------------------------------------------------------------------------------
function processUser(name, callback) {
    callback(name);
}
function sayHello(name) {
    console.log(`Hello ${name}`);
}
processUser("Akash", sayHello);


// ------------------------------------------------------------------------------------------
// Q34. Create a function that accepts another function as an argument.
// ------------------------------------------------------------------------------------------
function calculate(a, b, operation) {
    return operation(a, b);
}
function multiply(a, b) {
    return a * b;
}
console.log(calculate(5, 4, multiply));


// ------------------------------------------------------------------------------------------
// Q35. Create a function that returns  -->  Sum  |  Difference  |  Product of two numbers.
// ------------------------------------------------------------------------------------------
function operations(a, b) {
    return {
        sum: a + b,
        difference: a - b,
        product: a * b
    };
}
console.log(operations(10, 5));


// ------------------------------------------------------------------------------------------
// Q36. Create a calculator function that performs  -->  + | - | * | / based on user input.
// ------------------------------------------------------------------------------------------
function calculator(a, operator, b) {
    switch (operator) {
        case "+":
            return a + b;
        case "-":
            return a - b;
        case "*":
            return a * b;
        case "/":
            return b !== 0 ? a / b : "Cannot divide by zero";
        default:
            return "Invalid operator";
    }
}
console.log(calculator(10, "+", 5));
console.log(calculator(10, "-", 5));
console.log(calculator(10, "*", 5));
console.log(calculator(10, "/", 5));


// ------------------------------------------------------------------------------------------
// Q37. Create a function that counts vowels in a string.
// ------------------------------------------------------------------------------------------
function countVowels(str) {
    let count = 0;
    for (const char of str) {
        if ("aeiouAEIOU".includes(char)) {
            count++;
        }
    }
    return count;
}
console.log(countVowels("JavaScript"));


// ------------------------------------------------------------------------------------------
// Q38. Create a function that reverses a string.
// ------------------------------------------------------------------------------------------
function reverseString(str) {
    let reversed = "";
    for (let i = str.length - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}
console.log(reverseString("Akash"));


// ------------------------------------------------------------------------------------------
// Q39. Create a function that checks whether a string is a palindrome.
// ------------------------------------------------------------------------------------------
function isPalindrome(str) {
    const reversed = reverseString(str);
    return str === reversed;
}
console.log(isPalindrome("madam"));


// ------------------------------------------------------------------------------------------
// Q40. Explain: Function Declaration | Function Expression | Arrow Function & when to use.
// ---------- Function Declaration: ----------
// - Defined using the function keyword.
// - Hoisted, so it can be called before its declaration.
// - Useful for regular named functions.
//
// ---------- Function Expression: ----------
// - A function is stored in a variable.
// - The variable follows its own declaration rules.
// - Useful when a function is treated as a value.
//
// ---------- Arrow Function: ----------
// - Shorter function syntax.
// - Useful for callbacks and concise functions.
// - Does not have its own `this`, `arguments`, or `prototype`.
// - Commonly used with array methods such as map(), filter(), and forEach().
//
// ---------- Easy memory: ----------
// Declaration  -> function declaration
// Expression   -> function stored in variable
// Arrow        -> concise function syntax
// ------------------------------------------------------------------------------------------


// ======================================== CHALLENGE ========================================
// ------------------------------------------------------------------------------------------
// Q41. Build a Student Report Generator function.
// Input: Name | Marks
// Output: Name | Marks | Grade
// Rules: 90+ -> A | 75+ -> B | 60+ -> C | Below 60 -> Fail
// ------------------------------------------------------------------------------------------
function studentReport(name, marks) {
    let grade;
    if (marks >= 90) {
        grade = "A";
    } else if (marks >= 75) {
        grade = "B";
    } else if (marks >= 60) {
        grade = "C";
    } else {
        grade = "Fail";
    }
    return {name: name, marks: marks, grade: grade};
}
console.log(studentReport("Akash", 82));


// ------------------------------------------------------------------------------------------
// Q42. Build a mini calculator using functions.
// Requirements: add() | subtract() | multiply() | divide()
// Call all functions and display results.
// ------------------------------------------------------------------------------------------
function add42(a, b) {
    return a + b;
}
function subtract42(a, b) {
    return a - b;
}
function multiply42(a, b) {
    return a * b;
}
function divide42(a, b) {
    return b !== 0 ? a / b : "Cannot divide by zero";
}
console.log("Add:", add42(20, 10));
console.log("Subtract:", subtract42(20, 10));
console.log("Multiply:", multiply42(20, 10));
console.log("Divide:", divide42(20, 10));


// ------------------------------------------------------------------------------------------
// Q43. Without running the code, predict every output:
// ------------------------------------------------------------------------------------------
function add43(a, b) {
    return a + b;
}
console.log(add43(5, 10)); // Output: 15

const square43 = num => num * num;
console.log(square43(4)); // Output: 16

function demo43() {
    return "Hello";
}
console.log(demo43()); // Output: Hello

function test43() {}
console.log(test43()); // Output: undefined