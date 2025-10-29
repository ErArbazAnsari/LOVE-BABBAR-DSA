#include <bits/stdc++.h>
using namespace std;

// 6
// *****
//  ****
//   ***
//    **
//     *

int main() {
  int n = 0;
  cin >> n;

  int i = 1;
  while (i <= n) {
    // space
    int space = i - 1;
    while (space) {
      cout << " ";
      space--;
    }
    // *
    int j = 1;
    while (j <= n - i) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}