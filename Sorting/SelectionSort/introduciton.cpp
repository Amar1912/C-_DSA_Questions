/*
==========================================
        SELECTION SORT - introduction.cpp
==========================================

Definition:
Selection Sort is a comparison-based sorting
algorithm that repeatedly selects the smallest
element from the unsorted part of the array
and places it at its correct position.

Working:
1. Assume the current element is the minimum.
2. Search the remaining array.
3. Find the smallest element.
4. Swap it with the current position.
5. Repeat for all positions.

Example:
Before:
64 25 12 22 11

Pass 1:
11 25 12 22 64

Pass 2:
11 12 25 22 64

Pass 3:
11 12 22 25 64

Sorted:
11 12 22 25 64

Algorithm:
Start

↓

Take an array

↓

For each position i

    Assume arr[i] is minimum

    Search remaining elements

    Update minimum index

    Swap minimum element with arr[i]

↓

Repeat until array is sorted

↓

End

Key Variable:
int minIndex = i;

Meaning:
Assume the current element is the smallest.
If a smaller element is found, update minIndex.

Important Points:
• Finds the minimum element in every pass.
• Performs only one swap per pass.
• Works in-place (no extra array).
• Easy to understand and implement.

Advantages:
✔ Simple algorithm
✔ Less number of swaps
✔ No extra memory required

Disadvantages:
✘ Slow for large arrays
✘ Always performs O(n²) comparisons
✘ Not Stable (basic implementation)

Time Complexity:
Best Case    : O(n²)
Average Case : O(n²)
Worst Case   : O(n²)

Space Complexity:
O(1)

Stable?
❌ No

In-place?
✔ Yes

Comparison-Based?
✔ Yes

Bubble Sort vs Selection Sort

Bubble Sort:
• Compares adjacent elements.
• Many swaps.
• Largest element moves to the end.

Selection Sort:
• Finds the smallest element.
• One swap per pass.
• Smallest element moves to the beginning.

Interview Questions:
1. Why is it called Selection Sort?
   → Because it selects the minimum element in every pass.

2. Why do we use minIndex?
   → To store the index of the smallest element found.

3. How many swaps occur?
   → Maximum (n - 1) swaps.

4. Is Selection Sort stable?
   → No.

5. Is Selection Sort in-place?
   → Yes.

TCS NQT Focus:
✔ Ascending Selection Sort
✔ Descending Selection Sort
✔ Count Comparisons
✔ Count Swaps
✔ Find Maximum using Selection Sort
✔ Dry Run Questions

==========================================
*/