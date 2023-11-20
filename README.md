* PROCJECT - Sorting algorithms & Big O

* Read or watch:
+ [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
+ [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
+ [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
+ [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is on a funny visualization of different sorting algorithms)
+ [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
+ [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)


* Learning Objectives:
+ General
	1. At least four different sorting algorithms
	2. What is the Big O notation, and how to evaluate the time complexity of an algorithm
	3. How to select the best sorting algorithm for a given input
	4. What is a stable sorting algorithm

* Requirements
+ General
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project, is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden   In the following examples, the main.c files.10. 
9. The prototypes of all your functions should be included in your header file called sort.h
10. Don’t forget to push your header file
11. All your header files should be include guarded
12. A list/array does not need to be sorted if its size is less than 2.

* Tasks:

 Bubble sort:
+ [visualization of bubble sort(Hungarian folk dance)](https://www.youtube.com/watch?v=lyZQPjUT5B4)
+ Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

+ Prototype: void bubble_sort(int \*array, size_t size);
+ You’re expected to print the array after each time you swap two elements (See example below)
+ Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
+ in the best case
+ in the average case
+ in the worst case
+ file: 0-bubble_sort.c, 0-O

==========================================================================================
1. Insertion sort
+ [Visualization of insetion sort(Romania folk dance)](https://www.youtube.com/watch?v=ROalU379l3U)
+ Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
+ Prototype: void insertion_sort_list(listint_t \*\*list);
+ You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
+ You’re expected to print the list after each time you swap two elements (See example below)
+ Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:
+ in the best case
+ in the average case
+ in the worst case
+ File: 1-insertion_sort_list.c, 1-O

==========================================================================================
2. Selection sort.
+ [Visualization of selection sort(Gypsy folk dance)](https://www.youtube.com/watch?v=Ns4TPTC8whw)
+ Write a function that sorts an array of integers in ascending order using the Selection sort algorithm
+ Prototype: void selection_sort(int \*array, size_t size);
+ You’re expected to print the array after each time you swap two elements (See example below)
+ Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:
+ in the best case
+ in the average case
+ in the worst case.
+ File: 2-selection_sort.c, 2-O

=============================================================================================
3. Quick Sort.
+ [Visualization of quick sort(Hungarian (Küküllőmenti legényes) folk dance)](https://www.youtube.com/watch?v=ywWBy6J5gz8)
+ Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
+ Prototype: void quick_sort(int \*array, size_t size);
+ You must implement the Lomuto partition scheme.
+ The pivot should always be the last element of the partition being sorted.
+ You’re expected to print the array after each time you swap two elements (See example below)
+ Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:
+ in the best case
+ in the average case
+ in the worst case
+ file: File: 3-quick_sort.c, 3-O. 
