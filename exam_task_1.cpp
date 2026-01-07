#include <iostream>
#include <clocale>

using namespace std;


int main() {

    setlocale(LC_ALL, "");
    cout << "Брой на оценките: " << endl;
    int N; cin >> N;
    int grade, sum = 0, valid = 0, excellent = 0, weak = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Оценката # " << i << endl;
        cin >> grade;
        
        if (grade >= 2 && grade <= 6) {
            valid++;
            sum += grade;

            if (grade == 6) excellent++;
            else if (grade == 2) weak++;
        }
    }

    if (valid == 0) {
        cout << "Няма валидни оценки";
    } else {
        cout << "Брой валидни оценки: " << valid << endl;
        cout << "Среден успех: " << (double)sum / valid << endl;
        cout << "Брой отлични оценки: " << excellent << endl;
        cout << "Брой слаби оценки: " << weak << endl;
        if (excellent > weak) 
            cout << "Повече отлични оценки";
        else if (weak > excellent)
            cout << "Повече слаби оценки";
        else
            cout << "Отличните и слабите оценки са равен брой";
    }
    return 0;
}
