# Pseudocode

#### Increasing order

Sort a sequence of n numbers in increasing order.

```
INSERTION-SORT(A)
    for j = 2 to A.length
        key = A[j]
        // Insert A[j] into the sorted sequence A[1..j-1]
        i = j - 1
        while i > 0 and A[i] > key
            A[i + 1] = A[i]
            i = i - 1
        A[i + 1] = key
    return A
```

#### Decreasing order

Sort a sequence of n numbers in decreasing order.

```
INSERTION-SORT(A)
    for j = 2 to A.length
        key = A[j]
        i = j - 1
        while i > 0 and A[i] < key
            A[i + 1] = A[i]
            i = i - 1
        A[i + 1] = key
    return A
```

#### Example 1.1

Consider the searching problem:

- **Input**: A sequence of n numbers A = [a1, a2, . . . , an] and a value v.
- **Output**: An index i such that v = A[i] or the special value NIL if v does not appear in A.

```
LINEAR-SEARCH(A,v)
    for i = 1 to A.length
        if v == A[i]
            return i
        return NIL
```

#### Example 1.2

Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B. The sum of the two integers should be stored in binary form in an (n + 1)-element array C. State the problem formally and write pseudocode for adding the two integers.

- **Input**: A and B integer Arrays of n digits, either 0 or 1, A.length == B.length == n.
- **Output**: C integer Array, C.length == n + 1 such that C' = A' + B' are the integers represented by A, B and C.

```
ADD-BINARY(A, B)
    C = Array[A.length + 1]
    carry = 0
    for i = 1 to A.length
        C[i+1] = ( A[i] + B[i] + carry )%2  // Remainder
        carry = ( A[i] + B[i] + carry )/2  // quotient
    C[1] = carry
    return C
```
