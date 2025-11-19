#include <iostream>

using namespace std;


/**
 * Задача 7.39 Среднодневен разход на гориво
 * Въведете дневните разходи на гориво на автомобил за 10 дни. Намерете средния
 * разход и изведете дните, в които разходът е над средния.
 * Упътване: Масив от float или double. Използвайте два цикъла — първият за сумата,
 * вторият за сравнение.
 */
int main() {

    const int DAYS = 10;
    double fuel[DAYS];

    cout << "Enter fuel consumption for " << DAYS << " days:\n";
    for (int i = 0; i < DAYS; ++i) {
        cout << "Day " << i + 1 << ": ";
        cin >> fuel[i];
    }

    double sum = 0.0;
    for (int i = 0; i < DAYS; ++i) {
        sum += fuel[i];
    }

    double average = sum / DAYS;

    cout << "Average consumption: " << average << endl;
    cout << "Days with consumption above average:\n";
    for (int i = 0; i < DAYS; ++i) {
        if (fuel[i] > average) {
            cout << "Day " << i + 1 << ": " << fuel[i] << endl;
        }
    }

    return 0;
}
