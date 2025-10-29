#include <bits/stdc++.h>
using namespace std;

// 4 => input
// A
// B C
// C D E
// D E F G

int main() {
  int n = 0;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      char ch = 'A' + i + j - 2;
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}