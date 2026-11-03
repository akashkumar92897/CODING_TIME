// DOM Selection
const main = document.querySelector("main");
const form = document.querySelector("#registration-form");
const inputs = document.querySelectorAll("input");

const nameInput = document.querySelector("#name");
const occupationInput = document.querySelector("#occupation");
const summaryInput = document.querySelector("#summary");

// Profile Picture Upload Elements
const btn = document.querySelector("#upload-btn");
const fileinp = document.querySelector("#profileinp");
const fileName = document.querySelector("#file-name");

// Open File Picker
function fileinput() {
  fileinp.click();
}

btn.addEventListener("click", fileinput);

// Handle File Selection
fileinp.addEventListener("change", function (dets) {
  const file = dets.target.files[0];

  if (file) {
    btn.textContent = file.name;
    fileName.textContent = "Profile picture selected";
  }
});

// Handle Form Submission
form.addEventListener("submit", function (dets) {
  dets.preventDefault();

  // Create Identity Card
  const card = document.createElement("div");
  card.classList.add("card");

  // Create Profile Container
  const profile = document.createElement("div");
  profile.classList.add("profile");

  // Create Profile Image
  const file = fileinp.files[0];

  if (file) {
    const imageURL = URL.createObjectURL(file);

    const img = document.createElement("img");
    img.setAttribute("src", imageURL);
    img.setAttribute("alt", "Profile picture");

    profile.appendChild(img);
  }

  // Create Name
  const h3 = document.createElement("h3");
  h3.textContent = nameInput.value;

  // Create Occupation
  const h5 = document.createElement("h5");
  h5.textContent = occupationInput.value;

  // Create Summary
  const p = document.createElement("p");
  p.textContent = summaryInput.value;

  // Append Elements to Card
  card.appendChild(profile);
  card.appendChild(h3);
  card.appendChild(h5);
  card.appendChild(p);

  // Append Card to Main
  main.appendChild(card);

  // Reset Form
  form.reset();

  // Reset Upload Button Text
  btn.innerHTML = "<span>＋</span> Choose Profile Picture";
  fileName.textContent = "PNG, JPG or WEBP";
});
