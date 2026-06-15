# Chapter 1: Variables & Declarations

## What are Variables?

Variables are containers used to store data.

They allow us to:
- Store values
- Reuse values
- Update values

Example:

```js
let name = "Akash";
let age = 21;
```

---

# Variable Declaration Keywords

JavaScript provides three ways to declare variables:

1. var
2. let
3. const

---

## var

The oldest way to declare variables.

### Characteristics

- Function scoped
- Can be redeclared
- Can be reassigned
- Hoisted with value `undefined`

### Example

```js
var score = 10;
var score = 20;

console.log(score);
```

Output:

```js
20
```

### Function Scope

```js
function demo() {
    var x = 10;
}

console.log(x);
```

Output:

```js
ReferenceError
```

---

## let

Modern way to declare variables.

### Characteristics

- Block scoped
- Cannot be redeclared in same scope
- Can be reassigned
- Hoisted but remains inside TDZ

### Example

```js
let age = 20;

age = 21;
```

Valid.

```js
let age = 20;
let age = 21;
```

Invalid.

---

## const

Used when variable value should not be reassigned.

### Characteristics

- Block scoped
- Cannot be redeclared
- Cannot be reassigned
- Must be initialized during declaration

### Example

```js
const PI = 3.14;
```

Invalid:

```js
PI = 3.14159;
```

---

# Scope

Scope determines where a variable can be accessed.

---

## Global Scope

Declared outside all blocks and functions.

```js
let city = "Delhi";
```

Accessible everywhere.

---

## Block Scope

Anything inside `{}` creates block scope.

```js
{
    let age = 21;
    const country = "India";
}
```

Cannot be accessed outside.

---

## Function Scope

Variables declared with `var` are function scoped.

```js
function greet() {
    var message = "Hello";
}
```

Cannot be accessed outside function.

---

# Hoisting

JavaScript moves declarations to the top before execution.

This behavior is called hoisting.

---

## var Hoisting

```js
console.log(a);

var a = 10;
```

JavaScript treats it like:

```js
var a;

console.log(a);

a = 10;
```

Output:

```js
undefined
```

---

## let Hoisting

```js
console.log(b);

let b = 20;
```

Output:

```js
ReferenceError
```

---

## const Hoisting

```js
console.log(c);

const c = 30;
```

Output:

```js
ReferenceError
```

---

# Temporal Dead Zone (TDZ)

The time between hoisting and initialization.

During this period:

```js
console.log(age);

let age = 21;
```

Accessing variable causes:

```js
ReferenceError
```

---

# const with Objects and Arrays

Many beginners think const makes everything immutable.

Wrong.

const protects the variable reference, not the contents.

---

## Object Example

```js
const student = {
    name: "Akash"
};

student.name = "Rahul";
```

Valid.

```js
student = {};
```

Invalid.

---

## Array Example

```js
const nums = [1, 2, 3];

nums.push(4);
```

Valid.

```js
nums = [];
```

Invalid.

---

# Common Mistakes

## Mistake 1

```js
let age = 20;
let age = 21;
```

Cannot redeclare let.

---

## Mistake 2

```js
const PI;
```

const must be initialized.

Correct:

```js
const PI = 3.14;
```

---

## Mistake 3

```js
console.log(name);

let name = "Akash";
```

Causes TDZ error.

---

## Mistake 4

Thinking const objects cannot change.

Wrong.

Properties can still be modified.

---

# Best Practices

## Rule 1

Use `const` by default.

```js
const name = "Akash";
```

---

## Rule 2

Use `let` when value changes.

```js
let count = 0;

count++;
```

---

## Rule 3

Avoid `var`.

Modern JavaScript rarely uses it.

---

# Interview Notes

### Difference between var and let

| Feature | var | let |
|----------|------|------|
| Scope | Function | Block |
| Redeclare | Yes | No |
| Reassign | Yes | Yes |
| Hoisted | Yes | Yes |
| TDZ | No | Yes |

---

### Difference between let and const

| Feature | let | const |
|----------|------|------|
| Reassign | Yes | No |
| Redeclare | No | No |
| Block Scope | Yes | Yes |

---

### Important Facts

- const protects reference, not value.
- let and const are block scoped.
- var is function scoped.
- TDZ applies to let and const.
- Hoisting applies to all three keywords.

---

# Summary (30 Second Revision)

- Variables store data.
- JavaScript provides var, let and const.
- var is function scoped.
- let and const are block scoped.
- let can be reassigned.
- const cannot be reassigned.
- Hoisting moves declarations before execution.
- var becomes undefined after hoisting.
- let and const stay inside TDZ until initialized.
- const objects and arrays can still have their contents modified.
- Use const by default.
- Use let when value changes.
- Avoid var.