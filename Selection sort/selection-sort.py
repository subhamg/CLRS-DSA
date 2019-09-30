def selectionSort(A):
    for i in range(len(A)-1):
        min = i
        for j in range(i+1, len(A)):
            if(A[j] < A[min]):
                min = j
        A[i], A[min] = A[min], A[i]
    return A


if __name__ == "__main__":
    A = [31, 41, 59, 26, 41, 58]
    print(selectionSort(A))
