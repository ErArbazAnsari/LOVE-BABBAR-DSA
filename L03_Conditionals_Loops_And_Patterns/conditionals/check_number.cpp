#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Nagative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
    return 0;
}