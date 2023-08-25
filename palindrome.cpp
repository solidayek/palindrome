
#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s) {
    if (s.length() <= 1) {
        return true;
    }

    if (s[0] == s[s.length() - 1]) {
        string substring = s.substr(1, s.length() - 2);
        return is_palindrome(substring);
    } else {
        return false;
    }
}

int main() {
   string name = "Soliday Ek";
    string date = "May 6, 2023";
    string title = "Palindrome Project";

    cout << "======================================" << endl;
    cout << "|                                    |" << endl;
    cout << "|          " << title << "          |" << endl;
    cout << "|                                    |" << endl;
    cout << "|            Created by:             |" << endl;
    cout << "|              " << name << "               |" << endl;
    cout << "|                                    |" << endl;
    cout << "|             " << date << "             |" << endl;
    cout << "|                                    |" << endl;
    cout << "======================================" << endl;
    string s;
    char choice;

    cout << "Palindrome Checker\n\n";

    do {
        cout << "Enter a string: ";
        getline(cin, s);

        if (is_palindrome(s)) {
            cout << "\"" << s << "\" is a palindrome.\n";
        } else {
            cout << "\"" << s << "\" is not a palindrome.\n";
        }

        cout << "\nDo you want to check another palindrome? (y/n): ";
        cin >> choice;
        cin.ignore(); // Ignore any remaining newline characters in the input buffer

        cout << "\n";

    } while (tolower(choice) == 'y');

    cout << "Thank you for using the Palindrome Checker. Goodbye!\n";

    return 0;
}
