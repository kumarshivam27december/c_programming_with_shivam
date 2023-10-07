#include <iostream>
using namespace std;

int main() {
    int n = 1;

    // Using a do-while loop
    cout << "Using do-while loop:" << endl;
    do {
        cout << "Iteration: " << n << endl;
        n++;
    } while (n <= 5);

    // Reset the value of n
    n = 1;

    // Using a while loop
    cout << "Using while loop:" << endl;
    while (n <= 5) {
        cout << "Iteration: " << n << endl;
        n++;
    }

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "12345";
    bool loggedIn = false;

    // Using while loop
    while (!loggedIn) {
        cout << "Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Login successful!" << endl;
            loggedIn = true;
        } else {
            cout << "Incorrect password. Please try again." << endl;
        }
    }

    // Using do while loop
    loggedIn = false;
    do {
        cout << "Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Login successful!" << endl;
            loggedIn = true;
        } else {
            cout << "Incorrect password. Please try again." << endl;
        }
    } while (!loggedIn);

    return 0;
}
