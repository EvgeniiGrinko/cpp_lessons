#include <iostream>
#include <clocale>

using namespace std;


/*
    Условие:

    Въвежда се цяло число N – брой измерени температури (1 ≤ N ≤ 50). Следват N цели
    числа – температури. Игнорират се температури извън интервала [-50; 50].

    Примерен вход:
    8
    -10 15 60 -3 0 22 -55 5

    Примерен изход:
    Брой валидни температури: 6
    Средна температура: 4.83
    Минимална температура: -10
    Максимална температура: 22
    Повече положителни температури
*/


int main() {

    setlocale(LC_ALL, "");
    
    int N;

    cout << "Брой температури: " << endl;
    cin >> N;
    int t, sum = 0, count = 0, minT = 0, maxT = 0;
    int pos = 0, neg = 0;

    for (int i = 0; i < N && i <= 50; i++) {
        cout << "Температура: " << endl;
        cin >> t;

        if (t >= -50 && t <= 50) {
            if (count == 0) minT = maxT = t;

            count++;
            sum += t;

            if (t > 0) pos++;
            else if (t < 0) neg++;

            if (t < minT) minT = t;

            if (t > maxT) maxT = t;
        }
    }

    if (count == 0) cout << "Няма валидни температури";
    else {
        cout << "Брой валидни температури: " << count << endl;
        cout << "Средна температура: " << (double)sum / count << endl;
        cout << "Минимална температура: " << minT << endl;
        cout << "Максимална температура: " << maxT << endl;
        
        if (pos > neg) cout << "Повече положителни температури";
        else if (neg > pos) cout << "Повече отрицателни температури";
        else cout << "Равен брой положителни и отрицателни";
    }

    return 0;
}
