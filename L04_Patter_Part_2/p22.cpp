#include <bits/stdc++.h>
using namespace std;

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // first triangle
        int j=1;
        while(j<=n-i+1){
            cout << j;
            j++;
        }
        // first stars
        int k=1;
        while(k<=i-1){
            cout << "*";
            k++;
        }
        // second stars
        int l=1;
        while(l<=i-1){
            cout << "*";
            l++;
        }
        // second triangle
        int m=n-i+1;
        while(m){
            cout << m;
            m--;
        }
        cout << endl;
        i++;
    }
    return 0;
}