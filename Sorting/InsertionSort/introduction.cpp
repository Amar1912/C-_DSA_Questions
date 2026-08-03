/*
==========================================
        INSERTION SORT - introduction.cpp
==========================================

Definition:
Insertion Sort is a comparison-based sorting
algorithm that inserts one element at a time
into its correct position in the already
sorted part of the array.

Working:
1. Assume the first element is already sorted.
2. Pick the next element (Key).
3. Compare the Key with previous elements.
4. Shift all larger elements one position right.
5. Insert the Key into its correct position.
6. Repeat until the array is sorted.

Example:

Before:
5 3 8 1 2

Pass 1:
3 5 8 1 2

Pass 2:
3 5 8 1 2

Pass 3:
1 3 5 8 2

Pass 4:
1 2 3 5 8

Algorithm:
Start

↓

Take an array

↓

Assume first element is sorted

↓

For each remaining element

    Store current element as Key

    Compare Key with previous elements

    Shift larger elements to the right

    Insert Key into correct position

↓

Repeat until array is sorted

↓

End

Important Terms:

Key:
The current element that needs to be inserted
into the sorted part.

Shift:
Moving elements one position to the right
instead of swapping.

Sorted Part:
The left side of the array which is already sorted.

Unsorted Part:
The remaining elements that still need sorting.

Advantages:
✔ Easy to understand
✔ Stable sorting algorithm
✔ Performs well on nearly sorted arrays
✔ No extra memory required

Disadvantages:
✘ Slow for large datasets
✘ Worst case is O(n²)

Time Complexity:
Best Case    : O(n)
Average Case : O(n²)
Worst Case   : O(n²)

Space Complexity:
O(1)

Stable?
✔ Yes

In-place?
✔ Yes

Comparison-Based?
✔ Yes

Bubble vs Selection vs Insertion

Bubble Sort:
• Compare adjacent elements
• Many swaps
• Largest element moves to the end

Selection Sort:
• Find minimum element
• One swap per pass
• Smallest element moves to the beginning

Insertion Sort:
• Pick one element (Key)
• Shift larger elements
• Insert Key into correct position
• Sorted part grows from left to right

Interview Questions:

1. Why is it called Insertion Sort?
   → Because it inserts each element into
     its correct position.

2. What is the Key?
   → The current element being inserted.

3. Why do we shift instead of swapping?
   → Shifting reduces unnecessary swaps and
     makes insertion efficient.

4. Is Insertion Sort stable?
   → Yes.

5. Is Insertion Sort in-place?
   → Yes.

6. When is Insertion Sort preferred?
   → For small arrays and nearly sorted arrays.

TCS NQT Focus:
✔ Ascending Insertion Sort
✔ Descending Insertion Sort
✔ Count Comparisons
✔ Count Shifts
✔ Dry Run Questions
✔ Time Complexity Questions

==========================================
*/