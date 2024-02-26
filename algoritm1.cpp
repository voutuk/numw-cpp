#include <iostream>
#include <cmath>
using namespace std;
int checkNUM(){
    int num;
    cout << "Enter number: ";
    do {
        cin >> num;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(LLONG_MAX, '\n');
            cout << "Enter normal data!" << endl;
            cout << "Enter number: ";
            cin >> num;
        } else if (cin.bad()) {
            cout << "Critical Error" << endl;
            return -1;
        }
    } while (!cin.good());
    return num;
}
int main(){
    //TASK-1
    int num = checkNUM();
    double z2 = 2 * sin(num);
    double z1 = (sin(2*num) + sin(5*num) - sin(3*num))/(cos(num) + 1 - 2*pow(sin(2*num), 2));
    cout << "Z1: " << z1 << endl << "Z2: " << z2 << endl;
}