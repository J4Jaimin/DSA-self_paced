#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int number = 0;
    int temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        number = (number * 10) + digit;

        temp /= 10;
    }

    return (number == n);
}

int main()
{
    int n;
    cin >> n;

    isPalindrome(n) ? cout << "Yes" : cout << "No";
}