#include <iostream>
#include <map>

using namespace std;

/**
 * Задача 7.26
 * Намерете всички уникални елементи в масив (елементи които се срещат точно един път).
 */
int main() {

    int arr[10] = {2, 3, 5, 4, 5, 3, 4, 7, 15, 11};
    map<int, int> occurrencies;

    for (int element : arr) {
        occurrencies[element]++;
    }

    cout << "Unique elements: " << endl;
    for (auto element : occurrencies) {
        if (element.second == 1) {
            cout << element.first << endl;
        }
    }

    return 0;
}
