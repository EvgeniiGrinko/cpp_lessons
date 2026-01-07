#include <iostream>
#include <clocale>

using namespace std;

/*
    Условие:
    Въвежда се число N – брой продажби. Следват N стойности на продажби. Игнорират
    се невалидни стойности (≤ 0).

    Примерен вход:
    7
    120 80 -5 200 60 0 150

    Примерен изход:
    Общ оборот: 610
    Средна стойност: 122.00
    Продажби над 100 лв.: 3
    Магазинът е имал добър ден
 */

int main() {
    setlocale(LC_ALL, "");

    int N;

    cout << "Брой продажби: " << endl;
    cin >> N;
    int sale, sum = 0, count = 0, over100 = 0;

    for (int i = 0; i < N; i++) {
        
        cout << "Стойности на продажба: " << endl;
        cin >> sale;

        if (sale > 0) {
            sum += sale;
            count++;

            if (sale > 100) over100++;
        }
    }

    if (count == 0) cout << "Няма валидни продажби";
    else {
        cout << "Общ оборот: " << sum << endl;
        cout << "Средна стойност: " << (double)sum / count << endl;
        cout << "Продажби над 100 лв.: " << over100 << endl;
        
        if (sum >= 500) cout << "Магазинът е имал добър ден";
        else cout << "Магазинът не е имал добър ден";
    }

    return 0;
}
