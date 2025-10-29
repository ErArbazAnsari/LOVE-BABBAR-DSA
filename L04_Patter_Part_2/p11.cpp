#include <bits/stdc++.h>
using namespace std;

// 5
// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E

int main() {
  const int starter = 65;
  int i = 1;
  int n = 1;
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << char(starter + i - 1) << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}