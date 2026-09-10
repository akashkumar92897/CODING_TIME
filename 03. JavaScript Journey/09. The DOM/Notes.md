# Chapter 4: The DOM (Document Object Model)

## What is the DOM?

DOM stands for **Document Object Model**.

The DOM is a programming interface that represents an HTML document as a **tree of objects (nodes)**.

It allows JavaScript to interact with HTML.

The DOM helps us:

- Select HTML elements
- Read content
- Change content
- Create elements
- Remove elements
- Change styles
- Add/remove CSS classes
- Make web pages interactive

Example:

```html
<h1 id="title">Hello</h1>
```

JavaScript can access it:

```js
const title = document.getElementById("title");

console.log(title);
```

---

# DOM Tree Structure

The browser converts HTML into a **DOM Tree**.

Example:

```html
<html>
    <body>
        <h1>Hello</h1>
        <p>Welcome</p>
    </body>
</html>
```

DOM Tree:

```text
Document
└── html
    └── body
        ├── h1
        │   └── "Hello"
        └── p
            └── "Welcome"
```

---

# Node

A **Node** is a general object in the DOM Tree.

Common types of nodes:

```text
Node
├── Document
├── Element
├── Text
└── Comment
```

> Every element is a node, but every node is not an element.

## Element Node

Represents an HTML element/tag.

```html
<h1>Hello</h1>
<p>Welcome</p>
```

Here:

```text
<h1>
<p>
```

are element nodes.

```js
const heading = document.querySelector("h1");
```

## Text Node

Represents the actual text inside an element.

```html
<h1>Hello</h1>
```

DOM:

```text
h1
└── "Hello"
```

`"Hello"` is a text node.

## Comment Node

HTML comments are also represented as nodes.

```html
<!-- This is a comment -->
```

This is a **Comment Node**.

---

# Selecting Elements

JavaScript provides different methods to select elements from the DOM.

Main methods:

1. `getElementById()`
2. `getElementsByClassName()`
3. `querySelector()`
4. `querySelectorAll()`

---

# getElementById()

Used to select an element using its `id`.

```html
<h1 id="title">Hello</h1>
```

```js
const title = document.getElementById("title");
```

Returns the matching element.

Do not use `#`:

```js
document.getElementById("title");  // ✅
document.getElementById("#title"); // ❌
```

---

# getElementsByClassName()

Used to select multiple elements using their class name.

```html
<p class="text">One</p>
<p class="text">Two</p>
<p class="text">Three</p>
```

```js
const elements = document.getElementsByClassName("text");
```

Returns an:

```text
HTMLCollection
```

Access individual elements:

```js
console.log(elements[0]);
console.log(elements[1]);
```

---

# querySelector()

Used to select the **first element** matching a CSS selector.

```html
<p class="text">One</p>
<p class="text">Two</p>
```

```js
const element = document.querySelector(".text");
```

Only the first matching element is returned.

It supports CSS selectors:

```js
document.querySelector("#title");
document.querySelector(".text");
document.querySelector("p");
document.querySelector("div p");
```

---

# querySelectorAll()

Used to select **all elements** matching a CSS selector.

```html
<p class="text">One</p>
<p class="text">Two</p>
<p class="text">Three</p>
```

```js
const elements = document.querySelectorAll(".text");
```

Returns a:

```text
NodeList
```

You can iterate over it:

```js
elements.forEach(element => {
    console.log(element);
});
```

---

# Element Selection Comparison

| Method | Selects | Returns |
|---|---|---|
| `getElementById()` | One element by ID | Element / `null` |
| `getElementsByClassName()` | Multiple elements by class | HTMLCollection |
| `querySelector()` | First CSS selector match | Element / `null` |
| `querySelectorAll()` | All CSS selector matches | NodeList |

## Easy Memory Trick

```text
getElementById()         → ONE
getElementsByClassName() → MANY
querySelector()          → FIRST
querySelectorAll()       → ALL
```

---

# Text / Content Access

Three important properties:

```text
innerText
textContent
innerHTML
```

Example:

```html
<div id="box">
    Hello
    <strong>World</strong>
</div>
```

---

# innerText

Used to get or set the **visible/rendered text** of an element.

```js
const box = document.getElementById("box");

console.log(box.innerText);
```

It is affected by CSS visibility and layout.

Example:

```html
<div>
    Hello
    <span style="display: none;">Hidden</span>
</div>
```

The hidden text generally won't be included in `innerText`.

Think:

```text
innerText → What is rendered as text
```

---

# textContent

Used to get or set the **text content** of an element.

```js
console.log(box.textContent);
```

It includes text from descendant elements.

It does not depend on visual rendering in the same way as `innerText`.

Think:

```text
textContent → Text contained in the DOM
```

---

# innerHTML

Used to get or set the **HTML markup** inside an element.

```js
console.log(box.innerHTML);
```

It includes HTML tags.

Example output:

```html
Hello
<strong>World</strong>
```

You can also modify HTML:

```js
box.innerHTML = "<h2>Hello</h2>";
```

Result:

```html
<div id="box">
    <h2>Hello</h2>
</div>
```

---

# innerText vs textContent vs innerHTML

| Property | Returns | HTML Tags? | Rendering Matters? |
|---|---|---|---|
| `innerText` | Rendered text | No | Yes |
| `textContent` | Text content | No | No |
| `innerHTML` | HTML markup | Yes | No |

---

# Attribute Manipulation

HTML elements can have **attributes** that provide additional information or configuration.

Example:

```html
<img id="profile" src="photo.jpg" alt="Profile photo">
```

Here:

```text
id
src
alt
```

are HTML attributes.

JavaScript can:

- Read attributes
- Add attributes
- Change attributes
- Remove attributes

Main methods:

```text
getAttribute()
setAttribute()
removeAttribute()
```

---

# getAttribute()

Used to **get/read** the value of an attribute.

Syntax:

```js
element.getAttribute("attribute");
```

Example:

```js
const image = document.querySelector("img");

console.log(image.getAttribute("src"));
```

Output:

```text
photo.jpg
```

Another example:

```js
console.log(image.getAttribute("alt"));
```

Output:

```text
Profile photo
```

---

# setAttribute()

Used to **add or change** an attribute.

Syntax:

```js
element.setAttribute("attribute", "value");
```

Example:

```js
const image = document.querySelector("img");

image.setAttribute("src", "new-photo.jpg");
```

If the attribute doesn't exist, it is added.

If the attribute already exists, its value is changed.

Example:

```js
image.setAttribute("alt", "New profile photo");
```

---

# removeAttribute()

Used to **remove** an attribute.

Syntax:

```js
element.removeAttribute("attribute");
```

Example:

```js
const image = document.querySelector("img");

image.removeAttribute("alt");
```

Before:

```html
<img src="photo.jpg" alt="Profile photo">
```

After:

```html
<img src="photo.jpg">
```

---

# hasAttribute()

Used to check whether an attribute exists.

Syntax:

```js
element.hasAttribute("attribute");
```

Example:

```js
const image = document.querySelector("img");

console.log(image.hasAttribute("alt"));
```

Output:

```text
true
```

If the attribute doesn't exist:

```text
false
```

---

# Attribute Methods

| Method | Purpose |
|---|---|
| `getAttribute()` | Get attribute value |
| `setAttribute()` | Add/change attribute |
| `removeAttribute()` | Remove attribute |
| `hasAttribute()` | Check whether attribute exists |

## Easy Memory Trick

```text
getAttribute()    → GET
setAttribute()    → SET
removeAttribute() → REMOVE
hasAttribute()    → CHECK
```

---

# Attribute Manipulation Example

HTML:

```html
<a id="link" href="https://example.com">
    Visit Website
</a>
```

JavaScript:

```js
const link = document.getElementById("link");

// Get
console.log(link.getAttribute("href"));

// Set
link.setAttribute("href", "https://google.com");

// Remove
link.removeAttribute("href");
```

---

# Common HTML Attributes

Some commonly used attributes are:

```text
id
class
src
href
alt
title
value
placeholder
type
name
disabled
checked
```

Example:

```html
<input
    id="username"
    type="text"
    name="username"
    placeholder="Enter your name"
>
```

JavaScript:

```js
const input = document.querySelector("#username");

console.log(input.getAttribute("type"));
console.log(input.getAttribute("placeholder"));
```

---

# Attribute vs Property

This is an important DOM concept.

Example:

```html
<input id="username" value="Akash">
```

`value` is an HTML **attribute**.

You can access it using:

```js
input.getAttribute("value");
```

DOM elements also have JavaScript **properties**:

```js
input.value;
```

Think of it as:

```text
HTML
 ↓
Attributes

DOM Object
 ↓
Properties + Methods
```

Attributes and properties are related, but they are **not always identical**.

For example:

```js
input.getAttribute("value");
```

reads the HTML attribute, while:

```js
input.value;
```

reads the current DOM property value.

---

# Dynamic DOM Manipulation

JavaScript can dynamically:

- Create elements
- Add elements
- Remove elements
- Insert elements at the beginning

Important methods:

```text
createElement()
appendChild()
prepend()
removeChild()
```

---

# createElement()

Used to create a new HTML element.

```js
const paragraph = document.createElement("p");
```

At this point, the element exists in JavaScript but has **not been added to the page**.

We can modify it:

```js
paragraph.textContent = "Hello JavaScript!";
```

---

# appendChild()

Used to add a node as the **last child** of an element.

```js
const paragraph = document.createElement("p");

paragraph.textContent = "Hello JavaScript!";

document.body.appendChild(paragraph);
```

Result:

```html
<body>
    ...
    <p>Hello JavaScript!</p>
</body>
```

Remember:

```text
appendChild() → Adds at the END
```

---

# prepend()

Used to add content as the **first child**.

```js
const heading = document.createElement("h1");

heading.textContent = "Welcome";

document.body.prepend(heading);
```

Result:

```html
<body>
    <h1>Welcome</h1>
    ...
</body>
```

Remember:

```text
prepend() → Adds at the BEGINNING
```

---

# removeChild()

Used to remove a child from its parent.

Example:

```html
<div id="parent">
    <p id="child">Hello</p>
</div>
```

```js
const parent = document.getElementById("parent");
const child = document.getElementById("child");

parent.removeChild(child);
```

Result:

```html
<div id="parent">
</div>
```

---

# Dynamic DOM Example

HTML:

```html
<ul id="list"></ul>
```

JavaScript:

```js
const list = document.getElementById("list");

const item = document.createElement("li");

item.textContent = "JavaScript";

list.appendChild(item);
```

Result:

```html
<ul id="list">
    <li>JavaScript</li>
</ul>
```

---

# Style Updates

There are two common ways to update styles using JavaScript:

```text
.style
classList
```

---

# .style

Used to directly modify an element's **inline CSS styles**.

Example:

```js
const heading = document.querySelector("h1");

heading.style.color = "red";
heading.style.fontSize = "30px";
```

Result:

```html
<h1 style="color: red; font-size: 30px;">
```

---

# CSS Property Naming in JavaScript

CSS usually uses:

```css
background-color
font-size
margin-top
```

JavaScript uses **camelCase**:

```js
element.style.backgroundColor = "blue";

element.style.fontSize = "20px";

element.style.marginTop = "10px";
```

---

# classList

`classList` is used to manipulate CSS classes.

Example HTML:

```html
<button id="btn" class="button">
    Click
</button>
```

CSS:

```css
.active {
    background-color: black;
    color: white;
}
```

JavaScript can manipulate the class using:

```text
add()
remove()
toggle()
```

---

# classList.add()

Used to add a CSS class.

```js
const button = document.querySelector("#btn");

button.classList.add("active");
```

Result:

```html
<button id="btn" class="button active">
```

---

# classList.remove()

Used to remove a CSS class.

```js
button.classList.remove("active");
```

Result:

```html
<button id="btn" class="button">
```

---

# classList.toggle()

Used to **add a class if it doesn't exist** and **remove it if it already exists**.

```js
button.classList.toggle("active");
```

Concept:

```text
active doesn't exist
        ↓
     toggle()
        ↓
active is added

active exists
        ↓
     toggle()
        ↓
active is removed
```

Useful for:

- Dark mode
- Menus
- Dropdowns
- Modals
- Active buttons
- Show/hide functionality

Example:

```js
menu.classList.toggle("open");
```

---

# .style vs classList

| `.style` | `classList` |
|---|---|
| Directly changes inline CSS | Adds/removes CSS classes |
| Good for individual/dynamic styles | Good for reusable styles |
| Can become difficult to maintain with many styles | Keeps styling in CSS |
| Example: `element.style.color = "red"` | Example: `element.classList.add("active")` |

## General Recommendation

Prefer **CSS classes + `classList`** when the style represents a reusable state or design.

Use `.style` when you need to set a specific dynamic value.

---

# Complete DOM Workflow

Most DOM operations follow this pattern:

```text
1. SELECT
      ↓
2. READ / CREATE
      ↓
3. MODIFY
      ↓
4. INSERT / REMOVE
      ↓
5. STYLE
```

Example:

```js
// 1. Select
const list = document.querySelector("#list");

// 2. Create
const item = document.createElement("li");

// 3. Modify
item.textContent = "Learn DOM";

// 4. Insert
list.appendChild(item);

// 5. Style
item.classList.add("active");
```

---

# Common Confusions

## querySelector vs querySelectorAll

```js
document.querySelector(".item");
```

Returns the **first** matching element.

```js
document.querySelectorAll(".item");
```

Returns **all** matching elements.

Remember:

```text
querySelector    → FIRST
querySelectorAll → ALL
```

---

## innerText vs textContent

```text
innerText
→ Rendered/visible text

textContent
→ Text contained in the DOM
```

`innerText` can be affected by CSS visibility.

`textContent` generally retrieves text regardless of whether it is visually displayed.

---

## innerHTML vs textContent

```js
element.innerHTML = "<b>Hello</b>";
```

Interprets the string as HTML.

But:

```js
element.textContent = "<b>Hello</b>";
```

Displays the characters:

```text
<b>Hello</b>
```

It does **not** interpret them as HTML.

For untrusted user input, prefer `textContent` over `innerHTML`.

---

## appendChild vs prepend

```text
appendChild() → END
prepend()     → BEGINNING
```

---

## Element vs Node

```text
Node
├── Element
├── Text
├── Comment
└── ...
```

Therefore:

```text
Every Element is a Node

But

Every Node is NOT an Element
```

---

# Best Practices

- Use `querySelector()` / `querySelectorAll()` when CSS-selector flexibility is useful.
- Use `getElementById()` when selecting a unique element by ID.
- Prefer `textContent` for inserting untrusted plain text.
- Avoid inserting untrusted data directly with `innerHTML`.
- Prefer `classList` for reusable CSS states.
- Use `.style` for genuinely dynamic inline values.
- Give elements meaningful IDs/classes.
- Keep JavaScript behavior and CSS styling reasonably separated.
- Use `const` when the selected element reference doesn't need reassignment.

---

# Interview Notes

## Difference between querySelector and querySelectorAll

| `querySelector()` | `querySelectorAll()` |
|---|---|
| Returns first match | Returns all matches |
| Returns Element / `null` | Returns NodeList |
| Uses CSS selectors | Uses CSS selectors |

---

## Difference between innerText and textContent

| `innerText` | `textContent` |
|---|---|
| Rendered text | DOM text content |
| CSS visibility can affect result | Not affected by rendering in the same way |
| Can be more expensive because rendering may matter | Generally simpler/faster |

---

## Difference between innerHTML and textContent

```text
innerHTML
→ Reads/writes HTML markup

textContent
→ Reads/writes plain text
```

---

## Difference between .style and classList

```text
.style
→ Direct inline CSS modification

.classList
→ CSS class manipulation
```

---

## Difference between attributes and properties

```text
Attribute
→ Information written in HTML markup

Property
→ Value exposed by the DOM object
```

They are related, but they are not always identical.

---

# Important Facts

- DOM stands for **Document Object Model**.
- DOM represents HTML as a tree.
- The DOM tree contains different types of nodes.
- Elements are a type of node.
- `getElementById()` selects one element.
- `querySelector()` selects the first matching element.
- `querySelectorAll()` selects all matching elements.
- `getElementsByClassName()` returns an HTMLCollection.
- `querySelectorAll()` returns a NodeList.
- `innerText` deals with rendered text.
- `textContent` deals with text content.
- `innerHTML` deals with HTML markup.
- `getAttribute()` reads an attribute.
- `setAttribute()` adds or changes an attribute.
- `removeAttribute()` removes an attribute.
- `hasAttribute()` checks whether an attribute exists.
- `createElement()` creates an element but doesn't insert it.
- `appendChild()` adds at the end.
- `prepend()` adds at the beginning.
- `removeChild()` removes a child.
- `.style` changes inline styles.
- `classList.add()` adds a class.
- `classList.remove()` removes a class.
- `classList.toggle()` adds/removes a class depending on its current state.

---

# Summary (30 Second Revision)

- DOM = **Document Object Model**.
- DOM represents an HTML document as a **tree**.
- DOM contains different types of **nodes**.
- An element is a type of node.
- `getElementById()` → selects one element by ID.
- `getElementsByClassName()` → selects multiple elements by class.
- `querySelector()` → selects the first CSS selector match.
- `querySelectorAll()` → selects all CSS selector matches.
- `innerText` → rendered/visible text.
- `textContent` → text content.
- `innerHTML` → HTML markup.
- `getAttribute()` → reads an attribute.
- `setAttribute()` → adds or changes an attribute.
- `removeAttribute()` → removes an attribute.
- `hasAttribute()` → checks whether an attribute exists.
- `createElement()` → creates an element.
- `appendChild()` → adds at the end.
- `prepend()` → adds at the beginning.
- `removeChild()` → removes a child.
- `.style` → directly changes inline CSS.
- `classList.add()` → adds a class.
- `classList.remove()` → removes a class.
- `classList.toggle()` → adds/removes a class.
- Prefer `classList` for reusable CSS states.
- Be careful with untrusted data and `innerHTML`.
