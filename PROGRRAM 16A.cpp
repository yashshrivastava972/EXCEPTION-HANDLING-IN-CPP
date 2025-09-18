// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: WRITE A CODE TO HANDLE EXCEPTION CREATED BY DIVIDE ZERO ERROR (EXPERIMENT: 16A)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;
    cout << "Enter values of numbers 1 & 2: ";
    cin >> n1 >> n2;

    try {
        if (n2 == 0) {
            throw n2;  // Throwing denominator if it's 0
        } else {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }
    }
    catch (float num) {
        cout << "\nERROR: Division by " << num << endl;
    }

    return 0;
}

// OUTPUT:

// Enter values of numbers 1 & 2: 1
// 2
// Answer = 0.5

// Enter values of numbers 1 & 2: 1
// 0

// ERROR: Division by 0

// Enter values of numbers 1 & 2: 0
// 0

// ERROR: Division by 0
