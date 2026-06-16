# Chapter 4: Control Flow

## What is Control Flow?

Control flow determines:

- Which code runs
- When code runs
- How many times code runs

It allows JavaScript to make decisions.

Example:

```js
let age = 20;

if (age >= 18) {
    console.log("Adult");
}
```

---

# if Statement

Runs code only when a condition is true.

Syntax:

```js
if (condition) {
    // code
}
```

Example:

```js
let age = 20;

if (age >= 18) {
    console.log("You can vote");
}
```

---

# if...else Statement

Used when there are two possible outcomes.

Syntax:

```js
if (condition) {
    // code
} else {
    // code
}
```

Example:

```js
let age = 16;

if (age >= 18) {
    console.log("Adult");
} else {
    console.log("Minor");
}
```

---

# else if Ladder

Used when there are multiple conditions.

Syntax:

```js
if (condition1) {

}
else if (condition2) {

}
else {

}
```

Example:

```js
let marks = 85;

if (marks >= 90) {
    console.log("A");
}
else if (marks >= 75) {
    console.log("B");
}
else {
    console.log("C");
}
```

---

# Order Matters

Conditions are checked from top to bottom.

Example:

```js
let marks = 95;

if (marks >= 50) {
    console.log("Pass");
}
else if (marks >= 90) {
    console.log("Excellent");
}
```

Output:

```js
Pass
```

Because the first condition becomes true.

---

# switch Statement

Used when comparing one value against many options.

Syntax:

```js
switch (value) {

    case option1:
        break;

    case option2:
        break;

    default:
}
```

Example:

```js
let day = "Monday";

switch(day) {

    case "Monday":
        console.log("Start of week");
        break;

    case "Friday":
        console.log("Weekend coming");
        break;

    default:
        console.log("Normal day");
}
```

---

# break Keyword

Stops execution inside switch.

Without break:

```js
switch("A") {

    case "A":
        console.log("A");

    case "B":
        console.log("B");
}
```

Output:

```js
A
B
```

This is called fall-through.

---

# default Case

Runs when no case matches.

Example:

```js
let color = "Pink";

switch(color) {

    case "Red":
        console.log("Red");
        break;

    default:
        console.log("Unknown Color");
}
```

---

# Truthy and Falsy in Conditions

Conditions do not need comparison operators.

Example:

```js
let username = "Akash";

if (username) {
    console.log("User exists");
}
```

Truthy values execute the block.

---

Example:

```js
let username = "";

if (username) {
    console.log("User exists");
}
```

Block will not execute.

---

# Early Return Pattern

Used inside functions to avoid deep nesting.

Bad:

```js
function checkAge(age) {

    if(age >= 18) {
        return "Allowed";
    }
    else {
        return "Denied";
    }
}
```

Better:

```js
function checkAge(age) {

    if(age < 18) {
        return "Denied";
    }

    return "Allowed";
}
```

---

# Nested Conditions

Example:

```js
let age = 20;
let hasID = true;

if(age >= 18) {

    if(hasID) {
        console.log("Allowed");
    }

}
```

Can often be simplified using logical operators.

---

Better:

```js
if(age >= 18 && hasID) {
    console.log("Allowed");
}
```

---

# Common Mistakes

## Missing Braces

Bad:

```js
if(age >= 18)
    console.log("Adult");
    console.log("Can Vote");
```

Only first line belongs to if.

---

## Missing break in switch

Bad:

```js
switch(day) {

    case "Monday":
        console.log("Monday");

    case "Tuesday":
        console.log("Tuesday");
}
```

Causes fall-through.

---

## Wrong Condition Order

Bad:

```js
if(marks >= 50)
```

before

```js
if(marks >= 90)
```

May never reach the second condition.

---

# Best Practices

- Prefer readability
- Avoid deep nesting
- Use switch when checking one variable against many values
- Use early return inside functions
- Keep conditions simple

---

# Interview Notes

Difference between if and switch:

| if | switch |
|----|---------|
| Flexible | Best for exact matches |
| Supports ranges | Supports fixed values |
| More powerful | Cleaner for many choices |

Important Facts:

- switch uses strict comparison internally
- break prevents fall-through
- default behaves like else
- Order matters in else-if ladders
- Any truthy value can be used in conditions

---

# Summary (30 Second Revision)

- Control flow decides which code executes.
- if runs when condition is true.
- if...else handles two outcomes.
- else if handles multiple outcomes.
- Conditions are checked top-to-bottom.
- switch compares one value against many choices.
- break prevents fall-through.
- default works like else.
- Truthy values execute conditions.
- Falsy values skip conditions.
- Early return reduces nesting.
- Keep conditions readable and simple.