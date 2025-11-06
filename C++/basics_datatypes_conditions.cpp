#include<bits/stdc++.h>
using namespace std;

int main() {
    // ---- Basic Data Types ----
    int age;                    // Integer type
    float height;               // Float type (single precision)
    double weight;              // Double type (double precision)
    char grade;                 // Character type
    string name;                // String type
    bool isStudent;             // Boolean type (true or false)

    // ---- Taking Input from User ----
    cout << "Enter your name: ";
    getline(cin, name);  // using getline to take full name including spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters (e.g. 1.75): ";
    cin >> height;

    cout << "Enter your weight in kilograms (e.g. 68.5): ";
    cin >> weight;

    cout << "Enter your grade (A/B/C): ";
    cin >> grade;

    cout << "Are you a student? (1 for Yes / 0 for No): ";
    cin >> isStudent;

    // ---- Output the Entered Information ----
    cout << "\n---- User Details ----\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student Status: " << (isStudent ? "Yes" : "No") << endl;

    // ---- Example of if - else if - else ----
    cout << "\n---- Conditional Example ----\n";

    if (age < 13) {
        cout << "You are a child.\n";
    } 
    else if (age >= 13 && age < 20) {
        cout << "You are a teenager.\n";
    } 
    else if (age >= 20 && age < 60) {
        cout << "You are an adult.\n";
    } 
    else {
        cout << "You are a senior citizen.\n";
    }

    // Another simple if condition example
    if (isStudent) {
        cout << "Keep studying and learning new things!\n";
    } else {
        cout << "Keep working hard in your career!\n";
    }

    return 0;  // End of program
}
