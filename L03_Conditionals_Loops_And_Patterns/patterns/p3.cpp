#include <bits/stdc++.h>
using namespace std;

// 1 2 3
// 1 2 3
// 1 2 3

int main()
{
    int n = 3;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}