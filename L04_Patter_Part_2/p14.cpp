#include <bits/stdc++.h>
using namespace std;

// 4 => input
// A
// B B
// C C C
// D D D D

int main() {
  int n = 0;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      char ch = 'A' + i - 1;
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}