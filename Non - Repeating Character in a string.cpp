#include <iostream>
#include <string>

using namespace std;

void findNonRepeatingChars(const string& str) {
    cout << "Non-repeating characters: ";

    for (int i = 0; i < str.length(); i++) {
        int j;
        for (j = 0; j < str.length(); j++) {
            if (i != j && str[i] == str[j]) {
                break;
            }
        }
        if (j == str.length()) {
            cout << str[i] << " ";
            
        }
    }

    cout << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    findNonRepeatingChars(input);

    return 0;
}