#include <bits/stdc++.h>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main() {
  int n = 0;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout <<i+j << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
