// Write a program and recurrence relation to find the Fibonacci series of n where n >= 0.
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    else
        return (fibo(n - 1) + fibo(n - 2));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << fibo(i) << " ";
    return 0;
}