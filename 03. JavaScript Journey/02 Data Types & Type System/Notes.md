# Chapter 2: Data Types & Type System

## What are Data Types?

Every value in JavaScript has a type.

Data types tell JavaScript what kind of data is being stored and what operations can be performed on it.

Example:

```js
let name = "Akash";
let age = 21;
let isStudent = true;
```

---

# Categories of Data Types

JavaScript data types are divided into two categories:

1. Primitive Types
2. Reference Types

---

# Primitive Data Types

Primitive values are stored directly in memory.

There are 7 primitive data types.

## String

Stores textual data.

```js
let name = "Akash";
```

Type:

```js
typeof name;
```

Output:

```js
"string"
```

---

## Number

Stores numeric values.

```js
let age = 21;
let price = 99.99;
```

Type:

```js
typeof age;
```

Output:

```js
"number"
```

---

## Boolean

Represents true or false.

```js
let isLoggedIn = true;
```

Type:

```js
"boolean"
```

---

## Undefined

Variable declared but not assigned.

```js
let city;
```

Output:

```js
undefined
```

---

## Null

Intentional absence of value.

```js
let user = null;
```

Important:

```js
typeof null
```

Output:

```js
"object"
```

This is a historical JavaScript bug.

---

## Symbol

Used to create unique identifiers.

```js
const id = Symbol("id");
```

Rarely used in beginner JavaScript.

---

## BigInt

Used for very large integers.

```js
let number = 12345678901234567890n;
```

Type:

```js
"bigint"
```

---

# Reference Data Types

Reference values are stored by reference.

---

## Object

```js
const student = {
    name: "Akash",
    age: 21
};
```

---

## Array

```js
const nums = [1, 2, 3];
```

---

## Function

```js
function greet() {
    console.log("Hello");
}
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

# Type Coercion

JavaScript automatically converts values from one type to another.

Example:

```js
"5" + 1
```

Output:

```js
"51"
```

String concatenation occurs.

---

Example:

```js
"5" - 1
```

Output:

```js
4
```

String converted to number.

---

Examples:

```js
true + 1
```

Output:

```js
2
```

```js
null + 1
```

Output:

```js
1
```

```js
undefined + 1
```

Output:

```js
NaN
```

---

# Equality Operators

## Loose Equality (==)

Performs type conversion before comparison.

```js
5 == "5"
```

Output:

```js
true
```

---

## Strict Equality (===)

Checks value and datatype.

```js
5 === "5"
```

Output:

```js
false
```

Always prefer strict equality.

---

# NaN

NaN stands for:

Not a Number

Example:

```js
0 / 0
```

```js
parseInt("abc")
```

Type:

```js
typeof NaN
```

Output:

```js
"number"
```

---

# Truthy and Falsy Values

JavaScript treats values as either truthy or falsy inside conditions.

---

## Falsy Values

Only six values are falsy:

```js
false
0
""
null
undefined
NaN
```

---

## Truthy Values

Everything else is truthy.

Examples:

```js
"0"
"false"
[]
{}
function(){}
```

---

# Common Confusions

## null vs undefined

Undefined:

```js
let age;
```

Value not assigned.

Null:

```js
let age = null;
```

Value intentionally emptied.

---

## typeof null

```js
typeof null
```

Returns:

```js
"object"
```

Known JavaScript bug.

---

## "5" + 1 vs "5" - 1

```js
"5" + 1
```

Output:

```js
"51"
```

```js
"5" - 1
```

Output:

```js
4
```

---

# Best Practices

- Prefer === over ==
- Always know the datatype you're working with
- Be careful with automatic type conversion
- Understand truthy and falsy values
- Use typeof while debugging

---

# Interview Notes

Primitive Types:

- String
- Number
- Boolean
- Undefined
- Null
- Symbol
- BigInt

Reference Types:

- Object
- Array
- Function

Important Facts:

- typeof null === "object"
- typeof NaN === "number"
- Arrays are objects
- Functions have their own type: "function"
- === is safer than ==

---

# Summary (30 Second Revision)

- Every value in JavaScript has a datatype.
- Data types are Primitive and Reference.
- Primitive: String, Number, Boolean, Undefined, Null, Symbol, BigInt.
- Reference: Object, Array, Function.
- typeof is used to check datatype.
- typeof null returns "object" (bug).
- typeof NaN returns "number".
- == performs type conversion.
- === compares value and datatype.
- Falsy values: false, 0, "", null, undefined, NaN.
- Everything else is truthy.
- Be aware of type coercion.