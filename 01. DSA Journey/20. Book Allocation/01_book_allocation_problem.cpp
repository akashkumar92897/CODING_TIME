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

/*
-------------------------------------------------------------------------
TIME COMPLEXITY ANALYSIS
-------------------------------------------------------------------------
1. isValid(), We traverse all N books once. Time = O(N)

2. Calculate total pages, We traverse all N books once. Time = O(N)

3. Binary Search on Answer, Search range = 0 to sum of all pages.
   Number of binary-search iterations = O(log(sum))
   In every iteration, we call isValid(), which takes O(N).
   
   Therefore: Time = O(N * log(sum))

FINAL TIME COMPLEXITY: O(N log(sum))


-------------------------------------------------------------------------
SPACE COMPLEXITY
-------------------------------------------------------------------------
We only use a few variables: students, pages, sum, ans, start, end, mid

No extra array or data structure is created.
FINAL SPACE COMPLEXITY: O(1)

-------------------------------------------------------------------------
PATTERN:
Binary Search on Answer    +   Greedy Validation
We binary-search the possible answer and use
isValid() to check whether that answer is feasible.
-------------------------------------------------------------------------
*/