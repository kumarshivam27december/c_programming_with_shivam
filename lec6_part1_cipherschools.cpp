#include <iostream>
using namespace std;

int main() {
    // Using for loop with break
    for (int i = 0; i < 5; i++) {
        cout << "Iteration for loop: " << i << endl;
        if (i == 2) {
            cout << "Breaking out of the for loop" << endl;
            break;
        }
    }

    // Using while loop with break
    int j = 0;
    while (j < 5) {
        cout << "Iteration while loop: " << j << endl;
        if (j == 3) {
            cout << "Breaking out of the while loop" << endl;
            break;
        }
        j++;
    }

    return 0;
}
