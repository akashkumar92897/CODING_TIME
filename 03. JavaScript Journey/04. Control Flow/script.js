// ======================================== CHAPTER 4: CONTROL FLOW ========================================

// ------------------------------------------------------------------------------------------
// Q1. Create a program that checks:
// If a person is eligible to vote  |  If not, print a suitable message
// ------------------------------------------------------------------------------------------

let age = 19;
if (age >= 18) {
    console.log("Eligible!");
} else {
    console.log("Not Eligible!!")
}

// ------------------------------------------------------------------------------------------
// Q2. Create a program that checks whether a number is  -->  Positive  |  Negative  |  Zero
// ------------------------------------------------------------------------------------------

let number = 23;
if (number > 0) {
    console.log("Positive No.")
} else if (number < 0) {
    console.log("Negative No.")
} else {
    console.log("Zero ! ")
}


// ------------------------------------------------------------------------------------------
// Q3. Create a program that checks  -->  Even  |  Odd  -->  using if-else.
// ------------------------------------------------------------------------------------------

let num = 23;
if (num % 2 === 0) {
    console.log("Even No.")
} else if (num % 2 !== 0) {
    console.log("Odd No.")
} else {
    console.log("Zero ! ")
}


// ------------------------------------------------------------------------------------------
// Q4. Predict the output:
// ------------------------------------------------------------------------------------------

let age1 = 20;
if (age1 >= 18) {
    console.log("Adult");        //  Adult
}


// ------------------------------------------------------------------------------------------
// Q5. Predict the output:
// ------------------------------------------------------------------------------------------

let age2 = 15;
if (age2 >= 18) {
    console.log("Adult");
}
else {
    console.log("Minor");        //  Minor
}


// ------------------------------------------------------------------------------------------
// Q6. Create a grade checker  -->  90+ : A  |  75+ : B  |  60+ : C  |  Below 60 : Fail
// ------------------------------------------------------------------------------------------

let marks = 69;
if (marks > 90) {
    console.log("A Grade.")
} else if (marks > 75 && marks <= 90) {
    console.log("B Grade.")
} else if (marks > 60 && marks <= 75) {
    console.log("C Grade.")
} else {
    console.log("Fail !")
}


// ------------------------------------------------------------------------------------------
// Q7. Create a salary bonus program  -->  Salary > 50000 → Bonus  |  Otherwise → No Bonus
// ------------------------------------------------------------------------------------------

let salary = 56555;
if (salary >= 50000) {
    console.log("Eligible for bonus 🥳")
} else {
    console.log("Not Eligible 😔")
}


// ------------------------------------------------------------------------------------------
// Q8. Create a login system:
// If user is logged in  -->  Print Welcome  |  Otherwise  -->  Print Please Login
// ------------------------------------------------------------------------------------------

let user = "logged in";
if (user === "logged in") {
    console.log("Welcome to JS!")
} else {
    console.log("Please Login !")
}


// ------------------------------------------------------------------------------------------
// Q9. Create a program that checks -> Divisible by 2 | Divisible by 3 | Divisible by both
// ------------------------------------------------------------------------------------------

let nums = 11;
if (nums % 2 === 0 && nums % 3 === 0) {
    console.log("Number is divisible by 2 & 3 : " + nums)
} else if (nums % 2 === 0) {
    console.log("Number is divisible by 2 : " + nums)
} else if (nums % 3 === 0) {
    console.log("Number is divisible by 3 : " + nums)
} else {
    console.log("Number is neither divisble by 2 nor by 3 : " + nums)
}


// ------------------------------------------------------------------------------------------
// Q10. Predict the output:
// ------------------------------------------------------------------------------------------

let mark = 85;
if (mark >= 90) {
    console.log("A");
}
else if (mark >= 75) {
    console.log("B");        //  B
}
else {
    console.log("C");
}


// ------------------------------------------------------------------------------------------
// Q11. Predict the output:
// ------------------------------------------------------------------------------------------

let mark1 = 95;
if (mark1 >= 50) {
    console.log("Pass");        //   Pass
}
else if (mark1 >= 90) {
    console.log("Excellent");
}


// ------------------------------------------------------------------------------------------
// Q12. Explain why Q11 produces that output.
// if condition doesn't have a range. It simply calculates if it is >=50, so program doesn't
// go towards second condition.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q13. Create a switch statement for:
// Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday
// Print a different message for each day.
// ------------------------------------------------------------------------------------------

let day = "Sunday";
switch (day) {
    case "Monday":
        console.log("First day of week");
        break;
    case "Tuesday":
        console.log("Second day of week");
        break;
    case "Wednesday":
        console.log("Third day of week")
        break;
    case "Thursday":
        console.log("Fourth day of week");
        break;
    case "Friday":
        console.log("Fifth day of week");
        break;
    case "Saturday":
        console.log("First Weekend")
        break;
    case "Sunday":
        console.log("Second Weekend")
        break;
}


// ------------------------------------------------------------------------------------------
// Q14. Create a switch statement for traffic lights -> Red | Yellow | Green
// Print the appropriate action.
// ------------------------------------------------------------------------------------------

let light = "Yellow";
switch (light) {
    case ("Red"):
        console.log("Wait for green light ✋")
        break;
    case ("Yellow"):
        console.log("Slow down your vehicle 🫸")
        break;
    case ("Green"):
        console.log("You can go ahead !")
        break;
}


// ------------------------------------------------------------------------------------------
// Q15. Switch statement for months -> 1 -> January | 2 -> February | ... | 12 -> December
// ------------------------------------------------------------------------------------------

switch (5) {
    case 1:
        console.log("Januray")
        break;
    case 2:
        console.log("February")
        break;
    case 3:
        console.log("March")
        break;
    case 4:
        console.log("April")
        break;
    case 5:
        console.log("May")
        break;
    case 6:
        console.log("June")
        break;
    case 7:
        console.log("July")
        break;
    case 8:
        console.log("August")
        break;
    case 9:
        console.log("September")
        break;
    case 10:
        console.log("October")
        break;
    case 11:
        console.log("November")
        break;
    case 12:
        console.log("December")
        break;
}


// ------------------------------------------------------------------------------------------
// Q16. Predict the output:
// ------------------------------------------------------------------------------------------

switch ("A") {
    case "A":
        console.log("A");        // A
    case "B":
        console.log("B");        // B
}


// ------------------------------------------------------------------------------------------
// Q17. Explain  -->  What is fall-through in switch?
// Because it doesn't have the break keyword
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q18. Add break statements to Q16 and observe the difference.
// ------------------------------------------------------------------------------------------

switch ("B") {
    case "A":
        console.log("A");
        break
    case "B":
        console.log("B");        // B
        break
}


// ------------------------------------------------------------------------------------------
// Q19. Create a calculator using switch  -->  Operators -> +  |  -  |  *  |  /
// ------------------------------------------------------------------------------------------

let n1 = 6;
let n2 = 3;
let oper = "Divide";

switch (oper) {
    case "Add":
        console.log(n1 + n2);
        break
    case "Sub":
        console.log(n1 - n2)
        break;
    case "Multiply":
        console.log(n1 * n2)
        break;
    case "Divide":
        console.log(n1 / n2)
        break;
}


// ------------------------------------------------------------------------------------------
// Q20. Create a weather advisor.
// Weather can be : Sunny  |  Rainy  |  Cloudy  |  Winter  -->  Use switch-case.
// ------------------------------------------------------------------------------------------

switch ("Sunny") {
    case "Sunny":
        console.log("Sun is so harsh 🥵")
        break;
    case "Rainy":
        console.log("It will rain ☔")
        break;
    case "Cloudy":
        console.log("All day cloudy ☁️")
        break;
    case "Winter":
        console.log("Use thermals ⛄")
        break;
}


// ------------------------------------------------------------------------------------------
// Q21. Create an age category checker.
// 0-12     -> Kid  |  13-19    -> Teen  |  20-59    -> Adult  |  60+      -> Senior
// ------------------------------------------------------------------------------------------

let age3 = 22;
if (age3 <= 12) {
    console.log("Kid")
} else if (age3 >= 13 && age3 <= 19) {
    console.log("Teen")
} else if (age3 >= 20 && age3 <= 59) {
    console.log("Adult")
} else {
    console.log("Senior")
}


// ------------------------------------------------------------------------------------------
// Q22. Create a program that checks:
// username = ""  |  Use username directly inside if.  |  Observe the result.
// ------------------------------------------------------------------------------------------

let username = ""
if(username){
    console.log(username)       // No output because if condition is false
}

// ------------------------------------------------------------------------------------------
// Q23. Create a program that checks:
// username = "Akash"  |  Use username directly inside if.  |  Observe the result.
// ------------------------------------------------------------------------------------------

let username2 = "Akash"
if(username2){
    console.log(username2)       // Akash  -->   because if condition is true
}

// ------------------------------------------------------------------------------------------
// Q24. Explain : Truthy Values in your own words.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q25. Explain : Falsy Values in your own words.
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q26. Create a function : checkAge(age)
// Return : Allowed  |  Denied  -->  Use early return pattern.
// ------------------------------------------------------------------------------------------

function checkAge(age) {
    if(age < 18) {
        return "Denied";
    }
    return "Allowed";
}
console.log(checkAge(24));


// ------------------------------------------------------------------------------------------
// Q27. Convert this nested condition into a single condition:
// if(age >= 18) {
//     if(hasID) {
//         console.log("Allowed");
//     }
// }
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q28. Create a program that checks : age >= 18  |  hasID == true --> Only then allow entry.
// ------------------------------------------------------------------------------------------

let age4 = 44;
let hasID = true;
if (age4 >= 18 && hasID == true) {
    console.log("Entry is allowed");
}

// ------------------------------------------------------------------------------------------
// Q29. Explain the difference between : if-else and switch-case
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q30. Predict every output:
// ------------------------------------------------------------------------------------------

let isLoggedIn = true;
if (isLoggedIn) {
    console.log("Welcome");          // welcome
}
switch ("Friday") {
    case "Friday":
        console.log("Weekend Coming");       // weekend coming
        break;
    default:
        console.log("Normal Day");
}


// ======================================== CHALLENGE ========================================

// ------------------------------------------------------------------------------------------
// Q31. Build a complete Student Result System.
// Input : Name | Marks
// Output : 90+ -> Excellent | 75+ -> Good | 60+ -> Average | 40+ -> Pass | Below 40 -> Fail
// Also print : Student Name | Marks | Grade
// ------------------------------------------------------------------------------------------

let name = "Akash"
let markss = 94;

console.log("Name of student is : " + name)
console.log("Marks of student is : " + markss)

if (markss > 90){
    console.log("Grade of student is : Excellent")
} else if (marks > 75 && marks <= 90){
    console.log("Grade of student is : Good")
} else if (marks > 60 && marks <= 75){
    console.log("Grade of student is : Average")
} else if (marks > 40 && marks <= 60){
    console.log("Grade of student is : Pass")
} else {
    console.log("Grade of student is : Fail")
}



// ------------------------------------------------------------------------------------------
// Q32. Build a simple ATM Menu using switch.
// Options : 1 -> Check Balance | 2 -> Withdraw | 3 -> Deposit | 4 -> Exit
// Print appropriate messages.
// ------------------------------------------------------------------------------------------

let ATM = 1;
switch(ATM){
    case 1:
        console.log("Check your bank balance")
        break;
    case 2:
        console.log("Withdraw amount")
        break;
    case 3:
        console.log("Deposite cash")
        break;
    case 4:
        console.log("Remove your card")
        break;
}