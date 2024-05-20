// WAP to count number of word in a sentence.
#include <iostream>
#include <sstream>

using namespace std;

int countWords(string sentence) {
    // Initialize a stringstream with the sentence
    stringstream ss(sentence);
    string word;
    int count = 0;

    // Count words in the sentence
    while (ss >> word) {
        count++;
    }

    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = countWords(sentence);
    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
