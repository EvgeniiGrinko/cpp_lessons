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
 * Проверка на интервал
 * Програмата чете число x и извежда 1, ако е между 10 и 20 включително, 0 в противен случай.
 */
int main() {
    int x;
    string input;

    cout << "Въведете първото цяло число: ";

     while (true) {
        getline(cin, input);
        if (isInteger(input)) {
            try {
                x = stoi(input);
                break;
            } catch (...) {
                cout << "Невалиден вход. Моля, въведете цяло число: ";
            }
        } else {
            cout << "Невалиден вход. Моля, въведете цяло число: ";
        }
    }

    if (x >= 10 && x <= 20) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
