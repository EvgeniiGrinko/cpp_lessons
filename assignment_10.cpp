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
 * Намиране на абсолютна разлика
 * Програмата чете две цели числа а и b и извежда абсолютната стойност на тяхната разлика.
 */
int main() {
    int a, b;
    string input;
    string input2;

    cout << "Въведете първото цяло число: ";
    while (true) {
        getline(cin, input);
        if (isInteger(input)) {
            try {
                a = stoi(input);
                break;
            } catch (...) {
                cout << "Невалиден вход. Моля, въведете цяло число: ";
            }
        } else {
            cout << "Невалиден вход. Моля, въведете цяло число: ";
        }
    }

    cout << "Въведете второ цяло число: ";
    while (true) {
        getline(cin, input2);
        if (isInteger(input2)) {
            try {
                b = stoi(input2);
                break;
            } catch (...) {
                cout << "Невалиден вход. Моля, въведете цяло число: ";
            }
        } else {
            cout << "Невалиден вход. Моля, въведете цяло число: ";
        }
    }

    int abs_diff = abs(a - b);
    cout << "Абсолютната стойност на тяхната разлика: " << abs_diff << endl;

    return 0;
}
