# Algorithms in C++

A collection of 12 standalone C++ programs exploring searching and sorting algorithms, written as coursework.

Each source file contains its own `main()` function and can be compiled separately. The original implementations, comments and console prompts are preserved; most comments and prompts are in Latvian.

## Searching

| Algorithm | Source | Focus |
| --- | --- | --- |
| Binary search | [binary_search.cpp](searching/binary_search.cpp) | Searching a sorted array by halving the search interval |
| Interpolation search | [interpolation_search.cpp](searching/interpolation_search.cpp) | Estimating a position in a sorted numeric array |
| Linear search | [linear_search.cpp](searching/linear_search.cpp) | Checking array elements sequentially |
| Sentinel linear search | [sentinel_linear_search.cpp](searching/sentinel_linear_search.cpp) | Using a sentinel to end the search |
| Naive string search | [naive_string_search.cpp](searching/naive_string_search.cpp) | Comparing a pattern with consecutive positions in a text |
| Rabin–Karp | [rabin_karp.cpp](searching/rabin_karp.cpp) | Searching with a rolling character-sum hash |

## Sorting

| Algorithm | Source | Focus |
| --- | --- | --- |
| Bubble sort | [bubble_sort.cpp](sorting/bubble_sort.cpp) | Swapping adjacent elements |
| Insertion sort | [insertion_sort.cpp](sorting/insertion_sort.cpp) | Moving elements into a sorted prefix |
| Quick sort | [quick_sort.cpp](sorting/quick_sort.cpp) | Partitioning an array around a pivot |
| Selection sort | [selection_sort.cpp](sorting/selection_sort.cpp) | Selecting the smallest remaining element |
| Cocktail shaker sort | [cocktail_shaker_sort.cpp](sorting/cocktail_shaker_sort.cpp) | Making alternating forward and backward passes |
| Shell sort | [shell_sort.cpp](sorting/shell_sort.cpp) | Comparing elements with decreasing gaps |

## Build and run an example

You need a C++ compiler, such as GCC (`g++`) or Clang (`clang++`).

From the repository root, compile and run the quick sort example:

```bash
mkdir -p build
g++ -std=c++17 sorting/quick_sort.cpp -o build/quick_sort
./build/quick_sort
```

This example uses a predefined array and prints the sorting steps and final result. On Windows, use `build/quick_sort.exe` as the output path and run that executable.

Compile one source file at a time: the programs have separate entry points. Other examples request input through the console. Binary and interpolation search expect values in ascending order. Some original examples include the Windows-specific `system("pause>nul")` command.

## Repository layout

| Path | Contents |
| --- | --- |
| [searching/](searching/) | Six array and string searching examples |
| [sorting/](sorting/) | Six sorting examples |
| [.gitignore](.gitignore) | Ignore rules for local metadata and build output |

The source files are retained as original coursework rather than maintained as a reusable algorithm library.
