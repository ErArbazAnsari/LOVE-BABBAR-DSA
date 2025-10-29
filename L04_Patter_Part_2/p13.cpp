#include <bits/stdc++.h>
using namespace std;

// 4
// A B C D
// E F G H
// I J K L
// M N O P

int main() {
  //   int count = 0;
  int i = 1, n;
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      //   char ch = 'A' + count;
      //   cout << ch << " ";
      //   count++, j++;
      char ch = i + j - 2 + 'A';
      cout << ch << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}