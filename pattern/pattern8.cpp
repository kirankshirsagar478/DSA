#include <bits/stdc++.h>
using namespace std;

void print8(int n) {
    for (int i = 0; i < n; i++) {
        //space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        //star
        for (int j = 0; j < 2*n -(2*i+1); j++) {
            cout << "*";
        }
        
        //space
        for (int j = 0; j < i; j++) {
            cout << " ";
            
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print8(n);
    }
}

// input:
//     1
//     5
// output:
// *********    [0,9,0]
//  *******     [1,7,1]
//   *****      [2,5,2]
//    ***       [3,3,3]
//     *        [4,1,4]
