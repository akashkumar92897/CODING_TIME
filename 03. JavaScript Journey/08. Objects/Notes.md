# Chapter 8: Objects

## What are Objects?

Objects are collections of related data stored as key-value pairs.

Example:

```js
let student = {
    name: "Akash",
    age: 21,
    city: "Delhi"
};
```

---

# Why Use Objects?

Arrays store data by index:

```js
let student = ["Akash", 21, "Delhi"];
```

Not very readable.

Objects provide meaning:

```js
let student = {
    name: "Akash",
    age: 21,
    city: "Delhi"
};
```

---

# Object Syntax

```js
let objectName = {
    key: value
};
```

Example:

```js
let car = {
    brand: "Toyota",
    model: "Camry",
    year: 2024
};
```

---

# Accessing Properties

## Dot Notation

```js
student.name
```

---

## Bracket Notation

```js
student["name"]
```

---

# Difference Between Dot and Bracket Notation

Dot:

```js
student.name
```

Bracket:

```js
student["name"]
```

Bracket notation is useful when key is stored in a variable.

Example:

```js
let key = "name";

console.log(student[key]);
```

---

# Updating Properties

```js
student.age = 22;
```

---

# Adding Properties

```js
student.course = "BCA";
```

---

# Deleting Properties

```js
delete student.city;
```

---

# Nested Objects

```js
let student = {
    name: "Akash",

    address: {
        city: "Delhi",
        state: "Delhi"
    }
};
```

Access:

```js
student.address.city
```

---

# Objects and const

```js
const student = {
    name: "Akash"
};
```

Allowed:

```js
student.name = "Rahul";
```

Not Allowed:

```js
student = {};
```

---

# Object Methods

Functions inside objects are called methods.

Example:

```js
let student = {

    name: "Akash",

    greet: function() {
        console.log("Hello");
    }
};
```

Call:

```js
student.greet();
```

---

# this Keyword

Refers to current object.

Example:

```js
let student = {

    name: "Akash",

    greet() {
        console.log(this.name);
    }
};
```

Output:

```js
Akash
```

---

# Looping Through Objects

## for...in

```js
let student = {
    name: "Akash",
    age: 21
};

for(let key in student) {
    console.log(key);
}
```

Output:

```js
name
age
```

---

Print keys and values:

```js
for(let key in student) {
    console.log(key, student[key]);
}
```

---

# Object.keys()

Returns array of keys.

```js
Object.keys(student);
```

---

# Object.values()

Returns array of values.

```js
Object.values(student);
```

---

# Object.entries()

Returns key-value pairs.

```js
Object.entries(student);
```

---

# Copying Objects

## Shallow Copy

```js
let copy = {...student};
```

---

# Optional Chaining

Safely access nested properties.

```js
student.address?.city
```

Prevents errors if property doesn't exist.

---

# Common Mistakes

## Using Dot Notation with Variables

Wrong:

```js
student.key
```

Correct:

```js
student[key]
```

---

## Confusing Objects and Arrays

Object:

```js
student.name
```

Array:

```js
students[0]
```

---

## Reassigning const Object

Wrong:

```js
student = {}
```

---

# Best Practices

- Use meaningful property names.
- Prefer const for objects.
- Use methods for object behavior.
- Use Object.keys() when needed.
- Use optional chaining for nested data.

---

# Interview Notes

Difference Between Object and Array:

| Object | Array |
|----------|--------|
| Key-value pairs | Indexed values |
| Unordered | Ordered |
| Access by key | Access by index |

Important Facts:

- Objects store related information.
- Properties can be added dynamically.
- Methods are functions inside objects.
- this refers to current object.
- for...in loops through object keys.

---

# Summary (30 Second Revision)

- Objects store data as key-value pairs.
- Use dot or bracket notation to access properties.
- Properties can be added, updated and deleted.
- Objects can contain other objects.
- Methods are functions inside objects.
- this refers to current object.
- for...in loops through keys.
- Object.keys() returns keys.
- Object.values() returns values.
- Object.entries() returns key-value pairs.
- const objects can still have modified properties.