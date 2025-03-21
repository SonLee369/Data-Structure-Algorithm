#include <bits/stdc++.h>

using namespace std;

string reverseString(const string &str)
{
    // base case
    if (str.length() <= 1)
        return str;

    char firstChar = str[0];
    string restOfString = str.substr(1);

    return reverseString(restOfString) + firstChar;
}

int main()
{
    string x;
    getline(cin, x);

    string reversed = reverseString(x);

    cout << "xau dao nguoc: " << reversed << endl;

    return 0;
}