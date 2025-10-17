#include <bits/stdc++.h>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

int main()
{
    int n = 3;

    int count = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}