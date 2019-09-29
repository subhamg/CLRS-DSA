#include <bits/stdc++.h>
#include <array>

using namespace std;

int linearSearch(int A[], int v)
{
    for (int i = 0; i < sizeof(A); i++)
    {
        if (v == A[i])
        {
            return i;
        }
    }
}

int main()
{
    int v = 26;
    int A[6] = {31, 41, 59, 26, 41, 58};
    cout << linearSearch(A, v);
    return 0;
}