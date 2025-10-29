#include <bits/stdc++.h>
using namespace std;

// 4
// D
// C D
// B C D
// A B C D

int main() {
  int n = 0;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    char ch = 'A' + n - i;
    while (j <= i) {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}