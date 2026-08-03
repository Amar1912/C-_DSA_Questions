/*
==========================================
          MERGE SORT - introduction.cpp
==========================================

Definition:
Merge Sort is a Divide and Conquer sorting
algorithm that repeatedly divides the array
into smaller parts, sorts them, and finally
merges them into one sorted array.

Working:
1. Divide the array into two halves.
2. Continue dividing until each subarray
   contains only one element.
3. Merge two sorted subarrays.
4. Repeat until the complete array is sorted.

Example:

Before:
38 27 43 3 9 82 10

Step 1 (Divide):
38 27 43 | 3 9 82 10

↓

38 27 | 43 | 3 9 | 82 10

↓

38 | 27 | 43 | 3 | 9 | 82 | 10

Now every element is individually sorted.

Merge:

38 + 27
↓

27 38

82 + 10
↓

10 82

Merge all:

3 9 10 27 38 43 82

Algorithm:

Start

↓

Take an array

↓

Find middle index

↓

Divide array into Left and Right halves

↓

Recursively sort Left half

↓

Recursively sort Right half

↓

Merge both sorted halves

↓

Repeat until complete array is sorted

↓

End

Important Terms:

Divide:
Split the array into two halves.

Conquer:
Recursively sort each half.

Merge:
Combine two sorted arrays into one sorted array.

Middle Index:
Used to divide the array into two equal parts.

Recursion:
A function calling itself until the base condition is reached.

Base Condition:
If the array contains only one element,
it is already sorted.

Advantages:
✔ Very fast for large arrays
✔ Stable sorting algorithm
✔ Guaranteed O(n log n) time
✔ Suitable for linked lists and external sorting

Disadvantages:
✘ Uses extra memory
✘ Recursive implementation
✘ More complex than Bubble, Selection, and Insertion Sort

Time Complexity:

Best Case    : O(n log n)
Average Case : O(n log n)
Worst Case   : O(n log n)

Space Complexity:

O(n)

Stable?

✔ Yes

In-place?

✘ No

Comparison-Based?

✔ Yes

Technique Used:

✔ Divide and Conquer

Bubble vs Selection vs Insertion vs Merge

Bubble Sort:
• Adjacent comparisons
• Many swaps
• O(n²)

Selection Sort:
• Find minimum
• One swap per pass
• O(n²)

Insertion Sort:
• Insert Key
• Shift elements
• Best for nearly sorted arrays
• O(n²)

Merge Sort:
• Divide array
• Recursively sort
• Merge sorted halves
• O(n log n)

Interview Questions:

1. Why is it called Merge Sort?
   → Because it merges sorted subarrays.

2. Which technique does Merge Sort use?
   → Divide and Conquer.

3. Is Merge Sort stable?
   → Yes.

4. Why is Merge Sort faster than Bubble Sort?
   → Because its time complexity is O(n log n).

5. Why does Merge Sort require extra memory?
   → It uses a temporary array while merging.

6. What is the base condition in Merge Sort?
   → When the subarray contains one element.

7. Is Merge Sort in-place?
   → No.

TCS NQT Focus:

✔ Merge Two Sorted Arrays
✔ Merge Sort (Ascending)
✔ Descending Merge Sort
✔ Count Merge Operations
✔ Recursive Dry Run
✔ Time & Space Complexity
✔ Divide and Conquer Concept

==========================================
*/