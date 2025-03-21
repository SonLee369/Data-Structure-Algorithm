#include <bits/stdc++.h>
using namespace std;

void Recusive(int n)
{
    // base case
    if (n < 1)
        return;

    if (n > 1)
        cout << " ";
    Recusive(n - 1);
}

int main()
{
    int n;
    cin >> n;
    Recusive(n);
}