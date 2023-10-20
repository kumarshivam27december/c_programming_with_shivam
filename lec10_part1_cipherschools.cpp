#include <iostream>

// Function declaration
void myFunction();

int main() {
  // Variable in the main scope
  int x = 10;
  
  // Output the value of x in the main scope
  std::cout << "Before calling myFunction, x = " << x << std::endl;
  
  // Call the function
  myFunction();
  
  // Output the value of x in the main scope after calling the function
  std::cout << "After calling myFunction, x = " << x << std::endl;
  
  return 0;
}

// Function definition
void myFunction() {
  // Variable in the function scope
  int x = 20;
  
  // Output the value of x in the function scope
  std::cout << "Inside myFunction, x = " << x << std::endl;
}

