#include <iostream>
using namespace std;

int main() {
    // Using a for loop with break
    for (int i = 1; i <= 10; i++) {
        cout << "Iteration " << i << endl;
        if (i == 5) {
            cout << "Breaking out of the for loop" << endl;
            break;
        }
    }

    // Using a while loop with break
    int j = 1;
    while (j <= 10) {
        cout << "Iteration " << j << endl;
        if (j == 7) {
            cout << "Breaking out of the while loop" << endl;
            break;
        }
        j++;
    }

    return 0;
}
