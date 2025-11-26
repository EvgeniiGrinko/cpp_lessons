#include <iostream>
#include <string>

using namespace std;


/**
 * Изчисляване на цена за билети за кино
 * Въвеждат се:
 * цена на билет (ticketPrice);
 * брой билети (tickets);
 * процент намаление за група (groupDiscount) — 0–40;
 * дали клиентът има купон (yes/no).
 * Програмата изчислява:
 * сума без намаление;
 * сума след груповото намаление;
 * ако има купон — още 5% намаление.
 * При грешни данни → грешка.
*/
int main() {
    try {
        double ticketPrice;
        int tickets;
        double groupDiscount;
        string loyaltyCard;
    
        // Input
        cout << "Enter price for ticket: ";
        cin >> ticketPrice;
        cout << "Enter number of tickets: ";
        cin >> tickets;
        cout << "Enter group discount (between 0 and 40): ";
        cin >> groupDiscount;
        cout << "Have you got a loyalty card? (yes/no): ";
        cin >> loyaltyCard;
        if (ticketPrice <= 0 || tickets <= 0 || groupDiscount < 0 || groupDiscount > 40 ||
            (loyaltyCard != "yes" && loyaltyCard != "no")) {
            throw std::invalid_argument("Invalid input data.");
        }

        double sumNoDiscount = ticketPrice * tickets;
        double sumGroup = sumNoDiscount * (1 - groupDiscount / 100.0);

        double finalSum = sumGroup;
        if (loyaltyCard == "yes") {
            finalSum *= 0.95;
        }


        cout << "The total sum is: " << finalSum << endl;
    } catch (const std::exception& ex) {
        cerr << ex.what() << endl;
    }
    return 0;
}
