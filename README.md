# Multidimentional Array
Experiment 8


## AIM
To study and implement 2 Dimensional arrays in C++

## Software required
VS code

## Theory
A 2D array is a data structure that with a grid, where each element is identified by two indices: a row index and a column index.  

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

**Uses of 2D Arrays:**  

 * Used in applications including computer graphics, image processing.
 * Used  in scientific simulations, spreadsheets.
 * Used in mathematical representation of matrix.
   eg-
   
 | 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
| 7 | 8 | 9 |

# Algorithm

## Display the Matrices.

1. **Start**

2. **Input:**
   - Ask user to enter the number of rows (`r`).
   - Prompt user to enter the number of columns (`c`).

3. **Initialize:**
   - Create a 2D array `arr[r][c]`.

4. **Input Elements:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Ask user to enter the element at position `(i+1, j+1)`.
       - Store the entered value in `arr[i][j]`.

5. **Display Matrix:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Print `arr[i][j]` followed by a space.
     - Print a newline after each row.

6. **End**

