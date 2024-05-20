// WAP to create structure of book which contains book title ,author name ,publication and price as its members and displays book records for n books
#include <iostream>
#include <string>
using namespace std;

// Define a structure for a book
struct Book {
    string title;
    string author;
    string publication;
    float price;
};

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    // Create an array of Book structures to store information for n books
    Book books[n];

    // Input details for each book
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "Title: ";
        cin.ignore(); // To clear the newline character left in the buffer
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Publication: ";
        getline(cin, books[i].publication);
        cout << "Price: ";
        cin >> books[i].price;
    }

    // Display records for all the books
    cout << "\nBook Records:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Book " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Publication: " << books[i].publication << endl;
        cout << "Price: $" << books[i].price << endl;
        cout << endl;
    }

    return 0;
}
