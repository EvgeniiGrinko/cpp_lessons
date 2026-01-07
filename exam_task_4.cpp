#include <iostream>
#include <clocale>

using namespace std;


/*
    Условие:
    Въвежда се число N – брой пароли. За всяка парола се въвежда дължината ѝ. Валидна
    е, ако е между 6 и 20 символа.
    
    Примерен вход:
    5
    8 4 12 6 25

    Примерен изход:
    Валидни пароли: 3
    Невалидни пароли: 2
    Процент валидни: 60%
    Системата не е сигурна
 */

int main() {
    setlocale(LC_ALL, "");

    int N;
    int len, valid = 0, invalid = 0;
    
    cout << "Брой пароли: " << endl;
    cin >> N;
    

    for (int i = 0; i < N; i++) {

        cout << "Дължина на парола: " << endl;
        cin >> len;

        if (len >= 6 && len <= 20) valid++;
        else invalid++;
    }

    double percent = (double)valid / N * 100;

    cout << "Валидни пароли: " << valid << endl;
    cout << "Невалидни пароли: " << invalid << endl;
    cout << "Процент валидни: " << percent << "%" << endl;
    
    if (percent > 60) cout << "Системата е сигурна";
    else cout << "Системата не е сигурна";

    return 0;
}
