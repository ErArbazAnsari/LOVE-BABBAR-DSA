#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 100;
    int sum = 0;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << "sum is: " << sum << endl;
    return 0;
}