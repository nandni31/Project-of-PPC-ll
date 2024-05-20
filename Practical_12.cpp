// WAP which accepts value of base and power from user and display its value (base^power)using UDF.
#include <iostream>
using namespace std;

// Function to calculate power of a number
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    // Input base and power from the user
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate and display the result using the power function
    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}
