#include <iostream>

using namespace std;

// Function to compare two elements
int compareElements(int a, int b) {
    if (a == b) {
        return 0; // Elements are equal
    } else if (a < b) {
        return -1; // a is less than b
    } else {
        return 1; // a is greater than b
    }
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    int comparison = compareElements(num1, num2);
    if (comparison == 0) {
        cout << "The numbers are equal." << endl;
    } else if (comparison < 0) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is greater than " << num2 << endl;
    }
    
    return 0;
}
