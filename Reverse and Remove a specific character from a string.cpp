#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);
    string reverse;
    for(int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }
    cout << "Reversed string is: " << reverse << endl;
    char ch;
    cout << "Enter the character to be removed from the given string: ";
    cin >> ch;
    string newStr;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            newStr += str[i];
        }
    }
    string newStr1;
    for (int i = 0; i < reverse.length(); i++) {
        if (reverse[i] != ch) {
            newStr1 += reverse[i];
        }
    }

    cout << "Modified string is: " << newStr << endl;
    cout << "Modified reverse string is: " << newStr1 << endl;
    return 0;
}
