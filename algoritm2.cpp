#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y, x, z, b;

    cout << "Enter z: ";
    cin >> z;

    if (z < 1) {
        cout << "Enter b: ";
        cin >> b;
        if (b != 0) {
            x = z / (b * sqrt(pow(z * b, 3)));
            y = -M_PI + pow(cos(x * x * x), 2) + pow(sin(x * x), 3);
            cout << "Branch 1: ";
        } else {
            cout << "Error: b cannot be 0." << endl;
            return 1;
        }
    } else {
        cout << "Enter b: ";
        cin >> b;
        x = z / (b * sqrt(pow(z * b, 3)));
        y = -M_PI + pow(cos(x * x * x), 2) + pow(sin(x * x), 3);
        cout << "Branch 2: ";
    }

    cout << "y = " << y << endl;

    return 0;
}