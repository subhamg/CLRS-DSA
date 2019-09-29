#include <bits/stdc++.h>
using namespace std;

int *addBinary(int A[], int B[], int n)
{
    int *C = new int[n + 1];
    int carry = 0;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        C[i] = (A[i] + B[i] + carry) % 2;
        carry = (A[i] + B[i] + carry) / 2;
    }
    C[i] = carry;
    return C;
}

int main()
{
    int n = 8;
    int *C;
    int A[n] = {0, 1, 0, 1, 0, 0, 1, 1};
    int B[n] = {0, 1, 1, 1, 0, 1, 1, 0};
    C = addBinary(A, B, n);
    for (int i = 0; i < n + 1; i++)
    {
        cout << C[i] << ' ';
    }

    return 0;
}