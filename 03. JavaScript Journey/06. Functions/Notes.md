# Chapter 6: Functions

## What are Functions?

A function is a reusable block of code designed to perform a specific task.

Instead of writing the same code multiple times, we write it once inside a function and call it whenever needed.

Example:

```js
function greet() {
    console.log("Hello");
}

greet();
```

---

# Why Use Functions?

Functions help us:

- Reuse code
- Organize code
- Improve readability
- Reduce duplication

---

# Function Declaration

Syntax:

```js
function functionName() {

}
```

Example:

```js
function greet() {
    console.log("Hello");
}

greet();
```

---

# Function Parameters

Parameters are variables that receive values.

Example:

```js
function greet(name) {
    console.log("Hello " + name);
}

greet("Akash");
```

---

# Function Arguments

Arguments are actual values passed during function call.

```js
greet("Akash");
```

Here:

```js
"Akash"
```

is an argument.

---

# Multiple Parameters

```js
function add(a, b) {
    console.log(a + b);
}

add(10, 20);
```

---

# Return Statement

Used to send a value back from a function.

Example:

```js
function add(a, b) {
    return a + b;
}

let result = add(10, 20);
```

---

# Difference Between console.log and return

Bad:

```js
function add(a, b) {
    console.log(a + b);
}
```

Cannot reuse the result.

---

Better:

```js
function add(a, b) {
    return a + b;
}
```

Now result can be stored and reused.

---

# Function Expression

Function stored inside a variable.

Example:

```js
const greet = function() {
    console.log("Hello");
};
```

---

# Anonymous Function

Function without a name.

Example:

```js
function() {

}
```

Usually used inside expressions or callbacks.

---

# Arrow Functions

Shorter syntax introduced in ES6.

Example:

```js
const greet = () => {
    console.log("Hello");
};
```

---

Single Line Arrow Function

```js
const square = num => num * num;
```

---

Multiple Parameters

```js
const add = (a, b) => a + b;
```

---

# Function Scope

Variables declared inside a function are accessible only inside that function.

Example:

```js
function demo() {
    let age = 21;
}

console.log(age);
```

Output:

```js
ReferenceError
```

---

# Local vs Global Variables

Global:

```js
let city = "Delhi";
```

Accessible everywhere.

---

Local:

```js
function demo() {
    let city = "Mumbai";
}
```

Accessible only inside function.

---

# Default Parameters

Used when no argument is provided.

Example:

```js
function greet(name = "Guest") {
    console.log(name);
}

greet();
```

Output:

```js
Guest
```

---

# Callback Functions

A function passed as an argument to another function.

Example:

```js
function greet(name) {
    console.log(name);
}

function processUser(callback) {
    callback("Akash");
}

processUser(greet);
```

---

# Hoisting and Functions

Function Declarations:

```js
greet();

function greet() {
    console.log("Hello");
}
```

Works.

---

Function Expressions:

```js
greet();

const greet = function() {
    console.log("Hello");
};
```

Error.

---

# Common Mistakes

## Forgetting return

Bad:

```js
function add(a, b) {
    a + b;
}
```

Returns undefined.

---

## Calling Before Function Expression

Bad:

```js
sayHi();

const sayHi = function() {};
```

---

## Confusing Parameters and Arguments

Parameters:

```js
function greet(name)
```

Arguments:

```js
greet("Akash")
```

---

# Best Practices

- Use meaningful function names
- Prefer return over console.log
- Keep functions focused on one task
- Use arrow functions when appropriate
- Avoid very large functions

---

# Interview Notes

Function Declaration:

```js
function greet() {}
```

Function Expression:

```js
const greet = function() {};
```

Arrow Function:

```js
const greet = () => {};
```

Important Facts:

- Functions are reusable blocks of code.
- return exits the function.
- Arrow functions are shorter.
- Function declarations are hoisted.
- Function expressions are not fully hoisted.

---

# Summary (30 Second Revision)

- Functions are reusable blocks of code.
- Parameters receive values.
- Arguments provide values.
- return sends a value back.
- Function declarations are hoisted.
- Function expressions are stored in variables.
- Arrow functions provide shorter syntax.
- Variables inside functions have local scope.
- Default parameters provide fallback values.
- Callback functions are passed into other functions.
- Prefer return over console.log.