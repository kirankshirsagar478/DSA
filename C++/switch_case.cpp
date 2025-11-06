#include <bits/stdc++.h>   // Includes all standard libraries
using namespace std;

/*
Take the day number and print the corresponding day:
for 1 print Monday,
for 2 print Tuesday,
and so on till 7 print Sunday.
*/

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    // Switch case to match day number with weekday
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day number! Please enter between 1 and 7." << endl;
    }

    return 0;
}
