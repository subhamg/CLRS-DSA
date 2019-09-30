## Selection Sort Pseudocode

Sort a sequence of n numbers in increasing order.

```
SELECTION_SORT(A)
    n = A.length
    for i = 1 to n-1
        min = i
        for j = i+1 to n
            if A[min] > A[j]
                min = j
        swap(A[i],A[min])
    return A
```
