# Changelog Component

A responsive changelog component built with HTML and CSS as part of my Web Development learning journey.

## Project

This project is based on the [Changelog Component](https://roadmap.sh/projects/changelog-component) challenge from roadmap.sh.

The goal was to build a changelog component with a vertical timeline using HTML and CSS, with a focus on layout and CSS positioning.

## Features

* Changelog heading and description
* Multiple changelog entries
* Date and update columns
* Vertical timeline
* Timeline dots
* Centered content
* Complete changelog button
* Page border with rounded corners

## Technologies Used

* HTML5
* CSS3

## What I Learned

### HTML

* Structuring a webpage using semantic HTML
* Using `header`, `main`, and `section`
* Creating reusable structures for repeated changelog entries
* Using classes to identify and style different elements
* Connecting an external CSS stylesheet

### CSS Basics

* Creating a universal CSS reset
* Using `box-sizing: border-box`
* Setting default font, font size, line height, text color, and background color
* Understanding the difference between `margin` and `padding`
* Using `border` and `border-radius`
* Centering content using `margin: auto`
* Controlling element width

### Flexbox

* Using `display: flex`
* Using `flex-direction: row`
* Creating a two-column layout
* Giving flex items consistent widths
* Understanding how layout and spacing are different concepts

### CSS Positioning

* Understanding `position: relative`
* Understanding `position: absolute`
* Using a relatively positioned parent as a positioning context
* Positioning the vertical timeline independently from the normal document flow
* Positioning timeline dots relative to individual changelog entries
* Using `top`, `bottom`, and `left` for positioning
* Using `calc()` for precise positioning
* Using `transform` to adjust an element's position

### CSS Pseudo-elements

* Using `::after`
* Creating visual elements without adding extra HTML elements
* Using a pseudo-element to create the timeline dots

## Key Concepts I Practiced

The main concept of this project was understanding the relationship between:

`position: relative` → positioning context

`position: absolute` → independently positioned element

This was used to create the vertical timeline and position the dots correctly on the timeline.

## Project Structure

```text
changelog-component/
├── index.html
├── style.css
└── README.md
```

## Reference

[roadmap.sh — Changelog Component](https://roadmap.sh/projects/changelog-component)

## Status

Completed the HTML structure, basic CSS styling, Flexbox layout, vertical timeline, timeline dots, and basic page styling.

Responsive design and further visual refinement will be explored in future projects.
