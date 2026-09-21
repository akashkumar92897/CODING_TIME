# Chapter 10: Events & Event Handling

## What are Events?

An **event** is an action or occurrence that happens in the browser and can be detected and handled using JavaScript.

Examples:

- User clicks a button
- User types into an input
- A form is submitted
- Mouse moves over an element
- User releases a keyboard key
- A value in a form control changes

JavaScript can **listen for these events and execute a function** when they occur.

### Basic Example

```js
const button = document.querySelector("#btn");

button.addEventListener("click", function () {
    console.log("Button clicked!");
});
```

### Event Flow

```text
User Action
    ↓
Event occurs
    ↓
JavaScript detects event
    ↓
Event handler runs
    ↓
JavaScript performs some action
```

---

# 1. Event Binding

**Event binding** means connecting an event to a function so that the function executes when that event occurs.

The modern and preferred way is:

```js
element.addEventListener("event", handler);
```

The two important methods are:

- `addEventListener()`
- `removeEventListener()`

---

## 1.1 `addEventListener()`

`addEventListener()` is used to attach an event handler to an element.

### Syntax

```js
element.addEventListener(event, handler);
```

### Example

```js
const button = document.querySelector("#btn");

button.addEventListener("click", function () {
    console.log("Button clicked!");
});
```

Here:

```text
button
   ↓
addEventListener()
   ↓
"click"
   ↓
function executes
```

---

## Using a Named Function

Instead of writing the function directly:

```js
button.addEventListener("click", function () {
    console.log("Clicked!");
});
```

We can define the function separately:

```js
function handleClick() {
    console.log("Clicked!");
}

button.addEventListener("click", handleClick);
```

### Important

Pass the function:

```js
button.addEventListener("click", handleClick);
```

Do NOT call the function:

```js
button.addEventListener("click", handleClick());
```

Why?

```text
handleClick
→ passes the function

handleClick()
→ immediately executes the function
```

---

# 2. `removeEventListener()`

`removeEventListener()` removes an event handler that was previously attached.

### Syntax

```js
element.removeEventListener(event, handler);
```

### Example

```js
function handleClick() {
    console.log("Clicked!");
}

button.addEventListener("click", handleClick);

button.removeEventListener("click", handleClick);
```

After removal, clicking the button will no longer execute `handleClick`.

---

## Important Rule: Same Function Reference

The function reference used with `removeEventListener()` must be the same function reference that was used with `addEventListener()`.

### Correct

```js
function handleClick() {
    console.log("Clicked!");
}

button.addEventListener("click", handleClick);
button.removeEventListener("click", handleClick);
```

### Incorrect

```js
button.addEventListener("click", function () {
    console.log("Clicked!");
});

button.removeEventListener("click", function () {
    console.log("Clicked!");
});
```

These are two different function objects.

### Easy Memory Trick

```text
addEventListener()
→ Attach

removeEventListener()
→ Detach

Same function reference
→ Can remove

Different function reference
→ Cannot remove
```

---

# 3. Common Events

Some of the most commonly used JavaScript events are:

| Event | Happens When | Common Use |
|---|---|---|
| `click` | User clicks an element | Buttons, links |
| `input` | Input value changes | Live search, character counter |
| `change` | Form control value changes/commits | Select, checkbox |
| `submit` | A form is submitted | Form handling |
| `mouseover` | Mouse moves onto an element | Hover interactions |
| `keyup` | Keyboard key is released | Keyboard interactions |

---

# 4. `click` Event

The `click` event occurs when the user clicks an element.

```js
const button = document.querySelector("#btn");

button.addEventListener("click", function () {
    console.log("Button clicked!");
});
```

### Common Uses

- Buttons
- Links
- Menus
- Interactive elements
- UI controls

---

# 5. `input` Event

The `input` event fires whenever the value of an input changes.

It is especially useful when you need to react **while the user is typing**.

```js
const input = document.querySelector("#name");

input.addEventListener("input", function () {
    console.log(input.value);
});
```

If the user types:

```text
A
Ak
Aka
Akash
```

the handler can execute as the value changes.

### Common Uses

- Live character counter
- Live search
- Real-time validation
- Password strength indicators

---

# 6. `change` Event

The `change` event occurs when the value of a form control changes and the change is committed.

```js
const select = document.querySelector("#country");

select.addEventListener("change", function () {
    console.log(select.value);
});
```

Commonly used with:

- `<select>`
- Checkboxes
- Radio buttons
- Other form controls

---

## `input` vs `change`

| `input` | `change` |
|---|---|
| Fires as the input value changes | Fires when the change is committed |
| Useful for live updates | Useful for committed changes |
| Common with typing | Common with select/checkbox |

### Example

For a live character counter:

```js
input.addEventListener("input", updateCounter);
```

is usually appropriate.

---

# 7. `submit` Event

The `submit` event occurs when a form is submitted.

```js
const form = document.querySelector("#form");

form.addEventListener("submit", function (event) {
    console.log("Form submitted!");
});
```

A common use is to prevent the browser's default form submission behavior:

```js
form.addEventListener("submit", function (event) {
    event.preventDefault();

    console.log("Handling form using JavaScript");
});
```

This allows JavaScript to handle the form instead of allowing the browser to perform its normal submission behavior.

---

# 8. `mouseover` Event

The `mouseover` event occurs when the mouse pointer moves onto an element.

```js
const box = document.querySelector("#box");

box.addEventListener("mouseover", function () {
    console.log("Mouse is over the box!");
});
```

### Common Uses

- Hover interactions
- Tooltips
- Interactive UI

### Important

For simple visual hover effects, CSS is usually better:

```css
button:hover {
    background-color: black;
}
```

Use JavaScript when the hover needs actual application logic or state changes.

---

# 9. `keyup` Event

The `keyup` event fires when a keyboard key is released.

```js
document.addEventListener("keyup", function (event) {
    console.log(event.key);
});
```

If the user presses and releases `A`:

```js
event.key
```

can give:

```text
"A"
```

### Common Uses

- Keyboard shortcuts
- Detecting specific keys
- Search interactions
- Keyboard-based UI

---

# 10. Event Object

When an event occurs, the browser provides an **event object** containing information about that event.

Example:

```js
button.addEventListener("click", function (event) {
    console.log(event);
});
```

The `event` parameter contains information and methods related to the event.

You may also see:

```js
function (e) {
    console.log(e);
}
```

or:

```js
function (evt) {
    console.log(evt);
}
```

These are simply variable names.

---

# 11. `event.target`

`event.target` refers to the element where the event **originally occurred**.

Example:

```html
<button id="btn">
    <span>Click Me</span>
</button>
```

```js
const button = document.querySelector("#btn");

button.addEventListener("click", function (event) {
    console.log(event.target);
});
```

If the user clicks the `<span>`, then:

```js
event.target
```

refers to the `<span>`.

### Easy Memory Trick

```text
event.target
→ Where did the event actually start?
```

---

# 12. `event.type`

`event.type` tells you what type of event occurred.

```js
button.addEventListener("click", function (event) {
    console.log(event.type);
});
```

Output:

```text
click
```

For an input event:

```js
input.addEventListener("input", function (event) {
    console.log(event.type);
});
```

Output:

```text
input
```

### Easy Memory Trick

```text
event.type
→ What event happened?
```

---

# 13. `event.preventDefault()`

`preventDefault()` prevents the browser's **default action** associated with an event.

### Form Example

```js
const form = document.querySelector("#form");

form.addEventListener("submit", function (event) {
    event.preventDefault();

    console.log("Default form submission prevented");
});
```

### Link Example

```js
const link = document.querySelector("#link");

link.addEventListener("click", function (event) {
    event.preventDefault();

    console.log("Navigation prevented");
});
```

### Important

`preventDefault()`:

```text
Stops the browser's default action
```

It does NOT:

```text
Stop event propagation
```

Event propagation is controlled separately.

```js
event.stopPropagation();
```

---

# 14. Event Propagation

When an event occurs on an element, the event can travel through the DOM.

This is called **event propagation**.

Event propagation has three phases:

```text
1. Capturing Phase
        ↓
2. Target Phase
        ↓
3. Bubbling Phase
```

Consider:

```html
<div id="parent">
    <button id="child">Click Me</button>
</div>
```

When the button is clicked, the event travels through the DOM.

---

# 15. Capturing Phase

During the **capturing phase**, the event travels from the outer ancestors toward the target.

```text
Document
   ↓
HTML
   ↓
Body
   ↓
Parent
   ↓
Button
```

You can listen during the capturing phase by setting `capture` to `true`.

```js
parent.addEventListener("click", function () {
    console.log("Parent");
}, true);
```

Or:

```js
parent.addEventListener("click", function () {
    console.log("Parent");
}, {
    capture: true
});
```

---

# 16. Target Phase

The event eventually reaches the element where the event originally occurred.

That element is the **target**.

For example:

```html
<button>Click Me</button>
```

If the button is clicked:

```text
Button
  ↑
Target
```

This is the target phase.

---

# 17. Bubbling Phase

After reaching the target, the event can travel back upward through its ancestors.

```text
Button
   ↑
Parent
   ↑
Body
   ↑
HTML
   ↑
Document
```

This is called **event bubbling**.

By default, event listeners added with `addEventListener()` listen during the bubbling phase.

```js
parent.addEventListener("click", function () {
    console.log("Parent clicked");
});
```

If a child inside the parent is clicked, the event can bubble to the parent.

---

# 18. Capturing vs Bubbling

| Capturing | Bubbling |
|---|---|
| Ancestor → Target | Target → Ancestor |
| Happens before target | Happens after target |
| Requires `capture: true` to listen during capture | Default for `addEventListener()` |
| Less commonly used | Very commonly used |
| Event travels downward | Event travels upward |

### Easy Memory Trick

```text
CAPTURING
→ Coming DOWN

BUBBLING
→ Going UP
```

Visualize:

```text
             Document
                 │
                 ↓
             Capturing
                 ↓
               Parent
                 ↓
               Button
               TARGET
                 ↑
              Bubbling
                 ↑
               Parent
                 ↑
             Document
```

---

# 19. `event.target` vs `event.currentTarget`

This is one of the most important event concepts.

Consider:

```html
<div id="parent">
    <button id="child">Click Me</button>
</div>
```

```js
const parent = document.querySelector("#parent");

parent.addEventListener("click", function (event) {
    console.log(event.target);
    console.log(event.currentTarget);
});
```

If the button is clicked:

```text
event.target
    ↓
<button>

event.currentTarget
    ↓
<div>
```

---

## `event.target`

The element where the event **originally occurred**.

```text
target
→ Actual source of the event
```

---

## `event.currentTarget`

The element whose **event listener is currently executing**.

```text
currentTarget
→ Element whose listener is running
```

### Easy Memory Trick

```text
target
→ Who actually triggered the event?

currentTarget
→ Whose listener is handling it?
```

### Comparison

| `event.target` | `event.currentTarget` |
|---|---|
| Original event source | Element whose listener is executing |
| Can be a child element | Usually the element listener was attached to |
| Very useful with event delegation | Useful for identifying the current listener |
| Can differ from `currentTarget` | Can differ from `target` |

---

# 20. Event Delegation

**Event delegation** is a technique where an event listener is attached to a parent element instead of attaching separate listeners to each child.

It relies on **event bubbling**.

Consider:

```html
<ul id="list">
    <li>HTML</li>
    <li>CSS</li>
    <li>JavaScript</li>
</ul>
```

Instead of adding an event listener to every `<li>`, we can attach one listener to the `<ul>`.

```js
const list = document.querySelector("#list");

list.addEventListener("click", function (event) {
    console.log(event.target.textContent);
});
```

When an `<li>` is clicked:

```text
<li> clicked
    ↓
Event bubbles
    ↓
<ul> listener
    ↓
Handle the event
```

---

# 21. Why Event Delegation is Useful

Event delegation is useful when:

### 1. There are many similar elements

Instead of:

```text
100 child elements
↓
100 event listeners
```

you can use:

```text
100 child elements
↓
1 parent event listener
```

### 2. Elements are dynamically created

Suppose new Todo items are added after the page loads.

A listener directly attached only to the existing items will not automatically be attached to future items.

With delegation:

```js
todoList.addEventListener("click", handleClick);
```

new child elements can still be handled because their events bubble to the parent.

### 3. Related interactions can be handled in one place

Instead of spreading event handling across many elements, related behavior can be centralized in the parent.

---

# 22. Event Delegation with `matches()`

Sometimes a parent contains multiple types of elements.

Use `matches()` to check whether the event target matches a selector.

```js
const list = document.querySelector("#list");

list.addEventListener("click", function (event) {
    if (event.target.matches("li")) {
        console.log(event.target.textContent);
    }
});
```

Here:

```js
event.target.matches("li")
```

checks whether the element that triggered the event is an `<li>`.

### Easy Memory Trick

```text
matches()
→ "Is this element what I am looking for?"
```

---

# 23. Event Delegation with `closest()`

`closest()` is useful when the user clicks an element **inside** the element you actually want to handle.

Example:

```html
<ul id="todoList">
    <li class="todo-item">
        <span>Learn JavaScript</span>
        <button>Delete</button>
    </li>
</ul>
```

If the user clicks the `<span>`:

```js
event.target
```

is the `<span>`, not the `<li>`.

We can find the nearest `.todo-item`:

```js
todoList.addEventListener("click", function (event) {
    const item = event.target.closest(".todo-item");

    if (item) {
        console.log(item.textContent);
    }
});
```

### Easy Memory Trick

```text
matches()
→ Check the current element

closest()
→ Find the nearest matching ancestor
```

---

# 24. Event Delegation Example — Todo List

```html
<ul id="todoList">
    <li class="todo-item">Learn HTML</li>
    <li class="todo-item">Learn CSS</li>
    <li class="todo-item">Learn JavaScript</li>
</ul>
```

```js
const todoList = document.querySelector("#todoList");

todoList.addEventListener("click", function (event) {
    const item = event.target.closest(".todo-item");

    if (item) {
        item.remove();
    }
});
```

Now clicking a Todo item removes it.

The important part is that there is only **one event listener**:

```js
todoList.addEventListener("click", ...);
```

rather than one listener for every Todo item.

---

# 25. `preventDefault()` vs `stopPropagation()`

These methods are commonly confused.

| Method | Purpose |
|---|---|
| `preventDefault()` | Stops the browser's default action |
| `stopPropagation()` | Stops event propagation |
| `stopImmediatePropagation()` | Stops propagation and prevents other listeners on the same element from running |

### Example

```js
form.addEventListener("submit", function (event) {
    event.preventDefault();
});
```

This prevents the default form submission.

It does not automatically stop the event from propagating.

---

# 26. Event Binding vs Event Delegation

| Event Binding | Event Delegation |
|---|---|
| Listener attached directly to element | Listener attached to parent |
| Simple and straightforward | Useful for groups of elements |
| Good for isolated elements | Good for repeated elements |
| One or more listeners | Can handle many children with one listener |
| Doesn't inherently depend on bubbling | Relies on bubbling |

### Example: Direct Binding

```js
button.addEventListener("click", handleClick);
```

### Example: Delegation

```js
list.addEventListener("click", function (event) {
    if (event.target.matches("li")) {
        handleClick(event);
    }
});
```

---

# 27. Event Handling Mindset

## Don't Bind Events Everywhere — Delegate Smartly

A beginner might think:

```text
Find every element
       ↓
Attach listener to every element
       ↓
Repeat
```

Instead, ask:

> **Can a parent element handle these related events using event delegation?**

### Use Direct Binding When:

- There are only a few elements
- The element has unique behavior
- The interaction is isolated

Example:

```js
submitButton.addEventListener("click", handleSubmit);
```

### Use Event Delegation When:

- There are many similar elements
- Elements are dynamically created
- Children share the same behavior
- A parent can naturally manage the interaction

Example:

```js
todoList.addEventListener("click", handleTodoClick);
```

### Engineering Mindset

Don't only think:

> "Where can I attach the event?"

Think:

> **"Where is the most appropriate place to handle this event?"**

---

# 28. Common Confusions

## 1. `event.target` vs `event.currentTarget`

```text
event.target
→ Element where the event originated

event.currentTarget
→ Element whose listener is currently executing
```

Example:

```html
<div id="parent">
    <button id="child">Click</button>
</div>
```

```js
parent.addEventListener("click", function (event) {
    console.log(event.target);
    console.log(event.currentTarget);
});
```

If the button is clicked:

```text
target
→ button

currentTarget
→ parent
```

---

## 2. Capturing vs Bubbling

```text
Capturing
→ Ancestor → Target

Bubbling
→ Target → Ancestor
```

Remember:

```text
Capturing = DOWN
Bubbling = UP
```

---

## 3. `preventDefault()` vs `stopPropagation()`

```text
preventDefault()
→ Stop default browser behavior

stopPropagation()
→ Stop event propagation
```

---

## 4. `input` vs `change`

```text
input
→ React to value changes as they happen

change
→ React when the change is committed
```

---

## 5. `mouseover` vs CSS `:hover`

For simple visual hover effects:

```css
button:hover {
    transform: scale(1.05);
}
```

Prefer CSS.

Use JavaScript when actual application behavior is required.

---

## 6. `addEventListener()` vs Inline Event Handlers

Avoid:

```html
<button onclick="handleClick()">Click</button>
```

Prefer:

```js
button.addEventListener("click", handleClick);
```

Benefits:

- Separates HTML and JavaScript
- Better maintainability
- Allows multiple event listeners
- Keeps behavior in JavaScript

---

# 29. Best Practices

### 1. Prefer `addEventListener()`

```js
button.addEventListener("click", handleClick);
```

instead of inline HTML event handlers.

### 2. Use meaningful event handler names

```js
function handleSubmit(event) {
    event.preventDefault();
}
```

### 3. Use event delegation for repeated/dynamic elements

Instead of:

```js
items.forEach(function (item) {
    item.addEventListener("click", handleClick);
});
```

consider:

```js
container.addEventListener("click", handleClick);
```

when the interaction is naturally shared.

### 4. Don't use JavaScript for things CSS can handle

For simple hover styling:

```css
button:hover {
    background-color: black;
}
```

is preferable to JavaScript.

### 5. Use `preventDefault()` intentionally

Don't blindly add:

```js
event.preventDefault();
```

Understand what default browser behavior you are preventing.

### 6. Be careful with `event.target` in delegation

The target may be a nested element.

```html
<li>
    <button>
        <span>Delete</span>
    </button>
</li>
```

If the user clicks `<span>`, then:

```js
event.target
```

is the `<span>`.

You can use:

```js
event.target.closest("button");
```

when you need the button.

### 7. Keep event handlers focused

A handler should ideally have one clear responsibility.

```js
button.addEventListener("click", handleDelete);
```

is easier to maintain than putting unrelated logic into one huge event handler.

---

# 30. Interview Notes

### Q1. What is an event in JavaScript?

An event is an action or occurrence in the browser that JavaScript can detect and respond to.

### Q2. What is event bubbling?

Event bubbling is the process in which an event propagates from the target element upward through its ancestor elements.

```text
Child → Parent → Body → Document
```

### Q3. What is event capturing?

Event capturing is the propagation phase in which an event travels from an ancestor toward the target element.

```text
Document → Body → Parent → Child
```

### Q4. What is event delegation?

Event delegation is a technique where an event listener is attached to a parent element to handle events from its child elements, usually by relying on event bubbling.

### Q5. What is the difference between `event.target` and `event.currentTarget`?

`event.target` is the element where the event originated, while `event.currentTarget` is the element whose event listener is currently executing.

### Q6. What does `preventDefault()` do?

It prevents the browser's default action associated with an event.

### Q7. Does `preventDefault()` stop event bubbling?

No.

```text
preventDefault()
→ Prevents default browser action

stopPropagation()
→ Stops event propagation
```

### Q8. Why is event delegation useful?

Event delegation:

- Reduces the number of event listeners
- Works well with dynamically created elements
- Centralizes related event handling
- Uses event bubbling

### Q9. Why do we use `addEventListener()` instead of inline event handlers?

It keeps HTML and JavaScript separate, provides better maintainability, and allows multiple listeners to be attached.

### Q10. Can `removeEventListener()` remove an anonymous function?

It can only remove the listener if you provide the **same function reference** that was originally registered.

---

# 31. Important Facts

- Events represent actions or occurrences in the browser.
- `addEventListener()` attaches an event handler.
- `removeEventListener()` removes an event handler.
- `removeEventListener()` requires the same function reference used during registration.
- `click` handles click interactions.
- `input` is useful for reacting to input changes in real time.
- `change` is useful for committed form-control changes.
- `submit` handles form submission.
- `mouseover` detects mouse movement onto an element.
- `keyup` fires when a keyboard key is released.
- The browser provides an **event object** to event handlers.
- `event.target` is where the event originated.
- `event.currentTarget` is the element whose listener is currently executing.
- `event.type` identifies the event type.
- `preventDefault()` prevents the browser's default action.
- Event propagation has capturing, target, and bubbling phases.
- Capturing travels from ancestors toward the target.
- Bubbling travels from the target toward ancestors.
- Bubbling is the default phase for `addEventListener()`.
- Event delegation relies on event bubbling.
- `matches()` checks whether an element matches a CSS selector.
- `closest()` finds the nearest matching ancestor.
- Direct binding is useful for isolated elements.
- Event delegation is useful for repeated and dynamically created elements.
- CSS should generally handle simple visual hover effects.
- `preventDefault()` and `stopPropagation()` perform different jobs.

---

# 32. Complete Event Handling Workflow

Think about event handling as:

```text
USER ACTION
    ↓
EVENT OCCURS
    ↓
EVENT PROPAGATES
    ↓
EVENT HANDLER RUNS
    ↓
READ EVENT OBJECT
    ↓
PERFORM LOGIC
    ↓
OPTIONALLY PREVENT DEFAULT
    ↓
UPDATE DOM
```

### Example: Live Character Counter

```text
User types
    ↓
input event
    ↓
Event handler executes
    ↓
Read input.value
    ↓
Calculate length
    ↓
Update DOM
```

### Example: Todo Delegation

```text
User clicks Todo
    ↓
click event
    ↓
Event bubbles
    ↓
Todo list listener
    ↓
Check event.target / closest()
    ↓
Perform action
```

---

# Easy Memory Trick

```text
EVENTS
│
├── Binding
│   ├── addEventListener()
│   └── removeEventListener()
│
├── Common Events
│   ├── click
│   ├── input
│   ├── change
│   ├── submit
│   ├── mouseover
│   └── keyup
│
├── Event Object
│   ├── target
│   ├── currentTarget
│   ├── type
│   └── preventDefault()
│
├── Propagation
│   ├── Capturing ↓
│   ├── Target
│   └── Bubbling ↑
│
└── Event Delegation
    ├── Parent listener
    ├── Bubbling
    ├── matches()
    └── closest()
```

### One-Line Memory

> **Listen → Propagate → Identify → Handle → Modify**

---

# Summary — 30 Second Revision

```text
Event
→ An action/occurrence detected by JavaScript

addEventListener()
→ Attach an event handler

removeEventListener()
→ Remove an event handler

click
→ User clicks

input
→ Input value changes

change
→ Form value change is committed

submit
→ Form is submitted

mouseover
→ Mouse moves onto an element

keyup
→ Keyboard key is released

event.target
→ Where the event originated

event.currentTarget
→ Whose listener is currently executing

event.type
→ What event occurred

preventDefault()
→ Prevent browser's default action

Capturing
→ Ancestor → Target

Target
→ Event's original target

Bubbling
→ Target → Ancestor

Event Delegation
→ Parent handles child events

matches()
→ Check whether an element matches a selector

closest()
→ Find the nearest matching ancestor
```

### Core Mental Model

```text
                    EVENT
                      │
          ┌───────────┴───────────┐
          ↓                       │
      CAPTURING                   │
       ↓ ↓ ↓                      │
   Document → Parent → Child      │
                      ↓           │
                    TARGET        │
                      ↓           │
                  BUBBLING        │
                      ↑           │
              Child → Parent      │
                      ↑           │
                  Document        │
                                  │
                                  ↓
                         EVENT HANDLER
                                  │
                    ┌─────────────┴─────────────┐
                    ↓                           ↓
              event.target              currentTarget
                    │                           │
                    ↓                           ↓
             Event originated          Listener executing
```

**Mindset:** Don't ask only *"How do I attach an event?"* Ask **"Where should this event be handled, and can event delegation let one parent efficiently handle multiple child elements?"**
