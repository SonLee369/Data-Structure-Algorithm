// Tìm tổng tất cả các chữ số có trong số tự nhiên k

#include <bits/stdc++.h>
using namespace std;

int Recursive(int k)
{
    // Base case
    if (k < 10)
        return k;

    return (k % 10) + Recursive(k / 10);
}

int main()
{
    int k;

    cout << "Nhap k: ";
    cin >> k;

    cout << Recursive(k) << endl;

    return 0;
}