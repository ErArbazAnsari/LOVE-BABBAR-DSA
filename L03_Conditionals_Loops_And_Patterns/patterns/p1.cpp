#include <bits/stdc++.h>
using namespace std;

// * * *
// * * *
// * * *

int main()
{
    int n;
    cout << "enter vlaue of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) // row
    {
        int j = 1;
        while (j <= n) // col
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}