// ======================================== CHAPTER 4: CONTROL FLOW ========================================

Q1. Create a program that checks:
- If a person is eligible to vote
- If not, print a suitable message

// ----------------------------------------------------------------------------------

Q2. Create a program that checks whether a number is:
- Positive
- Negative
- Zero

// ----------------------------------------------------------------------------------

Q3. Create a program that checks:
- Even
- Odd

using if-else.

// ----------------------------------------------------------------------------------

Q4. Predict the output:

let age = 20;

if(age >= 18) {
    console.log("Adult");
}

// ----------------------------------------------------------------------------------

Q5. Predict the output:

let age = 15;

if(age >= 18) {
    console.log("Adult");
}
else {
    console.log("Minor");
}

// ----------------------------------------------------------------------------------

Q6. Create a grade checker:

90+  -> A
75+  -> B
60+  -> C
Below 60 -> Fail

// ----------------------------------------------------------------------------------

Q7. Create a salary bonus program:

Salary > 50000 → Bonus
Otherwise → No Bonus

// ----------------------------------------------------------------------------------

Q8. Create a login system:

If user is logged in:
Print Welcome

Otherwise:
Print Please Login

// ----------------------------------------------------------------------------------

Q9. Create a program that checks:

- Divisible by 2
- Divisible by 3
- Divisible by both

// ----------------------------------------------------------------------------------

Q10. Predict the output:

let marks = 85;

if(marks >= 90) {
    console.log("A");
}
else if(marks >= 75) {
    console.log("B");
}
else {
    console.log("C");
}

// ----------------------------------------------------------------------------------

Q11. Predict the output:

let marks = 95;

if(marks >= 50) {
    console.log("Pass");
}
else if(marks >= 90) {
    console.log("Excellent");
}

// ----------------------------------------------------------------------------------

Q12. Explain why Q11 produces that output.

// ----------------------------------------------------------------------------------

Q13. Create a switch statement for:

Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday

Print a different message for each day.

// ----------------------------------------------------------------------------------

Q14. Create a switch statement for traffic lights:

Red
Yellow
Green

Print the appropriate action.

// ----------------------------------------------------------------------------------

Q15. Create a switch statement for months:

1 -> January
2 -> February
...
12 -> December

// ----------------------------------------------------------------------------------

Q16. Predict the output:

switch("A") {

    case "A":
        console.log("A");

    case "B":
        console.log("B");
}

// ----------------------------------------------------------------------------------

Q17. Explain:
What is fall-through in switch?

// ----------------------------------------------------------------------------------

Q18. Add break statements to Q16 and observe the difference.

// ----------------------------------------------------------------------------------

Q19. Create a calculator using switch.

Operators:

+
-
*
/

// ----------------------------------------------------------------------------------

Q20. Create a weather advisor.

Weather can be:

Sunny
Rainy
Cloudy
Winter

Use switch-case.

// ----------------------------------------------------------------------------------

Q21. Create an age category checker.

0-12     -> Kid
13-19    -> Teen
20-59    -> Adult
60+      -> Senior

// ----------------------------------------------------------------------------------

Q22. Create a program that checks:

username = ""

Use username directly inside if.

Observe the result.

// ----------------------------------------------------------------------------------

Q23. Create a program that checks:

username = "Akash"

Use username directly inside if.

Observe the result.

// ----------------------------------------------------------------------------------

Q24. Explain:

Truthy Values

in your own words.

// ----------------------------------------------------------------------------------

Q25. Explain:

Falsy Values

in your own words.

// ----------------------------------------------------------------------------------

Q26. Create a function:

checkAge(age)

Return:
- Allowed
- Denied

Use early return pattern.

// ----------------------------------------------------------------------------------

Q27. Convert this nested condition into a single condition:

if(age >= 18) {

    if(hasID) {
        console.log("Allowed");
    }

}

// ----------------------------------------------------------------------------------

Q28. Create a program that checks:

- age >= 18
- hasID == true

Only then allow entry.

// ----------------------------------------------------------------------------------

Q29. Explain the difference between:

if-else

and

switch-case

// ----------------------------------------------------------------------------------

Q30. Predict every output:

let isLoggedIn = true;

if(isLoggedIn) {
    console.log("Welcome");
}

switch("Friday") {

    case "Friday":
        console.log("Weekend Coming");
        break;

    default:
        console.log("Normal Day");
}

// ----------------------------------------------------------------------------------

CHALLENGE

Q31. Build a complete Student Result System.

Input:
- Name
- Marks

Output:

90+ -> Excellent
75+ -> Good
60+ -> Average
40+ -> Pass
Below 40 -> Fail

Also print:
- Student Name
- Marks
- Grade

// ----------------------------------------------------------------------------------

Q32. Build a simple ATM Menu using switch.

Options:

1 -> Check Balance
2 -> Withdraw
3 -> Deposit
4 -> Exit

Print appropriate messages.