#include <iostream>

using namespace std;


/**
 * Условие на задачата:
 * Да се напише програма, която изчислява крайната сума за плащане в ресторант. От клавиатурата се въвеждат:
 * цена на едно ястие (mealPrice);
 * брой порции (count);
 * процент бакшиш (tip) — цяло число между 0 и 30;
 * дали клиентът има карта за лоялност (yes или no).
 * Програмата трябва да изчисли:
 * общата сума без бакшиш;
 * сумата с добавен бакшиш;
 * ако клиентът има карта за лоялност, се приспада отстъпка 7% върху сумата с бакшиша.
 * Накрая програмата извежда крайната сметка.
 * Ако въведете стойности са невалидни (например отрицателна цена, отрицателен брой или процент извън диапазона 0–30), програмата извежда подходящо съобщение за грешка.
 */

int main() {
    double mealPrice;
    int count;
    int tipPercent;
    char loyaltyCard;
    
    // Input
    cout << "Enter price for one meal: ";
    cin >> mealPrice;
    cout << "Enter number of portions: ";
    cin >> count;
    cout << "Enter tip percent (whole number between 0 and 30): ";
    cin >> tipPercent;
    cout << "Does the client have a loyalty card? (y/n): ";
    cin >> loyaltyCard;

    // Validation
    if (mealPrice <= 0 || count <= 0 || tipPercent < 0 || tipPercent > 30) {
        cout << "Invalid input data." << endl;
        return 1;
    }

    // Calculation
    double totalNoTip = mealPrice * count;
    double tipAmount = totalNoTip * tipPercent / 100.0;
    double totalWithTip = totalNoTip + tipAmount;

    // Discount for loyalty card
    if (loyaltyCard == 'y' || loyaltyCard == 'Y') {
        totalWithTip *= 0.93; // 7% discount
    }

    // Output
    cout << "Total without tip: " << totalNoTip << endl;
    cout << "Total with tip: " << totalNoTip + tipAmount << endl;
    if (loyaltyCard == 'y' || loyaltyCard == 'Y') {
        cout << "Final total with loyalty card discount: " << totalWithTip << endl;
    } else {
        cout << "Final total: " << totalWithTip << endl;
    }

    return 0;
}
