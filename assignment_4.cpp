#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

bool isInteger(const string& s) {
    int start = 0;
    if (s.empty()) return false;
    if (s[0] == '-' || s[0] == '+') start = 1;
    if (start == 1 && s.size() == 1) return false;
    for (size_t i = start; i < s.size(); ++i) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}

/**
 * Проверка дали число е положително
 * Програмата чете цяло число п и извежда 1, ако е положително, 0 иначе.
 */
int main() {
    string input;
    int n;
    cout << "Въведете цяло число: ";
    while (true) {
        getline(cin, input);
        if (isInteger(input)) {
            try {
                n = stoi(input);
                break;
            } catch (...) {
                cout << "Невалиден вход. Моля, въведете цяло число: ";
            }
        } else {
            cout << "Невалиден вход. Моля, въведете цяло число: ";
        }
    }

    if (n > 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
