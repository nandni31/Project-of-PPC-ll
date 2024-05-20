// WAP which should work like a strlen function using UDF. 
#include <iostream>
using namespace std;

// User-defined function to calculate string length
int stringLength(const char* str) {
    int length = 0;
    // Loop through the string until the null terminator is encountered
    while (*str != '\0') {
        length++;
        str++; // Move to the next character
    }
    return length;
}

int main() {
    // Declare and initialize a string
    const char* str = "Hello, World!";

    // Calculate the length of the string using the user-defined function
    int length = stringLength(str);

    // Display the length of the string
    cout << "Length of the string: " << length << endl;

    return 0;
}
