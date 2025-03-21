#include <iostream>
using namespace std;

int N, K;
int X[100]; // Mảng lưu tập con hiện tại

void Result()
{
    for (int i = 1; i <= K; i++)
        cout << X[i] << " ";
    cout << endl;
}

void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= N - K + i; j++)
    {
        X[i] = j;
        //   cout << " i hien tai: " << i;
        //  cout << " & j hien tai: " << j << endl;
        if (i == K)
            Result(); // In ra kết quả khi đủ K phần tử
        else
            Try(i + 1); // Gọi đệ quy để chọn phần tử tiếp theo
    }
}

int main()
{
    cout << "Nhap N va K: ";
    cin >> N >> K;

    X[0] = 0; // Giá trị ban đầu để đảm bảo X[1] bắt đầu từ 1
    Try(1);

    return 0;
}