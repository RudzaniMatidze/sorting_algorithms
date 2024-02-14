# 0x1B. C - Sorting algorithms & Big O

## Requirements
### General
- Allowed editors: `vi, vim, emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `sort.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

#### Tasks and prototypes:

| Tasks | File name | Prototypes |
| ----- | --------- | ---------- |
| `0. Bubble sort` | <ul><li>`0-bubble_sort.c`</li><li>`0-O`</li></ul> | `void bubble_sort(int *array, size_t size);` |
| `1. Insertion sort` | <ul><li>`1-insertion_sort_list.c`</li><li>`1-O`</li></ul> | `void insertion_sort_list(listint_t **list);` |
| `2. Selection sort` | <ul><li>`2-selection_sort.c`</li><li>`2-O`</li></ul> | `void selection_sort(int *array, size_t size);` |
| `3. Quick sort` | <ul><li>`3-quick_sort.c`</li><li>`3-O`</li></ul> | `void quick_sort(int *array, size_t size);` |
| `4. Shell sort - Knuth Sequence` | <ul><li>`100-shell_sort.c`</li></ul> | `void shell_sort(int *array, size_t size);` |
| `5. Cocktail shaker sort` | <ul><li>`101-cocktail_sort_list.c`</li><li>`101-O`</li></ul> | `void cocktail_sort_list(listint_t **list);` |
| `6. Counting sort` | <ul><li>`102-counting_sort.c`</li><li>`102-O`</li></ul> | `void counting_sort(int *array, size_t size);` |
| `7. Merge sort` | <ul><li>`103-merge_sort.c`</li><li>`103-O`</li></ul> | `void merge_sort(int *array, size_t size);` |
| `8. Heap sort` | <ul><li>`104-heap_sort.c`</li><li>`104-O`</li></ul> | `void heap_sort(int *array, size_t size);` |
| `9. Radix sort` | <ul><li>`105-radix_sort.c`</li></ul> | `void radix_sort(int *array, size_t size);` |
| `10. Bitonic sort` | <ul><li>`106-bitonic_sort.c`</li><li>`106-O`</li></ul> | `void bitonic_sort(int *array, size_t size);` |
| `11. Quick Sort - Hoare Partition scheme` | <ul><li>`107-quick_sort_hoare.c`</li></ul>`107-O` | `void quick_sort_hoare(int *array, size_t size);` |
| `12. Dealer` | <ul><li>`1000-sort_deck.c`</li><li>`deck.h`</li></ul> | `void sort_deck(deck_node_t **deck);` |
