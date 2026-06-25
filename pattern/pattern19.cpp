#include <bits/stdc++.h>
using namespace std;

void print19(int n) {
    int initspace = 0;
    for ( int i = 0; i < n; i++ ) {
        //stars
        for ( int j = 1; j <= n-i; j++ ) {
            cout << "*";
        }
        //spaces
        for ( int j = 0; j < initspace; j++ ) {
            cout << " ";
        }
        //stars
        for ( int j = 1; j <= n-i; j++ ) {
            cout << "*";
        }
        initspace += 2;
        cout << endl;
    }

    initspace = 8;
    for ( int i = 1; i <= n; i++ ) {
        //stars
        for ( int j = 1; j <= i; j++ ) {
            cout << "*";
        }
        //spaces
        for ( int j = 0; j < initspace; j++ ) {
            cout << " ";
        }
        //stars
        for ( int j = 1; j <= i; j++ ) {
            cout << "*";
        }
        initspace -= 2;
        cout << endl;
    }
}


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print19(n);
    }


}

// input:
//     1
//     5
// output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********