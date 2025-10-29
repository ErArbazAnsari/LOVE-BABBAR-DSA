#include <bits/stdc++.h>
using namespace std;

// 8
//        *
//       **
//      ***
//     ****
//    *****
//   ******
//  *******
// ********

int main() {
  int n = 0;
  cin >> n;

  int i = 1;
  while (i <= n) {
    // space
    int space = n - i;
    while (space) {
      cout << " ";
      space--;
    }
    // *
    int j = 1;
    while (j <= i) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}