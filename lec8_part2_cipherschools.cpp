#include <iostream>

using namespace std;

int sumOfTwoElements(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    int result = sumOfTwoElements(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
}
