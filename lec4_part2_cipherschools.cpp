#include <iostream>

int main() {
    int marks;
    std::cout << "Enter the marks: ";
    std::cin >> marks;

    if (marks >= 90 && marks <= 100) {
        std::cout << "Grade: A" << std::endl;
    }
    else if (marks >= 80 && marks < 90) {
        std::cout << "Grade: B" << std::endl;
    }
    else if (marks >= 70 && marks < 80) {
        std::cout << "Grade: C" << std::endl;
    }
    else if (marks >= 60 && marks < 70) {
        std::cout << "Grade: D" << std::endl;
    }
    else if (marks >= 0 && marks < 60) {
        std::cout << "Grade: F" << std::endl;
    }
    else {
        std::cout << "Invalid marks" << std::endl;
    }

    return 0;
}


#include <iostream>

int main() {
    int marks;
    std::cout << "Enter the marks: ";
    std::cin >> marks;

    int grade;

    if (marks >= 0 && marks <= 100) {
        grade = marks / 10;
        switch (grade) {
            case 10:
            case 9:
                std::cout << "Grade: A" << std::endl;
                break;
            case 8:
                std::cout << "Grade: B" << std::endl;
                break;
            case 7:
                std::cout << "Grade: C" << std::endl;
                break;
            case 6:
                std::cout << "Grade: D" << std::endl;
                break;
            default:
                std::cout << "Grade: F" << std::endl;
                break;
        }
    }
    else {
        std::cout << "Invalid marks" << std::endl;
    }

    return 0;
}

