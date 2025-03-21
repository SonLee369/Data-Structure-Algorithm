#include <bits/stdc++.h>
using namespace std;

long long powerRecursive(int x, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    return x * powerRecursive(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x;
    cin >> n;

    if (n < 0)
    {
        cout << "end" << endl;
        return 1;
    }

    cout << "kq: " << powerRecursive(x, n) << endl;
    return 0;
}