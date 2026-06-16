#include <bits/stdc++.h>
using namespace std;

void print7(int n) {
    for (int i = 0; i < n; i++) {
        //space
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }

        //star
        for (int j = 0; j < i*2+1; j++) {
            cout << "*";
        }
        
        //space
        for (int j = 0; j < n-i-1; j++) {
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
        print7(n);
    }
}

// input:
//     1
//     5
// output:
//     *            [4,1,4]
//    ***           [3,3,3]
//   *****          [2,5,2]
//  *******         [1,7,1]
// *********        [0,9,0]

