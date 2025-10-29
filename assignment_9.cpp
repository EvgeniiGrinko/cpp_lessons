#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>

using namespace std;

bool isValidDouble(const string& s) {
    // Проверяем, содержит ли строка '.' или 'e'/'E'
    if (s.find('.') == string::npos && s.find('e') == string::npos && s.find('E') == string::npos)
        return false;

    // Проверяем, можно ли преобразовать в double корректно
    istringstream iss(s);
    double val;
    char c;
    if (!(iss >> val))
        return false;
    if (iss >> c) // Проверка, нет ли лишних символов после числа
        return false;
    return true;
}

/**
 * Закрыляне на десетично число
 * Програмата чете едно число с плаваща запетая х и извежда закрыленото му цяло число.
 */
int main() {
    string input;
    double x;
    cout << "Въведете число с плаваща запетая: ";
    while (true) {
        getline(cin, input);
        if (isValidDouble(input)) {
            x = stod(input);
            break;
        } else {
            cout << "Невалиден вход. Моля, въведете число с плаваща запетая (не цели числа): ";
        }
    }
    int rounded = round(x);
    cout << "Закръглено цяло число: " << rounded << endl;
    return 0;
}
