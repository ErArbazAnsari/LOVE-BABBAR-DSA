#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a and b: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is bigger" << endl;
    }
    else
    {
        cout << "b is bigger" << endl;
    }
    return 0;
}