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
        }
    } while (!cin.good());
    return num;
}

double findY(double z, double a, double b, int function) {
    double x, y;

    if (z < 1) {
        x = z;
        cout << "Branch 1: z < 1" << endl;
    } else {
        x = sqrt(pow(z, 3));
        cout << "Branch 2: z >= 1" << endl;
    }

    if (function == 1) {
        y = -M_PI * x + a * pow(cos(x * x * x), 2) + b * pow(sin(x * x), 3);
        cout << "Function: 2x" << endl;
    } else if (function == 2) {
        y = -M_PI * x + a * pow(cos(x * x * x), 2) + b * pow(sin(x * x), 3);
        cout << "Function: x^2" << endl;
    } else if (function == 3) {
        if (x != 0) {
            y = -M_PI * x + a * pow(cos(x * x * x), 2) + b * pow(sin(x * x), 3);
            cout << "Function: x/3" << endl;
        } else {
            cout << "Error: Division by zero (x/3)" << endl;
            exit(1);
        }
    }
    return y;
}

double findMin(double x, double y) {
    return min(y, x);
}

double findMax(double x, double y) {
    return max(x, y);
}

int main() {
    //TODO: Task 1
    /*double y, x, z, b;

    cout << "Enter z: ";
    z = checkNUM('z');

    if (z < 1) {
        cout << "Enter b: ";
        b = checkNUM('b');
        if (b != 0) {
            x = z / b;
            y = -M_PI + pow(cos(x * x * x), 2) + pow(sin(x * x), 3);
            cout << "Branch 1: " << y;
        } else {
            cout << "Error: b cannot be 0." << endl;
            return 1;
        }
    } else {
        cout << "Enter b: ";
        b = checkNUM('b');
        x = sqrt(pow(z * b, 3));
        y = -M_PI + pow(cos(x * x * x), 2) + pow(sin(x * x), 3);
        cout << "Branch 2: " << y;
    }*/
    //TODO: Task 2
    /*double a, b, z, y, function;
    a = checkNUM('a');
    b = checkNUM('b');
    z = checkNUM('z');

    double x;
    if (z < 1) {
        x = z;
    } else {
        if (z < 0) {
            cout << "Error: z cannot be less than 0." << endl;
            return 1;
        }
        x = sqrt(pow(z, 3));
    }

    cout << "1) 2x\n2) x^2\n3) x/3\nChoose function: ";
    do {
        function = checkNUM('f');
        if (function < 1 || function > 3) {
            cout << "Enter a valid number: ";
        }
    } while (function < 1 || function > 3);


    double result = findY(z, a, b, function);
    cout << "y = " << result << endl;*/

    //TODO: Task 3
    /*double x, y, z;

    x = checkNUM('x');
    y = checkNUM('y');
    z = checkNUM('z');

    double minNum = findMin(x + y + z, x * y * z);
    double maxNum = findMax(x + y + z, x * y * z);

    if (minNum == 0) {
        cout << "Error: Division by zero (min)" << endl;
        return 1;
    }

    double m = maxNum / minNum;
    cout << "m = " << m << endl;

    return 0;*/
}