// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: WRITE A CODE TO HANDLE EXCEPTION FOR UNDERAGE FOR VOTING (EXPERIMENT: 16B)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;   // Throw exception if underage
        } else {
            cout << "Age: " << age << "\nAPPROVED" << endl;
        }
    }
    catch (int a) {
        cout << "\nERROR: Underage! (" << a << ")" << endl;
    }

    return 0;
}

// OUTPUT:

// Enter age: 21
// Age: 21
// APPROVED

// Enter age: 18
// Age: 18
// APPROVED

// Enter age: 17

// ERROR: Underage! (17)
