#include <iostream>

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    // Inputting values into the array
    std::cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }

    // Accessing and printing the array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;

    // Finding the maximum and minimum elements
    int max = numbers[0];
    int min = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;

    // Searching for a specific value in the array
    int searchValue;
    std::cout << "Enter a value to search: ";
    std::cin >> searchValue;
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == searchValue) {
            found = true;
            break;
        }
    }
    if (found) {
        std::cout << "Value found in the array" << std::endl;
    } else {
        std::cout << "Value not found in the array" << std::endl;
    }

    return 0;
}
