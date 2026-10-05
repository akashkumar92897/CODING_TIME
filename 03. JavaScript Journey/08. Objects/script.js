// ======================================== CHAPTER 8: OBJECTS ========================================
// ------------------------------------------------------------------------------------------
// Q1. Create a student object containing: Name | Age | City  -->  Print the object.
// ------------------------------------------------------------------------------------------
const student = {
  name: "Akash",
  age: 21,
  city: "Delhi",
};
console.log(student);


// ------------------------------------------------------------------------------------------
// Q2. Access and print: Name | Age  -->  using dot notation.
// ------------------------------------------------------------------------------------------
console.log(student.name);
console.log(student.age);


// ------------------------------------------------------------------------------------------
// Q3. Access and print: Name | Age  -->  using bracket notation.
// ------------------------------------------------------------------------------------------
console.log(student["name"]);
console.log(student["age"]);


// ------------------------------------------------------------------------------------------
// Q4. Update the age property. Print the updated object.
// ------------------------------------------------------------------------------------------
student.age = 22;
console.log(student);


// ------------------------------------------------------------------------------------------
// Q5. Add a new property: course  -->  Print the object.
// ------------------------------------------------------------------------------------------
student.course = "BCA";
console.log(student);


// ------------------------------------------------------------------------------------------
// Q6. Delete the city property. Print the object.
// ------------------------------------------------------------------------------------------
delete student.city;
console.log(student);


// ------------------------------------------------------------------------------------------
// Q7. Create a car object containing: Brand  |  Model  |  Price  -->  Print all properties.
// ------------------------------------------------------------------------------------------
const car = {
  brand: "Toyota",
  model: "Fortuner",
  price: 4000000,
};
for (const key in car) {
  console.log(key, ":", car[key]);
}


// ------------------------------------------------------------------------------------------
// Q8. Create a nested object: student -> address -> city  |  Access and print the city.
// ------------------------------------------------------------------------------------------
const student8 = {
  name: "Akash",
  address: {
    city: "Delhi",
    state: "Delhi",
  },
};
console.log(student8.address.city);


// ------------------------------------------------------------------------------------------
// Q9. Create a nested object: company -> employee -> department | Print the department name.
// ------------------------------------------------------------------------------------------
const company = {
  name: "Google",
  employee: {
    name: "Akash",
    department: "Engineering",
  },
};
console.log(company.employee.department);


// ------------------------------------------------------------------------------------------
// Q10. Explain the difference between: dot notation and bracket notation
// | Dot notation                               |   Bracket notation                        |
// |--------------------------------------------|-------------------------------------------|
// | `obj.name`                                 |   `obj["name"]`                           |
// | Simple and readable                        |   More flexible                           |
// | Property name is written directly          |   Property name can come from a variable  |
// | Cannot directly use dynamic property names |   Can use dynamic property names          |
// | student.name;                              |   student["name"];                        |
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q11. Create a const object. Modify one property. Observe the result.
// ------------------------------------------------------------------------------------------
const student11 = {
  name: "Akash",
  age: 21,
};
student11.age = 22;
console.log(student11);


// ------------------------------------------------------------------------------------------
// Q12. Try reassigning the const object. Observe the result.
// ------------------------------------------------------------------------------------------
// const student12 = {
//   name: "Akash",
// };
// student12 = {
//   name: "Rahul",    // TypeError: Assignment to constant variable.
// };


// ------------------------------------------------------------------------------------------
// Q13. Create an object method named greet(). Print: Hello Student
// ------------------------------------------------------------------------------------------
const student13 = {
  greet() {
    console.log("Hello Student");
  },
};
student13.greet();


// ------------------------------------------------------------------------------------------
// Q14. Create an object method that prints the object's name property using this.
// ------------------------------------------------------------------------------------------
const student14 = {
  name: "Akash",
  greet() {
    console.log(this.name);
  },
};
student14.greet();


// ------------------------------------------------------------------------------------------
// Q15. Explain the purpose of: this inside an object.
// `this` refers to the object that is calling the method.
// ------------------------------------------------------------------------------------------
const student15 = {
  name: "Akash",
  greet() {
    console.log(this.name);
  },
};
student15.greet();


// ------------------------------------------------------------------------------------------
// Q16. Loop through an object using for...in. Print only keys.
// ------------------------------------------------------------------------------------------
const student16 = {
  name: "Akash",
  age: 21,
  city: "Delhi",
};
for (const key in student16) {
  console.log(key);
}


// ------------------------------------------------------------------------------------------
// Q17. Loop through an object using for...in. Print keys and values.
// ------------------------------------------------------------------------------------------
for (const key in student16) {
    console.log(key, ":", student16[key]);
}


// ------------------------------------------------------------------------------------------
// Q18. Use Object.keys(). Print the result.
// ------------------------------------------------------------------------------------------
const student18 = {
    name: "Akash",
    age: 21,
    city: "Delhi"
};
console.log(Object.keys(student18));


// ------------------------------------------------------------------------------------------
// Q19. Use Object.values(). Print the result.
// ------------------------------------------------------------------------------------------
console.log(Object.values(student18));


// ------------------------------------------------------------------------------------------
// Q20. Use Object.entries(). Print the result.
// ------------------------------------------------------------------------------------------
console.log(Object.entries(student18));


// ------------------------------------------------------------------------------------------
// Q21. Count the number of properties in an object.
// ------------------------------------------------------------------------------------------
const student21 = {
    name: "Akash",
    age: 21,
    city: "Delhi",
    course: "BCA"
};
console.log(Object.keys(student21).length);


// ------------------------------------------------------------------------------------------
// Q22. Create a dictionary object containing: word | meaning -> Store at least 5 entries.
// ------------------------------------------------------------------------------------------
const dictionary = {
    JavaScript: "A programming language used for web development.",
    Array: "A collection of values.",
    Object: "A collection of key-value pairs.",
    Function: "A reusable block of code.",
    Variable: "A named storage location for a value."
};
console.log(dictionary);


// ------------------------------------------------------------------------------------------
// Q23. Print all words and meanings using a loop.
// ------------------------------------------------------------------------------------------
for (const word in dictionary) {
    console.log(word, ":", dictionary[word]);
}


// ------------------------------------------------------------------------------------------
// Q24. Create a profile object containing: Name | Skills | Education | Projects
// Print all information.
// ------------------------------------------------------------------------------------------
const profile = {
    name: "Akash",
    skills: ["JavaScript", "C++", "HTML", "CSS"],
    education: "BCA",
    projects: [
        "AI Fitness Tracker",
        "Zomato Reels"
    ]
};
console.log("Name:", profile.name);
console.log("Skills:", profile.skills);
console.log("Education:", profile.education);
console.log("Projects:", profile.projects);


// ------------------------------------------------------------------------------------------
// Q25. Create an object representing a book. Print all properties using a loop.
// ------------------------------------------------------------------------------------------
const book = {
    title: "Atomic Habits",
    author: "James Clear",
    price: 500,
    pages: 320
};
for (const key in book) {
    console.log(key, ":", book[key]);
}


// ------------------------------------------------------------------------------------------
// Q26. Create a shopping cart object.
// Store: Product Name | Price | Quantity  -->  Print total cost.
// ------------------------------------------------------------------------------------------
const cart = {
    productName: "Laptop",
    price: 60000,
    quantity: 2
};
const totalCost = cart.price * cart.quantity;
console.log("Product:", cart.productName);
console.log("Price:", cart.price);
console.log("Quantity:", cart.quantity);
console.log("Total Cost:", totalCost);


// ------------------------------------------------------------------------------------------
// Q27. Copy an object using spread operator (...).
// Check whether changes affect original object.
// ------------------------------------------------------------------------------------------
const original = {
    name: "Akash",
    age: 21
};
const copy = {
    ...original
};
copy.age = 22;
console.log("Original:", original);
console.log("Copy:", copy);


// ------------------------------------------------------------------------------------------
// Q28. Explain: Object.keys() | Object.values() | Object.entries() -> in your own words.
// ---------- Object.keys(obj) ----------
// Returns an array containing the object's keys.
// ---------- Object.values(obj) ----------
// Returns an array containing the object's values.
// ---------- Object.entries(obj) ----------
// Returns an array containing [key, value] pairs.
// ---------- Easy memory ----------
// keys()    → keys
// values()  → values
// entries() → keys + values
// ------------------------------------------------------------------------------------------


// ------------------------------------------------------------------------------------------
// Q29. Use optional chaining to safely access a nested property.
// ------------------------------------------------------------------------------------------
const user = {
    name: "Akash",
    address: {
        city: "Delhi"
    }
};
console.log(user.address?.city);


// ------------------------------------------------------------------------------------------
// Q30. Predict the output:
// ------------------------------------------------------------------------------------------
let student30 = {
    name: "Akash"
};
console.log(student30.name);


// ------------------------------------------------------------------------------------------
// Q31. Predict the output:
// ------------------------------------------------------------------------------------------
let student31 = {
    name: "Akash"
};
student31.age = 21;
console.log(student31);


// ------------------------------------------------------------------------------------------
// Q32. Predict the output:
// ------------------------------------------------------------------------------------------
let student32 = {
    name: "Akash"
};
delete student32.name;
console.log(student32);


// ------------------------------------------------------------------------------------------
// Q33. Predict the output:
// ------------------------------------------------------------------------------------------
const student33 = {
    name: "Akash"
};
student33.name = "Rahul";
console.log(student33.name);


// ------------------------------------------------------------------------------------------
// Q34. Explain: Object | Property | Method  -->  in your own words.
// ---------- Object ----------
// The complete collection:
// student
// ---------- Property ----------
// A key-value pair that stores data:
// name: "Akash"    
// ---------- Method ----------
// A function stored inside an object:
// greet() {
//     console.log("Hello");
// }
// ---------- Easy memory ----------
// Object   → container
// Property → data
// Method   → behavior
// ------------------------------------------------------------------------------------------


// ======================================== CHALLENGE ========================================
// ------------------------------------------------------------------------------------------
// Q35. Build a Student Management Object.
// Store: Name | Age | Marks | Course
// Add a method: getGrade()
// Rules: 90+ -> A | 75+ -> B | 60+ -> C | Below 60 -> Fail
// ------------------------------------------------------------------------------------------
const student35 = {
  name: "Akash",
  age: 21,
  marks: 82,
  course: "BCA",

  getGrade() {
    if (this.marks >= 90) {
      return "A";
    } else if (this.marks >= 75) {
      return "B";
    } else if (this.marks >= 60) {
      return "C";
    } else {
      return "Fail";
    }
  },
};

console.log("Name:", student35.name);
console.log("Age:", student35.age);
console.log("Marks:", student35.marks);
console.log("Course:", student35.course);
console.log("Grade:", student35.getGrade());


// ------------------------------------------------------------------------------------------
// Q36. Build a Bank Account Object.
// Store: Account Holder | Balance
// Methods: deposit() | withdraw() | checkBalance()
// ------------------------------------------------------------------------------------------
const bankAccount = {
  accountHolder: "Akash",
  balance: 10000,

  deposit(amount) {
    this.balance += amount;
    console.log("Deposited:", amount);
  },

  withdraw(amount) {
    if (amount <= this.balance) {
      this.balance -= amount;
      console.log("Withdrawn:", amount);
    } else {
      console.log("Insufficient balance");
    }
  },

  checkBalance() {
    console.log("Balance:", this.balance);
  },
};

bankAccount.checkBalance();
bankAccount.deposit(5000);
bankAccount.checkBalance();
bankAccount.withdraw(3000);
bankAccount.checkBalance();


// ------------------------------------------------------------------------------------------
// Q37. Without running the code, predict every output:
// ------------------------------------------------------------------------------------------
let user37 = {
  name: "Akash",
  age: 21,
};
console.log(user37.name);
user.city = "Delhi";
console.log(user37.city);
delete user37.age;
console.log(user);
for (let key in user) {
  console.log(key);
}