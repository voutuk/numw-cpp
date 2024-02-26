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
        } else if (num <= 0){
            cout << "Enter positive number!" << endl;
            cout << "Enter number: ";
            cin >> num;
        }
    } while (!cin.good() or num <= 0);
    return num;
}


double deg_to_rad(double deg) {
    return deg * M_PI / 180.0;
}

int main(){
    //TASK-1
    double num;
    cout << "Enter angle in degrees: ";
    cin >> num;
    num = deg_to_rad(num);

    double z2 = 2 * sin(num);
    double z1 = (sin(2*num) + sin(5*num) - sin(3*num))/(cos(num) + 1 - 2*pow(sin(2*num), 2));
    cout << "Z1: " << z1 << endl << "Z2: " << z2 << endl;

    //TASK-2
    /*int num = checkNUM();
    // z1 = (1-2sin^2a)/(1+sin2a)
    // z2 = (1-tga)/(1+tga)
    double z1 = (1-2*pow(sin(num), 2))/(1+sin(2*num));
    double z2 = (1-tan(num))/(1+tan(num));
    cout << "Z1: " << z1 << endl << "Z2: " << z2 << endl;*/

    //TASK-3
    /*//x = 3.74*10^-2
    double x = 3.74*pow(10, -2);
    //y = -0.825
    double y = -0.825;
    //z = 0.16*10^2
    double z = 0.16*pow(10, 2);
    //  v = (1+sin^2(x+y))/(|x-((2y)/(1+x^2y^2))|)x^|y|+cos^2(arctg((1)/(z)))
    double v = (1 + pow(sin(x+y), 2)) / (abs(x - 2*y / (1 + pow(x, 2) * pow(y, 2)))) * pow(x, abs(y)) + pow(cos(atan(1/z)), 2);
    cout << "V: " << v << endl;*/
}