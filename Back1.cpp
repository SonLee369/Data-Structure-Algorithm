// Duyệt các tập con K phần tử của 1,2,.., N

#include <bits/stdc++.h>
using namespace std;
#include <vector>

// Mảng lưu kết quả tạm thời
vector<int> subset;

// Hàm in kết quả tập con K phần tử
void printSubset()
{
    cout << "{";
    for (int i = 0; i < subset.size(); i++)
    {
        cout << subset[i];
        if (i < subset.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

// Hàm quay lui để sinh các tập con K phần tử
void backtrack(int start, int n, int k)
{
    // Base case
    if (k == 0)
    {
        printSubset();
        return;
    }

    // Xét các phần tử từ start đến n
    for (int i = start; i <= n; i++)
    {
        // Thêm phần tử hiện tại vào tập con
        subset.push_back(i);

        // Gọi đệ quy để chọn các phần tử tiếp theo
        backtrack(i + 1, n, k - 1);

        // Quay lui: loại bỏ phần tử vừa thêm để thử phần tử khác
        subset.pop_back();
    }
}

int main()
{
    int n, k;

    cout << "N: ";
    cin >> n;

    cout << "K: ";
    cin >> k;

    if (k > n || k < 0)
    {
        cout << "end" << endl;
        return 1;
    }

    cout << "Tap con " << k << " phan tu{1, 2, ..., " << n << "}:" << endl;
    backtrack(1, n, k);

    return 0;
}