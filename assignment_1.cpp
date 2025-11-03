#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
    double a, b, c;
    cout << "enter a " ; cin >> a;
    cout << "enter b " ; cin >> b;
    cout << "enter c " ; cin >> c;
    if (a == 0) {
        cout << "Error, end a = 0"  << endl;
    } else {
        double D;
            D = b*b - 4*a*c;
        if ( D < 0){
            cout << "Error, end D < 0"  << endl;
        } else {
            double x1, x2;
            x1 = (-b + sqrt(D))/2*a;
            x2 = (-b - sqrt(D))/2*a;
            cout << x1 << " - x1 "  << endl;
            cout << x2 << " - x2 "  << endl;
        }
    }
    
    return 0;
}
