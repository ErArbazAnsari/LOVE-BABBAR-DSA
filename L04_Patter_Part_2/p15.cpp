#include <bits/stdc++.h>
using namespace std;

// 4 => input
// A
// B C
// D E F
// G H I J

int main() {
  int n = 0;
  int count = 0;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      char ch = 'A' + count;
      cout << ch << " ";
      j++, count++;
    }
    cout << endl;
    i++;
  }

  return 0;
}