// WAP that demonstrates the basic class program to get department ,name and salary of an employee.
#include <iostream>
#include <string>
using namespace std;

// Define the Employee class
class Employee {
private:
    string department;
    string name;
    double salary;

public:
    // Constructor to initialize the Employee object
    Employee(string dept, string empName, double empSalary) {
        department = dept;
        name = empName;
        salary = empSalary;
    }

    // Function to display employee information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp1("Engineering", "Ankit Vishwakarma", 50000.0);

    // Display information about the employee
    emp1.displayInfo();

    return 0;
}
