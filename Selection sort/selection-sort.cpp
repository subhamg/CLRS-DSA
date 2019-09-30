#include <bits/stdc++.h>
using namespace std;

void selectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int main()
{
    int n = 6;
    int A[] = {31, 41, 59, 26, 41, 58};
    selectionSort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << ' ';
    }

    return 0;
}