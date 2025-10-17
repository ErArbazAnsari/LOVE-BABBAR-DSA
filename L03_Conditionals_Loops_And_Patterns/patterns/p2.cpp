#include <bits/stdc++.h>
using namespace std;

// 1 1 1
// 2 2 2
// 3 3 3

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
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}