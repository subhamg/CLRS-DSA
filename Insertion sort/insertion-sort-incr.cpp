#include <bits/stdc++.h>
#include <array>

using namespace std;

void insertionSort(int A[], int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}

int main()
{
    int n = 6;
    int A[] = {31, 41, 59, 26, 41, 58};
    insertionSort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ' ';
    }
    return 0;
}