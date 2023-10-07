#include <iostream>
using namespace std;

int main() {
    int i = 0;

    // Using pre-increment operator in a loop
    cout << "Using pre-increment operator:" << endl;
    while (++i <= 5) {
        cout << "Current value of i: " << i << endl;
    }

    cout << endl;

    i = 0;

    // Using post-increment operator in a loop
    cout << "Using post-increment operator:" << endl;
    while (i++ < 5) {
        cout << "Current value of i: " << i << endl;
    }

    return 0;
}
