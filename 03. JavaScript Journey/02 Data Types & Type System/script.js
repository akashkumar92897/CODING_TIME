// ======================================== CHAPTER 2: DATA TYPES & TYPE SYSTEM ========================================

// ------------------------------------------------------------------------------------------
// Q1. Create variables storing:
// Your name  |  Your age  |  Your city  |  Whether you are a student
// Print their values and datatypes.
// ------------------------------------------------------------------------------------------

let name = "Akash Kumar";
let age = 22;
let city = "Delhi";
let student = true;
console.log(name + " -> " + typeof(name));
console.log(age + " -> " + typeof(age));
console.log(city + " -> " + typeof(city));
console.log(student + " -> " + typeof(student));


// ------------------------------------------------------------------------------------------
// Q2. Create one variable for each primitive datatype.
// String  |  Number  |  Boolean  |  Undefined  |  Null  |  Symbol  |  BigInt
// Print their datatypes.
// ------------------------------------------------------------------------------------------

let name1 = "Akash";
let age1 = 21;
let isLoggedIn = true;
let city1;
let user = null;
const id = Symbol("id");
let number = 12345678901234567890n;


// ------------------------------------------------------------------------------------------
// Q3. Create   -->   An object  |  An array  |  A function
// Check their datatypes using typeof.
// ------------------------------------------------------------------------------------------

const emp = {
    name: "Akash",
    age: 21
};

const nums = [1, 2, 3];

function greet() {
    console.log("Hello");
}

// ------------------------------------------------------------------------------------------
// Q4. Predict the output before running:
// ------------------------------------------------------------------------------------------

console.log(typeof "Akash")         //  string
console.log(typeof 21)              //  number
console.log(typeof true)            //  boolean
console.log(typeof undefined)       //  undefined


// ------------------------------------------------------------------------------------------
// Q5. Predict the output before running:
// ------------------------------------------------------------------------------------------

console.log(typeof null)           //  object
console.log(typeof [])             //  object
console.log(typeof {})             //  object
console.log(typeof function(){})   //  function


// ------------------------------------------------------------------------------------------
// Q6. Create a student object and print   -->   Name  |  Age  |  Course
// ------------------------------------------------------------------------------------------

const obj = {
    name: "Akash",
    age: 22,
    course: "BCA"
}

// ------------------------------------------------------------------------------------------
// Q7. Create an array containing:
// 10, 20, 30, 40, 50
// Print   -->   First element  |  Last element  |  Length
// ------------------------------------------------------------------------------------------

const arr = [10, 20, 30, 40, 50]
console.log(arr[0])
console.log(arr[4])
console.log(arr.length)


// ------------------------------------------------------------------------------------------
// Q8. Predict the output:
// ------------------------------------------------------------------------------------------

console.log("5" + 1)          //   51  


// ------------------------------------------------------------------------------------------
// Q9. Predict the output:
// ------------------------------------------------------------------------------------------

console.log("5" - 1)         //   4


// ------------------------------------------------------------------------------------------
// Q10. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(true + 1)            //   2


// ------------------------------------------------------------------------------------------
// Q11. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(false + 1)           //   1


// ------------------------------------------------------------------------------------------
// Q12. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(null + 1)           //   1


// ------------------------------------------------------------------------------------------
// Q13. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(undefined + 1)          //   NaN


// ------------------------------------------------------------------------------------------
// Q14. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(5 == "5")         //   true


// ------------------------------------------------------------------------------------------
// Q15. Predict the output:
// ------------------------------------------------------------------------------------------

console.log(5 === "5")            //   false


// ------------------------------------------------------------------------------------------
// Q16. Explain the difference between:
// == and ===
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q17. Check whether the following are Truthy or Falsy:
// false  |  0  |  ""  |  null  |  undefined  |  NaN
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q18. Check whether the following are Truthy or Falsy:
// "0"  |  "false"  |  []  |  {}  |  function(){}
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q19. Create an if statement using:
// "0"
// Observe whether the block executes.
// ------------------------------------------------------------------------------------------

if(0){
    console.log("Hello")
}


// ------------------------------------------------------------------------------------------
// Q20. Create an if statement using:
// []
// Observe whether the block executes.
// ------------------------------------------------------------------------------------------

if([]){
    console.log("Hello")
}


// ------------------------------------------------------------------------------------------
// Q21. Create an if statement using:
// {}
// Observe whether the block executes.
// ------------------------------------------------------------------------------------------

if({}){
    console.log("Hello")
}


// ------------------------------------------------------------------------------------------
// Q22. Write a function:
// isEmpty(value)
// Return true if value is:
// - null
// - undefined
// - ""
// ------------------------------------------------------------------------------------------

function isEmpty(value){
    if (value === null){
        return true;
    } else if (value === undefined){
        return true;
    }else if(value === ""){
        return true;
    } else{
        return false;
    }
}

ans = isEmpty("null")
console.log(ans);


// ------------------------------------------------------------------------------------------
// Q23. Predict the output:
console.log(Boolean(0))           //   false
console.log(Boolean("0"))         //   true
console.log(Boolean([]))          //   true
console.log(Boolean(undefined))   //   false
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q24. Predict the output:
console.log(typeof NaN)           //   Number
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q25. Generate NaN using at least 3 different examples.
// ------------------------------------------------------------------------------------------

console.log(0 / 0);             // NaN
console.log(Number("Hello"));   // NaN
console.log(parseInt("abc"));   // NaN

// ------------------------------------------------------------------------------------------
// Q26. Create a mini profile object containing:
// Name  |  Age  |  Skills  |  Education   -->   Print all values.
// ------------------------------------------------------------------------------------------

const profile = {
    Name: "Akash",
    Age: 22,
    Skills: "JS",
    Education: "BCA"
}
console.log(profile)

// ------------------------------------------------------------------------------------------
// Q27. Create a mini dictionary object containing 10 words and meanings.
// Access and print at least 3 meanings.
// ------------------------------------------------------------------------------------------

const dict = {
    serendipity:    "Lucky chance find",
    petrichor:      "Rain's earthy scent",
    ephemeral:      "Fleeting and short-lived",
    mellifluous:    "Sweet, musical sound",
    liminal:        "Transitional mid-stage",
    solitude:       "Peaceful alone time",
    nefarious:      "Wicked or evil",
    quintessential: "Perfect, typical example",
    taciturn:       "Silent and reserved",
    ubiquitous:     "Everywhere at once"
};

console.log(dict);


// ------------------------------------------------------------------------------------------
// Q28. Explain: Primitive Types in your own words.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q29. Explain: Reference Types in your own words.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q30. Without running the code, predict every output:
console.log("10" + 1);            //   101
console.log("10" - 1);            //   9
console.log(true + false);        //   1
console.log(typeof null);         //   object
console.log(typeof NaN);          //   Number
console.log(5 == "5");            //   true
console.log(5 === "5");           //   false
// ------------------------------------------------------------------------------------------


// ======================================== CHALLENGE ========================================

// ------------------------------------------------------------------------------------------
// Q31. Create a program that accepts any value and prints:
// - Value
// - Datatype
// - Whether it is Truthy or Falsy

// Examples:
// Input: "Hello"
// Output:
// Datatype: string
// Truthy

// Input: 0
// Output:
// Datatype: number
// Falsy
// ------------------------------------------------------------------------------------------

let value = "0";

console.log("Value:", value);
console.log("Datatype:", typeof value);
console.log("Truthy?", !!value);