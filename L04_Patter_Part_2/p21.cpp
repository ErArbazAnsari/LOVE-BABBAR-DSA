#include <iostream>
using namespace std;

//    1
//   121
//  12321
// 1234321


int main(){
    int n;
    cin >>n;
    int i = 1;
    while(i<=n){
        // spaces
        int j=n-i;
        while(j){
            cout << " ";
            j--;
        }
        // numbers
        int k=1;
        while(k<=i){
            cout << k;
            k++;
        }
        // reverse numbers
        int l=i-1;
        while(l){
            cout << l;
            l--;
        }
        cout << endl;
        i++;
    }
    return 0;
}