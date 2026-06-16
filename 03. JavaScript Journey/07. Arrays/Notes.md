# Chapter 7: Arrays

## What are Arrays?

An array is a special JavaScript object used to store multiple values in a single variable.

Example:

```js
let fruits = ["Apple", "Banana", "Mango"];
```

Instead of:

```js
let fruit1 = "Apple";
let fruit2 = "Banana";
let fruit3 = "Mango";
```

we use an array.

---

# Creating Arrays

```js
let numbers = [1, 2, 3, 4, 5];
```

```js
let names = ["Akash", "Rahul", "Priya"];
```

```js
let mixed = [10, "Hello", true];
```

---

# Accessing Elements

Arrays use indexes.

Index starts from 0.

```js
let fruits = ["Apple", "Banana", "Mango"];

console.log(fruits[0]);
```

Output:

```js
Apple
```

---

# Updating Elements

```js
fruits[1] = "Orange";
```

---

# Array Length

```js
let nums = [1, 2, 3];

console.log(nums.length);
```

Output:

```js
3
```

---

# Array Methods

## push()

Adds element at the end.

```js
let nums = [1, 2, 3];

nums.push(4);
```

Result:

```js
[1, 2, 3, 4]
```

---

## pop()

Removes last element.

```js
nums.pop();
```

---

## shift()

Removes first element.

```js
nums.shift();
```

---

## unshift()

Adds element at beginning.

```js
nums.unshift(0);
```

---

# delete Operator

```js
let nums = [1, 2, 3];

delete nums[1];
```

Result:

```js
[1, empty, 3]
```

Length remains same.

---

# concat()

Combines arrays.

```js
let a = [1, 2];
let b = [3, 4];

let result = a.concat(b);
```

---

# sort()

Sorts array.

```js
let nums = [5, 2, 8];

nums.sort();
```

Be careful:

```js
[1, 10, 2]
```

may produce unexpected results because sorting is string-based by default.

---

# reverse()

```js
nums.reverse();
```

---

# splice()

Used to:

- Remove elements
- Add elements
- Replace elements

Syntax:

```js
array.splice(start, deleteCount, items...)
```

Example:

```js
let nums = [1, 2, 3, 4];

nums.splice(2, 1, 99);
```

Result:

```js
[1, 2, 99, 4]
```

---

# slice()

Creates a new array.

Original array remains unchanged.

```js
let nums = [1, 2, 3, 4, 5];

nums.slice(1, 4);
```

Result:

```js
[2, 3, 4]
```

---

# Looping Through Arrays

## for Loop

```js
for(let i = 0; i < nums.length; i++) {
    console.log(nums[i]);
}
```

---

## for...of

```js
for(let value of nums) {
    console.log(value);
}
```

---

## forEach()

```js
nums.forEach(num => {
    console.log(num);
});
```

---

# map()

Creates a new transformed array.

```js
let nums = [1, 2, 3];

let doubled = nums.map(num => num * 2);
```

Result:

```js
[2, 4, 6]
```

---

# filter()

Creates a new array containing elements that pass a condition.

```js
let nums = [1, 2, 3, 4, 5];

let even = nums.filter(num => num % 2 === 0);
```

Result:

```js
[2, 4]
```

---

# reduce()

Reduces array to a single value.

```js
let nums = [1, 2, 3, 4];

let sum = nums.reduce((acc, curr) => acc + curr);
```

Result:

```js
10
```

---

# Array.from()

Converts iterable into array.

```js
Array.from("Akash");
```

Result:

```js
['A', 'k', 'a', 's', 'h']
```

---

# Common Mistakes

## Using Push instead of push

Wrong:

```js
nums.Push(5);
```

Correct:

```js
nums.push(5);
```

---

## Confusing splice and slice

splice()
- Modifies original array

slice()
- Creates new array

---

## delete does not reduce length

```js
delete nums[1];
```

Creates empty slot.

---

# Best Practices

- Use const for arrays when possible.
- Prefer map/filter/reduce for transformations.
- Use for...of when index isn't needed.
- Use splice carefully because it changes original array.

---

# Interview Notes

Difference between splice and slice:

| splice | slice |
|----------|---------|
| Changes original array | Does not change original |
| Add/Remove/Replace | Copy portion |

Difference between map and forEach:

| map | forEach |
|------|----------|
| Returns new array | Returns undefined |
| Used for transformation | Used for iteration |

Important Facts:

- Arrays are objects.
- Index starts at 0.
- push/pop work at end.
- shift/unshift work at beginning.
- reduce returns a single value.

---

# Summary (30 Second Revision)

- Arrays store multiple values.
- Index starts from 0.
- push adds at end.
- pop removes from end.
- shift removes from beginning.
- unshift adds at beginning.
- splice modifies original array.
- slice creates new array.
- map transforms arrays.
- filter selects values.
- reduce produces one value.
- Array.from converts iterable into array.
- Arrays can be looped using for, for...of and forEach.