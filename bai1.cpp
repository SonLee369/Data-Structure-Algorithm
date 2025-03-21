#include <bits/stdc++.h>
using namespace std;

void Recusive(int n)
{
    if (n != 0)
        cout << n << " ";
    Recusive(n - 1);
}

int main()
{
    int n;
    cin >> n;
    Recusive(n);
}