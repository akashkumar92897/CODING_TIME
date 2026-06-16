# Chapter 5: Loops

## Why Loops?

Loops allow us to execute a block of code multiple times without rewriting it.

Example:

```js
console.log("Hello");
console.log("Hello");
console.log("Hello");
```

Can be replaced with:

```js
for(let i = 0; i < 3; i++) {
    console.log("Hello");
}
```

---

# Types of Loops

1. for Loop
2. while Loop
3. do...while Loop
4. for...of Loop
5. for...in Loop
6. forEach()

---

# for Loop

Most commonly used loop.

Syntax:

```js
for(initialization; condition; update) {

}
```

Example:

```js
for(let i = 1; i <= 5; i++) {
    console.log(i);
}
```

Output:

```js
1
2
3
4
5
```

---

# Understanding the for Loop

```js
for(let i = 0; i < 3; i++) {
    console.log(i);
}
```

### Initialization

```js
let i = 0
```

Runs once.

### Condition

```js
i < 3
```

Checked before every iteration.

### Update

```js
i++
```

Runs after every iteration.

---

# while Loop

Used when number of iterations is unknown.

Syntax:

```js
while(condition) {

}
```

Example:

```js
let i = 1;

while(i <= 5) {
    console.log(i);
    i++;
}
```

---

# do...while Loop

Runs at least once.

Syntax:

```js
do {

} while(condition);
```

Example:

```js
let i = 1;

do {
    console.log(i);
    i++;
}
while(i <= 5);
```

---

# Difference Between while and do...while

### while

Condition checked first.

```js
while(false) {
    console.log("Run");
}
```

Output:

Nothing

---

### do...while

Runs once before checking.

```js
do {
    console.log("Run");
}
while(false);
```

Output:

```js
Run
```

---

# break Statement

Used to terminate a loop immediately.

Example:

```js
for(let i = 1; i <= 10; i++) {

    if(i === 5) {
        break;
    }

    console.log(i);
}
```

Output:

```js
1
2
3
4
```

---

# continue Statement

Skips current iteration.

Example:

```js
for(let i = 1; i <= 5; i++) {

    if(i === 3) {
        continue;
    }

    console.log(i);
}
```

Output:

```js
1
2
4
5
```

---

# for...of Loop

Used for:

- Arrays
- Strings
- Iterables

Syntax:

```js
for(let value of iterable) {

}
```

Example:

```js
let fruits = ["Apple", "Banana", "Mango"];

for(let fruit of fruits) {
    console.log(fruit);
}
```

---

String Example:

```js
for(let char of "Akash") {
    console.log(char);
}
```

---

# for...in Loop

Used for objects.

Syntax:

```js
for(let key in object) {

}
```

Example:

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

# forEach()

Array method used for iteration.

Syntax:

```js
array.forEach(function(item) {

});
```

Example:

```js
let nums = [10, 20, 30];

nums.forEach(function(num) {
    console.log(num);
});
```

---

Arrow Function Version

```js
nums.forEach(num => {
    console.log(num);
});
```

---

# When to Use Which Loop?

### for

Known number of iterations.

```js
for(let i = 0; i < 10; i++)
```

---

### while

Unknown number of iterations.

```js
while(userGuess !== secret)
```

---

### do...while

Must run at least once.

```js
do {

} while(condition)
```

---

### for...of

Arrays and strings.

---

### for...in

Objects.

---

### forEach

Array iteration only.

---

# Common Mistakes

## Infinite Loop

```js
let i = 0;

while(i < 5) {
    console.log(i);
}
```

Forgot:

```js
i++;
```

---

## Using for...in on Arrays

Avoid:

```js
for(let index in nums)
```

Prefer:

```js
for(let num of nums)
```

---

## Trying break inside forEach

```js
nums.forEach(num => {

    if(num === 5) {
        break;
    }

});
```

Invalid.

forEach does not support break.

---

# Best Practices

- Use for when index is needed.
- Use for...of for arrays.
- Use for...in for objects.
- Use while when iterations are unpredictable.
- Avoid unnecessary nested loops.

---

# Interview Notes

### Difference Between for and while

| for | while |
|------|--------|
| Fixed iterations | Unknown iterations |
| Compact syntax | More flexible |

---

### Difference Between for...of and for...in

| for...of | for...in |
|-----------|-----------|
| Values | Keys |
| Arrays | Objects |

---

### Important Facts

- do...while runs at least once.
- break exits loop completely.
- continue skips current iteration.
- forEach cannot use break.
- for...in is mainly for objects.
- for...of is mainly for arrays and strings.

---

# Summary (30 Second Revision)

- Loops repeat code.
- for loop is used for fixed iterations.
- while loop is used for unknown iterations.
- do...while runs at least once.
- break exits loop.
- continue skips an iteration.
- for...of gives values.
- for...in gives keys.
- forEach is an array method.
- Avoid infinite loops.
- Use the right loop for the right data structure.