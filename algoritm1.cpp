#include <iostream>
#include <cmath>
using namespace std;

double checkNUM(char tmp){
    double num;
    cout << "Enter number[" << tmp << "]: ";
    cin >> num;
    do {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(LLONG_MAX, '\n');
            cout << "Enter normal data: ";
            cin >> num;
        }else if (num == 0){
            cout << "Enter positive number: ";
            cin >> num;
        }
    } while (!cin.good() or num == 0);
    return num;
}

double deg_to_rad(double deg) {
    return deg * M_PI / 180.0;
}

int main(){
    //TASK-1
    /*double num;
    cout << "Enter angle in degrees: ";
    cin >> num;
    num = deg_to_rad(num);

    double z2 = 2 * sin(num);
    double z1 = (sin(2*num) + sin(5*num) - sin(3*num))/(cos(num) + 1 - 2*pow(sin(2*num), 2));
    cout << "Z1: " << z1 << endl << "Z2: " << z2 << endl;*/

    //TASK-2
    /*double num = checkNUM('n');
    // z1 = (1-2sin^2a)/(1+sin2a)
    // z2 = (1-tga)/(1+tga)
    double z1 = (1-2*pow(sin(num), 2))/(1+sin(2*num));
    double z2 = (1-tan(num))/(1+tan(num));
    cout << "Z1: " << z1 << endl << "Z2: " << z2 << endl;*/

    //TASK-3
    double x, y, z;
    do {
        x = checkNUM('x');
        y = checkNUM('y');
        z = checkNUM('z');
        cout << "Enter normal data!" << endl;
    }while(abs(x - 2*y / (1 + pow(x, 2) * pow(y, 2)))==0);
    //  v = (1+sin^2(x+y))/(|x-((2y)/(1+x^2y^2))|)x^|y|+cos^2(arctg((1)/(z)))
    double v = (1 + pow(sin(x+y), 2)) / (abs(x - 2*y / (1 + pow(x, 2) * pow(y, 2)))) * pow(x, abs(y)) + pow(cos(atan(1/z)), 2);

    cout << "V: " << v << endl;

    /*X: 0.0374
    Y: -0.825
    Z: 16
    V: 1.05534*/
}