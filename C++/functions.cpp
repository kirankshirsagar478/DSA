#include <iostream>
using namespace std;

// -----------------------------
// 1️⃣ Non-parameterized void function
// Does not return anything
// -----------------------------
void greet() {
    cout << "Hello! This is a non-parameterized void function.\n";
}

// -----------------------------
// 2️⃣ Parameterized void function
// Takes input but does not return anything
// -----------------------------
void printSquare(int x) {
    cout << "Square of " << x << " is: " << x * x << endl;
}

// -----------------------------
// 3️⃣ Parameterized int-return function
// Takes input and returns output
// -----------------------------
int add(int a, int b) {
    return a + b;
}

// -----------------------------
// 4️⃣ Non-parameterized int-return function
// Does not take input but returns something
// -----------------------------
int giveMeNumber() {
    return 100;
}

// -----------------------------
// 5️⃣ Pass by value example
// Changes remain inside function only
// -----------------------------
void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue function: x = " << x << endl;
}

// -----------------------------
// 6️⃣ Pass by reference example
// Changes reflect in main() also
// -----------------------------
void passByReference(int &x) {
    x = x + 10;
    cout << "Inside passByReference function: x = " << x << endl;
}

// -----------------------------
// 7️⃣ Array always passed by reference
// You don't need & for arrays
// -----------------------------
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Modify array (reflects in main)
    arr[0] = 999;
}

int main() {

    // Function examples
    greet(); // Call void non-parameterized

    printSquare(5); // Call parameterized void

    cout << "Addition result: " << add(10, 20) << endl; // Parameterized int-return function

    cout << "giveMeNumber returned: " << giveMeNumber() << endl; // Non-parameterized int-return

    // Pass by value example
    int a = 10;
    cout << "\nBefore passByValue: a = " << a << endl;
    passByValue(a);
    cout << "After passByValue: a = " << a << " (unchanged)\n";

    // Pass by reference example
    int b = 10;
    cout << "\nBefore passByReference: b = " << b << endl;
    passByReference(b);
    cout << "After passByReference: b = " << b << " (changed)\n";

    // Array passing example
    int arr[3] = {1, 2, 3};
    cout << "\nBefore printArray: arr[0] = " << arr[0] << endl;
    printArray(arr, 3);
    cout << "After printArray: arr[0] = " << arr[0] << " (changed due to pass-by-reference behavior)\n";

    return 0;
}
