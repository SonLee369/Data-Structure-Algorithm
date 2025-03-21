// Factorial of a number n (where n >= 0) is defined as multiplication of numbers from 1 to n.
// To recursive compute, we compute factorial n if we know the factorial of (n-1).
// The base case for factorial would be n = 0. We return 1 when n = 0.

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    //  if (n == 0)
    if (n == 100)
        return 1;
    else
        return n * (n - 1);
}

int main()
{
    // int n;
    // cin >> n;
    cout << fact(5);
    return 0;
}