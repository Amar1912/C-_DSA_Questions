/*
===========================================================
                SEARCHING IN C++ - NOTES
===========================================================

What is Searching?
------------------
Searching is the process of finding whether a particular
element exists in a collection (array, string, etc.).
If the element is found, we can also determine its position
(index).

Example:

Array:
10 20 30 40 50

Search Key:
40

Output:
Element Found at Index 3

===========================================================
WHY DO WE USE SEARCHING?
===========================================================

1. Find an element in an array.
2. Check whether an element exists.
3. Find the position (index).
4. Count occurrences of an element.
5. Find the first or last occurrence.
6. Used in databases, applications, and competitive coding.

===========================================================
TYPES OF SEARCHING
===========================================================

1. Linear Search
2. Binary Search

===========================================================
1. LINEAR SEARCH
===========================================================

Definition:
-----------
Linear Search checks every element one by one from the
beginning until the element is found or the array ends.

Example:

Array:
10 20 30 40 50

Search:
40

Check:
10 ❌
20 ❌
30 ❌
40 ✅ Found

-----------------------------------------------------------
Algorithm
-----------------------------------------------------------

Step 1:
Start from index 0.

Step 2:
Compare each element with the key.

Step 3:
If match found,
    Print index.
    Stop searching.

Step 4:
If end of array is reached,
    Print "Element Not Found."

-----------------------------------------------------------
Time Complexity
-----------------------------------------------------------

Best Case:
O(1)
(Element found at first position)

Worst Case:
O(n)
(Element found at last position or not found)

Average Case:
O(n)

-----------------------------------------------------------
Space Complexity
-----------------------------------------------------------

O(1)

-----------------------------------------------------------
Advantages
-----------------------------------------------------------

1. Very simple.
2. Works on sorted arrays.
3. Works on unsorted arrays.
4. Easy to implement.

-----------------------------------------------------------
Disadvantages
-----------------------------------------------------------

1. Slow for large arrays.
2. Checks every element.
3. Not efficient for huge datasets.

===========================================================
2. BINARY SEARCH
===========================================================

Definition:
-----------
Binary Search repeatedly divides the search space into
two halves until the element is found.

IMPORTANT:
Binary Search works ONLY on SORTED arrays.

Example:

Array:
10 20 30 40 50 60 70

Search:
50

Middle = 40

50 > 40

Search Right Half

Middle = 60

50 < 60

Search Left Half

Found 50

-----------------------------------------------------------
Algorithm
-----------------------------------------------------------

Step 1:
Find middle element.

Step 2:
If key == middle
    Found

Step 3:
If key < middle
    Search Left Half

Step 4:
If key > middle
    Search Right Half

Repeat until found or search space becomes empty.

-----------------------------------------------------------
Time Complexity
-----------------------------------------------------------

Best Case:
O(1)

Worst Case:
O(log n)

Average Case:
O(log n)

-----------------------------------------------------------
Space Complexity
-----------------------------------------------------------

Iterative:
O(1)

Recursive:
O(log n)

-----------------------------------------------------------
Advantages
-----------------------------------------------------------

1. Very Fast.
2. Efficient for large datasets.
3. Much faster than Linear Search.

-----------------------------------------------------------
Disadvantages
-----------------------------------------------------------

1. Array must be sorted.
2. Slightly harder to implement.

===========================================================
LINEAR SEARCH vs BINARY SEARCH
===========================================================

Linear Search
-------------
Works on Sorted & Unsorted Arrays
Checks Every Element
Time Complexity: O(n)

Binary Search
-------------
Works Only on Sorted Arrays
Checks Middle Element
Time Complexity: O(log n)

===========================================================
WHEN TO USE WHICH?
===========================================================

Use Linear Search:
------------------
- Small arrays.
- Unsorted arrays.
- Simplicity is preferred.

Use Binary Search:
------------------
- Large arrays.
- Sorted arrays.
- Better performance required.

===========================================================
IMPORTANT INTERVIEW QUESTIONS
===========================================================

Q1. What is Searching?

Searching is the process of finding an element in a collection.

-----------------------------------------------------------

Q2. Name the types of Searching.

1. Linear Search
2. Binary Search

-----------------------------------------------------------

Q3. Which searching algorithm works on unsorted arrays?

Linear Search.

-----------------------------------------------------------

Q4. Which searching algorithm requires a sorted array?

Binary Search.

-----------------------------------------------------------

Q5. Which searching algorithm is faster?

Binary Search.

-----------------------------------------------------------

Q6. Why is Binary Search faster?

Because it eliminates half of the remaining search space
after every comparison.

===========================================================
KEYWORDS
===========================================================

Searching
Key
Index
Linear Search
Binary Search
Sorted Array
Unsorted Array
Middle Element
Low
High
Mid
Time Complexity
Space Complexity

===========================================================
UPCOMING QUESTIONS
===========================================================

1. Linear Search
2. Count Occurrences
3. First Occurrence
4. Last Occurrence
5. Binary Search
6. First & Last Occurrence using Binary Search
7. Count Occurrences using Binary Search

===========================================================
*/