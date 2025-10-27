#include <bits/stdc++.h>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
  int count = 1;

  int n = 0;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << count << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}