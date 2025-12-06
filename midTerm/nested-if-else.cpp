#include <iostream>

using namespace std;

int main() {
    float units, bill;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid input: Units cannot be negative." << endl;
        return 1;
    }

    if (units <= 100) {
        bill = units * 0.50;
    } else if (units <= 200) {
        bill = (100 * 0.50) + ((units - 100) * 0.75);
    } else if (units <= 300) {
        bill = (100 * 0.50) + (100 * 0.75) + ((units - 200) * 1.20);
    } else {
        bill = (100 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 300) * 1.50);
    }

    cout << "Your electricity bill is: " << bill << endl;

    return 0;
}
