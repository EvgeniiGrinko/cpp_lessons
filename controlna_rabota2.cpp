#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;


int main() {

    setlocale(LC_ALL, "");

    cout << "Цена зв една нощ: " << endl;
    double price;
    cin >> price;
    cout << "Брой на нощувки: " << endl;
    double quantity;
    cin >> quantity;
    cout << "Процент отстъпка (цяло число между 0 и 100): " << endl;
    int discount;
    cin >> discount;
    cout << "Вие сте член ли на лоялна програма? (yes/no) " << endl;
    string clubCard;
    cin >> clubCard;

    double clubDiscount = 5; 
    double sumBeforeDiscounts = 0; 
    double sumWithDiscount = 0; 

    cout << fixed << setprecision(2);

    if (
        discount < 0
        || discount > 100
    ) {
        cout << "Възникна грешка: невалидна отстъпка" << endl;
        return 1;

    } else if (price <= 0) {
        cout << "Възникна грешка: невалидна цена" << endl;
        return 1;

    } else if (quantity <= 0) {
        cout << "Възникна грешка: невалилиден брой" << endl;
        return 1;

    } else {
        sumBeforeDiscounts = price * quantity;
        cout << "Обща сума преди отстъпки: " << sumBeforeDiscounts <<  " лв." << endl;

        if (discount > 0) {
            sumWithDiscount = sumBeforeDiscounts - (sumBeforeDiscounts / 100) * discount;
            cout << "Обща сума след отстъпка: " << sumWithDiscount << " лв." <<  endl;
        }

        if (
            clubCard == "yes"
            || clubCard == "Yes"
            || clubCard == "YES"
        ) {
            sumWithDiscount = sumWithDiscount - (sumWithDiscount / 100) * clubDiscount;
            cout << "Обща сума с отстъпка за карта лоялност: " << sumWithDiscount << " лв." << endl;
        }
        cout << "Kрайна сума за плащане: " << sumWithDiscount <<  " лв." << endl;
    }
    
    return 0;
}
