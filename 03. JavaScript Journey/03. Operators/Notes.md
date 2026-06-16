# Chapter 3: Operators

## What are Operators?

Operators are special symbols used to perform operations on values (operands).

They help us:

- Perform calculations
- Compare values
- Combine conditions
- Assign values
- Check data types

Example:

```js
let a = 10;
let b = 5;

console.log(a + b);
```

---

# Types of Operators

1. Arithmetic Operators
2. Assignment Operators
3. Comparison Operators
4. Logical Operators
5. Unary Operators
6. Ternary Operator
7. typeof Operator

---

# Arithmetic Operators

Used for mathematical calculations.

| Operator | Meaning |
|-----------|---------|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulus (Remainder) |
| ** | Exponentiation |

Example:

```js
let a = 10;
let b = 3;

console.log(a + b); // 13
console.log(a - b); // 7
console.log(a * b); // 30
console.log(a / b); // 3.33
console.log(a % b); // 1
console.log(a ** b); // 1000
```

---

# Assignment Operators

Used to assign values to variables.

## Basic Assignment

```js
let score = 10;
```

---

## Compound Assignment

```js
let score = 10;

score += 5;
score -= 2;
score *= 2;
score /= 2;
score %= 3;
```

Equivalent to:

```js
score = score + 5;
```

---

# Comparison Operators

Used to compare values.

Result is always:

```js
true
```

or

```js
false
```

| Operator | Meaning |
|-----------|---------|
| == | Loose Equality |
| === | Strict Equality |
| != | Loose Inequality |
| !== | Strict Inequality |
| > | Greater Than |
| < | Less Than |
| >= | Greater Than or Equal |
| <= | Less Than or Equal |

---

## Loose Equality

```js
5 == "5"
```

Output:

```js
true
```

JavaScript converts types before comparison.

---

## Strict Equality

```js
5 === "5"
```

Output:

```js
false
```

Checks both value and datatype.

Always prefer:

```js
===
```

---

## Examples

```js
console.log(10 > 5);
console.log(10 < 5);
console.log(10 >= 10);
console.log(10 <= 5);
```

---

# Logical Operators

Used to combine conditions.

---

## AND (&&)

Both conditions must be true.

```js
let age = 20;
let hasID = true;

age >= 18 && hasID
```

Output:

```js
true
```

---

## OR (||)

At least one condition must be true.

```js
age >= 18 || hasID
```

Output:

```js
true
```

---

## NOT (!)

Reverses truthiness.

```js
!true
```

Output:

```js
false
```

---

Example:

```js
let isLoggedIn = true;

console.log(!isLoggedIn);
```

Output:

```js
false
```

---

# Unary Operators

Work on a single operand.

---

## Unary Plus

Converts value into number.

```js
let str = "42";

console.log(+str);
```

Output:

```js
42
```

---

## Unary Minus

Changes sign.

```js
let num = 10;

console.log(-num);
```

Output:

```js
-10
```

---

## Increment (++)

Increase value by 1.

```js
let count = 5;

count++;
```

---

## Decrement (--)

Decrease value by 1.

```js
let count = 5;

count--;
```

---

# Pre vs Post Increment

## Post Increment

```js
let x = 5;

console.log(x++);
```

Output:

```js
5
```

Value becomes:

```js
6
```

after execution.

---

## Pre Increment

```js
let x = 5;

console.log(++x);
```

Output:

```js
6
```

---

# Ternary Operator

Short form of if...else.

Syntax:

```js
condition ? valueIfTrue : valueIfFalse
```

Example:

```js
let age = 20;

let result = age >= 18 ? "Adult" : "Minor";
```

Output:

```js
Adult
```

---

# typeof Operator

Used to determine datatype.

Examples:

```js
typeof "Akash"
typeof 21
typeof true
typeof undefined
typeof null
typeof []
typeof {}
typeof function(){}
```

---

# Truthy and Falsy with Logical Operators

Example:

```js
let username = "";

if (!username) {
    console.log("Username required");
}
```

Because:

```js
""
```

is falsy.

---

# Common Confusions

## "5" + 1

```js
"5" + 1
```

Output:

```js
"51"
```

String concatenation.

---

## "5" - 1

```js
"5" - 1
```

Output:

```js
4
```

Number conversion occurs.

---

## true + false

```js
true + false
```

Output:

```js
1
```

Because:

```js
true  = 1
false = 0
```

---

## Double NOT

```js
!!"Akash"
```

Output:

```js
true
```

Converts any value into boolean.

---

# Best Practices

- Prefer === over ==
- Use ternary only for simple conditions
- Use logical operators carefully
- Be aware of type coercion
- Use typeof while debugging
- Avoid complex nested ternaries

---

# Interview Notes

### Difference between == and ===

| == | === |
|------|------|
| Converts datatype | No conversion |
| Compares value | Compares value + datatype |
| Less safe | Safer |

---

### Difference between && and ||

```js
&&
```

Requires all conditions true.

```js
||
```

Requires at least one condition true.

---

### Important Facts

- typeof null returns "object"
- ++x and x++ behave differently
- && stops on first falsy value
- || stops on first truthy value
- Ternary is shorthand for if...else

---

# Summary (30 Second Revision)

- Operators perform actions on values.
- Arithmetic operators handle calculations.
- Assignment operators assign values.
- Comparison operators return true or false.
- Prefer === over ==.
- Logical operators are &&, || and !.
- Unary operators work on one operand.
- +value converts to number.
- ++ increases by 1.
- -- decreases by 1.
- Ternary is shorthand for if...else.
- typeof returns datatype.
- Be aware of type coercion.
- && requires all conditions true.
- || requires one condition true.