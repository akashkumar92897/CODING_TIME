// ======================================== CHAPTER 9: THE DOM ========================================
// ------------------------------------------------------------------------------------------
// Q1. What is the DOM? How does it represent the HTML strucuture
// The DOM (Document Object Model) is a programming interface that represents an HTML document as a tree of objects/nodes.
// JavaScript can use the DOM to:
// - Select HTML elements
// - Change content
// - Change styles
// - Change attributes
// - Create elements
// - Remove elements
// - Handle user interaction
// ---------- Example: ----------
// <body>
//     <h1>Hello</h1>
//     <p>Welcome</p>
// </body>
// ---------- DOM structure: ----------
// Document
// └── html
//     └── body
//         ├── h1
//         │   └── "Hello"
//         └── p
//             └── "Welcome"
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q2. Name the types of nodes in the DOM tree.
// 1. Document node
// 2. Element node
// 3. Text node
// 4. Comment node
// 5. Attribute node
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q3. What is the difference between an element node and a text node?
// ---------- Element node ----------
// Represents an HTML element/tag.
// <h1>Hello</h1>
// <h1> is an element node.
// ---------- Text node ----------
// Represents the actual text inside an element.
// <h1>Hello</h1>
// "Hello" is a text node.
// ---------- Easy memory: ----------
// <h1> → Element
// Hello → Text
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q4. Inspect the follwoing HTML in the browser and identofy each node:
// <div> Hello <span> World </span> </div>
// ---------- DOM structure: ----------
// div                → Element node
// ├── " Hello "      → Text node
// └── span           → Element node
//     └── " World "  → Text node
// So there are: - div → element - " Hello " → text - span → element - " World " → text
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q5. What is the difference between getElementById and querySelector?
// ---------- getElementById() ----------
// Selects an element using its ID.
// const heading = document.getElementById("heading");
// ---------- querySelector() ----------
// Uses a CSS selector and returns the first matching element.
// const heading = document.querySelector("#heading");
// |----------------------------------------------------------------|
// | `getElementById()`             | `querySelector()`             |
// |--------------------------------|-------------------------------|
// | Selects by ID                  | Uses CSS selectors            |
// | `getElementById("heading")`    | `querySelector("#heading")`   |
// | Specifically designed for IDs  | More flexible                 |
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q6. What does getElementsByClassName return? Is it an array?
// It returns an HTMLCollection.
// const buttons = document.getElementsByClassName("btn");
// console.log(buttons);
// It is not an Array.
// Array.isArray(buttons); // false
// You can convert it to an array:
// const buttonsArray = Array.from(buttons);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q7. Use querySelectorAll to select all buttons with class ".buy-now".
const buyNow = document.querySelectorAll(".buy-now");
console.log(buyNow);
// querySelectorAll() returns a NodeList containing all matching elements.
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q8. Select the heading of a page by ID and change its text to "Welcome to JS!".
const heading = document.querySelector("#heading");
heading.textContent = "Welcome to JS!";
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q9. Selct all <li> elements and print their text using a loop
const itms = document.querySelectorAll("li");
for (const item of itms) {
    console.log(item.textContent);
}
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q10. What is the difference between innerHTML, textContent, and innerText?
// ---------- innerHTML ----------
// Gets/sets HTML content.
// element.innerHTML = "<b>Hello</b>";
// The <b> tag is interpreted as HTML.
// ---------- textContent ----------
// Gets/sets all text content.
// element.textContent = "<b>Hello</b>";
// This displays the <b> characters as text rather than creating a bold element.
// ---------- innerText ----------
// Gets/sets rendered/visible text and is affected by CSS/layout.
// |------------------------------------------------------|
// | Property       | Handles HTML | Considers visibility |
// |----------------|--------------|----------------------|
// | `innerHTML`    | Yes          | No                   |
// | `textContent`  | No           | No                   |
// | `innerText`    | No           | Yes                  |
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q11. When should you use textContent instead of innerText?
// Use textContent when you simply want to read or change text without needing the rendered 
// visual state.
// ---------- Example: ----------
// element.textContent = "Hello";
// It is generally preferable for straightforward text manipulation because it does not need to calculate rendered layout.
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q12. Select a paragraph and replace its content with: <b>Updated</b> by JS
// If you want the <b> element to actually be interpreted as HTML:
const paragraph = document.querySelector("p");
paragraph.innerHTML = "<b>Updated</b> by JS";
// Result: Updated by JS
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q13. How do you get the src of an image using JS?
const image = document.querySelector("img");
console.log(image.getAttribute("src"));
// You can also access the property:
console.log(image.src);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q14. What does setAttribute() do?
// setAttribute() adds a new attribute or changes an existing attribute.
// ---------- Syntax: ----------
// element.setAttribute("attribute", "value");
// ---------- Examples: ----------
image.setAttribute("alt", "Profile picture");
image.setAttribute("src", "https://images.unsplash.com/photo-1793451551758-dc59e0b817b7?w=300&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=NHwxMjA3fDA%3D");
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q15. Selct a link and update its href to point to https://www.google.com.
const link = document.querySelector("a");
link.setAttribute("href", "https://www.google.com");
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q16. Add a title attribute to a dic dynamically.
const div = document.querySelector("#content-box");
div.setAttribute("title", "This is a div");
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q17. Remove the diasbled attribute from a button.
const button = document.querySelector("button");
button.removeAttribute("disabled");
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q18. What does createElement() do? What's returned?
// createElement() creates a new element node.
const newDiv = document.createElement("div");
console.log(newDiv);
// It returns the newly created element.
// Important: creating it does not automatically add it to the page.
// You need to insert it: document.body.appendChild(newDiv);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q19. What is the difference between appendChild() and prepend()
// appendChild()
// Adds an element as the last child. parent.appendChild(child);
// prepend()
// Adds content as the first child. parent.prepend(child);
// ---------- Example: ----------
const newP = document.createElement("p");
newP.textContent = "New";
const main = document.querySelector("#main");
main.appendChild(newP);
// Result:
// Existing
// New
// With:
main.prepend(newP);
// Result:
// New
// Existing
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q20. Can you remove an element using removeChild()?
const parent = document.querySelector("#main");
const child = parent.querySelector("p");
parent.removeChild(child);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q21. Create a new list item <li>New Task</li> and add it to the end of a <ul>.
const li = document.createElement("li");
li.textContent = "New Task";
const ul = document.querySelector("ul");
ul.appendChild(li);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q22. Create a new image element with a placeholder source and add it at the top of a div.
const img = document.createElement("img");
img.src = "https://via.placeholder.com/150";
img.alt = "Placeholder image";
const topDiv = document.querySelector("#content-box");
topDiv.prepend(img);
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q23. Select the first item in a list and delete it from the DOM.
const list = document.querySelector("ul");
const firstItem = list.querySelector("li");
list.removeChild(firstItem);
// A simpler modern approach:
firstItem.remove();
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q24. How do you change the background color of an element?
const element = document.querySelector("div");
element.style.backgroundColor = "red";
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q25. What is the difference between .classList.add() and .classList.toggle()?
// classList.add()
// Always adds the class.
// element.classList.add("active");
// If active already exists, it remains there.
// classList.toggle()
// Adds the class if it doesn't exist and removes it if it does.
// element.classList.toggle("active");
// Easy memory:
// add()    → Add
// remove() → Remove
// toggle() → Add ↔ Remove
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q26. Add a highlight class to every even item in a list.
const items = document.querySelectorAll("#practice-list li");
items.forEach((item, index) => {
    if ((index + 1) % 2 === 0) {
        item.classList.add("highlight");
    }
});
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q27. Toggle a class active on a button when clicked (Hint: Use classList.toggle())
const btn = document.querySelector("button");
btn.addEventListener("click", () => {
    btn.classList.toggle("active");
});
// Every click changes the state:
// First click  → active added
// Second click → active removed
// Third click  → active added
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Q28. Set the font size of all <p>. elements to 20px using .style.
const paragraphs = document.querySelectorAll("p");
paragraphs.forEach((paragraph) => {
    paragraph.style.fontSize = "20px";
});
// ------------------------------------------------------------------------------------------