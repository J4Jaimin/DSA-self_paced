#include <bits/stdc++.h>
using namespace std;

void printPowerSet(string s)
{
    int n = s.size();
    int psize = pow(2, n);

    for (int i = 0; i < psize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << s[j];
        }

        cout << endl;
    }
}

int main()
{
    string s;
    cin >> s;

    printPowerSet(s);
    return 0;
}