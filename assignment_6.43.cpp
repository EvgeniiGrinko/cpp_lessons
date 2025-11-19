#include <iostream>

using namespace std;


/**
 * Задача 6.43: Проверка за палиндром
 * Програма за анализ на данни, която проверява дали дадено число е палиндром (чете
 * се по същия начин отпред и отзад).
 * Програмата приема голямо положително цяло число от потребителя. Трябва да
 * обърне числото, използвайки while цикъл, и след това да сравни оригиналното число
 * с обърнатото. Изведете дали числото е палиндром или не.
 * Упътване: За да обърнете число, използвайте while цикъл. Във всяка итерация:
 * Вземете последната цифра с оператора за остатък (% 10).
 * Добавете тази цифра към обърнатото число (умножете текущото обърнато
 * число по 10 и добавете цифрата).
 * Премахнете последната цифра от оригиналното число (разделете го на 10).
 * Трябва да съхраните оригиналното число в отделна променлива, преди да започнете
 * да го променяте в цикъла. След цикъла използвайте if-else за сравнение.
 */
int main() {
    unsigned long long number, originalNumber, reversedNumber = 0;
    cout << "Enter a positive integer: ";
    cin >> number;

    originalNumber = number;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}
