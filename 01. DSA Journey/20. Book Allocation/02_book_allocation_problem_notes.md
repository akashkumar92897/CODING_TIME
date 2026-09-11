# Book Allocation Problem

## 1. Problem Statement

There are `N` books, and the `i-th` book contains `arr[i]` pages.

We have to allocate all the books among `M` students such that:

- Every book is allocated to exactly one student.
- Every student receives at least one book.
- Books must be allocated in **contiguous order**.
- We want to **minimize the maximum number of pages** allocated to any student.

If a valid allocation is not possible, return `-1`.

### Example

```text
Books = [2, 1, 3, 4]
Students = 2
```

One possible allocation is:

```text
Student 1 → [2, 1, 3] = 6 pages
Student 2 → [4]       = 4 pages
```

The maximum pages received by a student is `6`.

Another allocation:

```text
Student 1 → [2, 1] = 3 pages
Student 2 → [3, 4] = 7 pages
```

The maximum is `7`.

Therefore, the minimum possible maximum is:

```text
6
```

---

# 2. Important Constraints

The allocation must satisfy three conditions:

### 1. Every book must be allocated

No book can be skipped.

### 2. Every student must receive at least one book

For example:

```text
4 books, 5 students
```

is impossible because there are not enough books to give one book to every student.

Therefore:

```cpp
if (M > N)
    return -1;
```

### 3. Allocation must be contiguous

For:

```text
[2, 1, 3, 4]
```

this is valid:

```text
Student 1 → [2, 1]
Student 2 → [3, 4]
```

But this is invalid:

```text
Student 1 → [2, 4]
Student 2 → [1, 3]
```

because the books are not allocated in contiguous order.

---

# 3. Core Goal

The problem asks:

> What is the **minimum possible value of the maximum pages assigned to a student**?

This is a classic:

**Binary Search on Answer** problem.

The important words to recognize are:

- **minimize the maximum**
- **maximum possible pages**
- **minimum possible maximum**

These often indicate that we can binary-search the answer.

---

# 4. Why Normal Binary Search Does Not Work

Normal binary search searches for a value inside a sorted array.

For example:

```text
[1, 3, 5, 7, 9]
```

But here, we are not searching for a book or page value.

Instead, we are searching for:

```text
the minimum possible maximum pages
```

So the search space is the **range of possible answers**.

---

# 5. Binary Search on Answer

Suppose:

```text
arr = [2, 1, 3, 4]
```

The total number of pages is:

```text
2 + 1 + 3 + 4 = 10
```

The answer must lie somewhere between:

```text
0 → 10
```

For a candidate answer such as:

```text
6
```

we ask:

> Can we allocate all books to the students such that no student receives more than 6 pages?

If yes:

```text
6 is a valid answer
```

But we want the **minimum** valid answer, so we try smaller values.

If no:

```text
6 is not possible
```

so we need a larger maximum.

This gives us the binary-search decision:

```text
Candidate works
      ↓
Try smaller answer
      ↓
end = mid - 1
```

and:

```text
Candidate doesn't work
      ↓
Need larger answer
      ↓
start = mid + 1
```

---

# 6. Search Space

The simplest search range is:

```cpp
int start = 0;
int end = sum;
```

where:

- `start` = smallest candidate maximum
- `end` = total pages

For:

```text
[2, 1, 3, 4]
```

we have:

```text
start = 0
end = 10
```

### Better Lower Bound

A tighter lower bound is the largest individual book.

For:

```text
[2, 1, 3, 4]
```

the largest book contains `4` pages.

Therefore, the answer can never be less than `4`.

So we can use:

```text
start = max(arr)
end = sum(arr)
```

This reduces the search range, although it does not change the Big-O complexity.

---

# 7. The Most Important Part: `isValid()`

Binary search alone cannot solve the problem.

For every candidate `mid`, we need a way to answer:

> Is it possible to allocate the books using `mid` as the maximum allowed pages per student?

This is what the `isValid()` function does.

It uses a **greedy approach**.

---

# 8. Greedy Allocation

Suppose:

```text
arr = [2, 1, 3, 4]
maxAllowedPages = 6
M = 2
```

Start with:

```text
Student 1
pages = 0
```

### Book 1 → 2 pages

```text
pages + 2 = 2
```

Since:

```text
2 <= 6
```

give it to Student 1.

```text
Student 1 → [2]
pages = 2
```

### Book 2 → 1 page

```text
2 + 1 = 3
```

Still within the limit.

```text
Student 1 → [2, 1]
pages = 3
```

### Book 3 → 3 pages

```text
3 + 3 = 6
```

Still valid.

```text
Student 1 → [2, 1, 3]
pages = 6
```

### Book 4 → 4 pages

```text
6 + 4 = 10
```

This exceeds the limit of `6`.

So we start a new student:

```text
Student 2 → [4]
pages = 4
```

Final allocation:

```text
Student 1 → [2, 1, 3] = 6
Student 2 → [4]       = 4
```

Students required:

```text
2
```

We have:

```text
2 students available
```

Therefore, `6` is valid.

---

# 9. Why Greedy Works

For a fixed maximum page limit, we want to determine whether the books can be allocated using at most `M` students.

The greedy strategy gives as many consecutive books as possible to the current student without exceeding the limit.

When the next book would exceed the limit, there is no choice:

```text
Current student cannot take this book.
```

Because the allocation must remain contiguous, we must start the next student.

This gives the **minimum number of students required** for that particular maximum page limit.

Therefore:

```text
required students <= M
```

means the candidate limit is feasible.

---

# 10. `isValid()` Logic

The basic logic is:

```cpp
students = 1
pages = 0
```

For every book:

```text
If one book itself > maxAllowedPages
    → impossible

Otherwise:

If pages + currentBook <= maxAllowedPages
    → give book to current student

Else
    → start a new student
```

At the end:

```text
students <= M
    → valid

students > M
    → invalid
```

---

# 11. Why `arr[i] > maxAllowedPages` Matters

Consider:

```text
arr = [2, 8, 3]
maxAllowedPages = 6
```

The book containing `8` pages cannot be given to any student because:

```text
8 > 6
```

No matter how we divide the other books, this candidate answer is impossible.

Therefore:

```cpp
if (arr[i] > maxAllowedPages)
    return false;
```

---

# 12. Binary Search Decision

Now combine binary search with `isValid()`.

For every `mid`:

```text
             mid
              ↓
        Is allocation valid?
          /           \
        YES            NO
         ↓              ↓
   Store answer      Need more pages
   Try smaller       Search right
         ↓              ↓
   end = mid - 1   start = mid + 1
```

This works because feasibility is **monotonic**.

---

# 13. Monotonicity

Suppose the candidate maximum page limits behave like this:

```text
0  1  2  3  4  5  6  7  8  9  10
×  ×  ×  ×  ×  ×  ✓  ✓  ✓  ✓  ✓
```

If `6` pages is enough to make a valid allocation, then allowing `7`, `8`, `9`, or `10` pages will also be enough.

Therefore:

```text
Invalid → Invalid → Invalid → Valid → Valid → Valid
```

This **false → true** pattern is exactly what makes binary search possible.

---

# 14. Complete Dry Run

Given:

```text
arr = [2, 1, 3, 4]
M = 2
```

Total:

```text
sum = 10
```

Search:

```text
start = 0
end = 10
```

### Iteration 1

```text
mid = 5
```

Try maximum `5`.

Allocation:

```text
Student 1 → [2, 1] = 3
Student 2 → [3]    = 3
```

Book `4` would require:

```text
3 + 4 > 5
```

so we need another student.

Required:

```text
3 students
```

But only `2` are available.

Therefore:

```text
5 = INVALID
```

Search right:

```text
start = 6
```

---

### Iteration 2

```text
start = 6
end = 10

mid = 8
```

Try maximum `8`.

Allocation:

```text
Student 1 → [2, 1, 3] = 6
Student 2 → [4]       = 4
```

Required:

```text
2 students
```

Valid.

Store:

```text
ans = 8
```

Try smaller:

```text
end = 7
```

---

### Iteration 3

```text
start = 6
end = 7

mid = 6
```

Try maximum `6`.

Allocation:

```text
Student 1 → [2, 1, 3] = 6
Student 2 → [4]       = 4
```

Valid.

```text
ans = 6
```

Try smaller:

```text
end = 5
```

---

### Stop

Now:

```text
start = 6
end = 5
```

Since:

```text
start > end
```

binary search ends.

Final answer:

```text
6
```

---

# 15. Why We Store `ans`

When `mid` is valid:

```cpp
ans = mid;
```

We cannot immediately return it because there might be a smaller valid answer.

For example:

```text
mid = 8 → valid
```

We store `8`, then search:

```text
0 → 7
```

If `6` is also valid:

```text
ans = 6
```

Therefore, `ans` eventually contains the **smallest valid maximum**.

---

# 16. Complete Code

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Checks whether it is possible to allocate all books to M students such that no student gets more than maxAllowedPages pages.
// Time Complexity: O(N)    |   Space Complexity: O(1)
bool isValid(vector<int> &arr, int N, int M, int maxAllowedPages)
{
    int students = 1; // Start with the first student
    int pages = 0;    // Pages currently allocated to the student

    for (int i = 0; i < N; i++)
    {
        // If a single book has more pages than the allowed limit, this allocation is impossible.
        if (arr[i] > maxAllowedPages)
            return false;

        // Try to give the current book to the current student without exceeding the allowed page limit.
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            // Current student cannot take this book, so allocate it to the next student.
            students++;
            pages = arr[i];
        }
    }

    // If we need more than M students, this maximum page limit is not possible. If students <= M, the allocation is possible.
    return students > M ? false : true;
}

// Finds the minimum possible maximum number of pages that can be allocated to any student.
// Time Complexity: O(N log(sum))   |   Space Complexity: O(1)
int allocateBooks(vector<int> &arr, int N, int M)
{
    if (M > N)
        return -1;

    // Calculate the total number of pages. This represents the maximum possible answer: one student could theoretically receive all books.
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    int ans = -1;

    // We are binary-searching the ANSWER, not the array. start = 0  -> smallest possible candidate in our current range, end = sum  -> largest possible candidate. Possible answer lies somewhere between 0 and total pages.
    int start = 0, end = sum;

    // Binary Search on Answer At every iteration: mid = candidate maximum pages per student Then we check whether 'mid' is a valid allocation.
    // Number of iterations: O(log(sum))
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check whether we can allocate all books with 'mid' as the maximum pages per student. isValid() takes O(N).
        if (isValid(arr, N, M, mid))
        {
            // 'mid' is a valid answer. Store it because we want the MINIMUM possible answer.
            ans = mid;
            // Try to find an even smaller valid answer.
            end = mid - 1;
        }
        else
        {
            // 'mid' is not possible. We need to allow each student to receive more pages.
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // N = number of books  |   M = number of students
    vector<int> arr = {2, 1, 3, 4};
    int N = 4;
    int M = 2;
    cout << allocateBooks(arr, N, M) << endl;
    return 0;
}
```

---

# 17. Complexity Analysis

## `isValid()`

We traverse all `N` books once.

```text
Time = O(N)
Space = O(1)
```

## Calculating total pages

We traverse the array once:

```text
Time = O(N)
```

## Binary Search

The search range is from `0` to `sum`.

Binary search takes:

```text
O(log(sum))
```

iterations.

Each iteration calls:

```text
isValid()
```

which takes:

```text
O(N)
```

Therefore:

```text
O(N) × O(log(sum))
```

### Final Time Complexity

$$O(N \log(\text{sum}))$$

where `sum` is the total number of pages.

### Final Space Complexity

Only a constant number of variables are used.

$$O(1)$$

---

# 18. Pattern to Remember

This problem combines two important DSA techniques:

## Binary Search on Answer

Instead of searching an array:

```text
Search possible answers
```

## Greedy Validation

For each candidate answer:

```text
Can this answer satisfy the constraints?
```

The overall pattern is:

```text
Possible Answer
      ↓
Binary Search
      ↓
Candidate Maximum
      ↓
Greedy Validation
      ↓
Valid?
  ↙       ↘
YES       NO
 ↓         ↓
Smaller   Larger
```

---

# 19. How to Recognize This Pattern

Look for problems that ask:

- Minimize the maximum
- Find the minimum possible maximum
- Maximize the minimum
- Find the largest minimum possible value
- Split/allocate items under a limit
- Check whether a candidate limit is feasible

A useful question to ask yourself is:

> "If someone gives me a candidate answer, can I efficiently check whether it is possible?"

If the answer is yes, and feasibility is monotonic, **Binary Search on Answer** is a strong candidate.

---

# 20. Key Takeaways

1. We are **not** binary-searching the books.
2. We are binary-searching the **answer**.
3. The answer represents the maximum pages any student is allowed to receive.
4. `isValid()` checks whether that maximum is feasible.
5. The validation uses a greedy contiguous allocation.
6. If the candidate works, try a smaller value.
7. If the candidate fails, try a larger value.
8. Feasibility has a monotonic pattern:

```text
False False False True True True
```

9. Final complexity:

```text
Time  = O(N log(sum))
Space = O(1)
```

10. The core pattern is:

```text
Binary Search on Answer + Greedy Validation
```
