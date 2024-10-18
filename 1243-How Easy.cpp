#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;


bool isValidWord(string word) {
    if (word.back() == '.') word.pop_back();
    for (char c : word) {
        if (!isalpha(c)) return false;
    }
    return !word.empty();
}

int main() {
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string word;
        int totalLength = 0, wordCount = 0;


        while (ss >> word) {
            if (isValidWord(word)) {
                totalLength += word.length();
                wordCount++;
            }
        }


        int averageLength = (wordCount == 0) ? 0 : totalLength / wordCount;


        if (averageLength <= 3) {
            cout << 250 << endl;
        } else if (averageLength <= 5) {
            cout << 500 << endl;
        } else {
            cout << 1000 << endl;
        }
    }
    return 0;
}
