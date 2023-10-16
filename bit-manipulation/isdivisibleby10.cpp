#include <bits/stdc++.h>
using namespace std;

bool isDivisibleBy10(string s)
{
    int remainder = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';

        remainder = (remainder * 2 + num) % 10;
        cout << remainder << endl;

        if (remainder == 0)
            break;
    }

    return (remainder == 0);
}

int main()
{
    string str;
    cin >> str;

    isDivisibleBy10(str) ? cout << "1" : cout << "0";
    return 0;
}