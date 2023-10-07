#include <iostream>

int main() {
    // Declare an array of integers with a fixed size of 5
    int numbers[5];

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Accessing and printing the array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
