#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool check(const double tmp[], int c) {
    for (int i = 0; i < c; i++) {
        if (tmp[i] < 50 || tmp[i] > 100) { return false; }
    }
    return true;
}
int randNUM(int min, int max){
    if (min > max){
        return max + rand() % (min - max + 1);
    }else if (min == max){
        return max;
    }else {
        return min + rand() % (max - min + 1);
    }
}
bool game(int secretNum, int steps){
    int num;
    for (int i = 0; i < steps; ++i) {
        cout << "Enter number: ";
        cin >> num;
        if (num == secretNum) {
            cout << "You win!";
            return true;
        }else if (num > secretNum) {
            cout << "Secret number < " << num << endl;
        }else {
            cout << "Secret number > " << num << endl;
        }
    }
    return false;
}

int main()
{
    //task 1
    /*const int r = 9, c = 3;
    double a[r][c] {{10, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}, {60, 60, 60}};
    --cout << "Enter matrix (9x3)" << endl;
    for (int i = 0; i < r; i++){
        cout << "R - " << i;
        for (int ii = 0; ii < c; ii++){
            cout << " C - " << ii << " :";
            cin >> a[r][c];
        }
    }--
    int tmp = 0; //кількість рядків з діапазоном
    for (int i =0; i < r; i++){
        if (check(a[i], c)) { tmp++; }
    }

    double b[tmp][c];
    int k = 0; // індекс рядка у новій матриці b

    for(int i = 0; i < r; i++){
        if (check(a[i], c)) {
            for (int j = 0; j < c; j++) {
                b[k][j] = a[i][j]; // копіюємо елементи в новий масив b
            }
            k++; // збільшуємо індекс рядка у новій матриці b
        }
    }

    // Виведення нової матриці b
    cout << "New matrix b:" << endl;
    for(int i = 0; i < tmp; i++){
        for (int j = 0; j < c; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }*/

    //task 2
    /*char str[101];
    cout << "Enter string(100 char max): ";
    cin.getline(str, 101);
    int a =0, b = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '(') {a++;}
        else if (str[i] == ')') {b++;}
    }
    if (a == b) {cout << "True";}
    else {cout << "False";}
    
    return 0;*/

    //task 2.1
    /*srand(unsigned(time(0)));

    int min, max, c;
    do {
        cout << "Enter cylcist: ";
        cin >> c;
        if (c <= 0) {
            cout << "\nError number > 0." << endl;
        }
    } while (c <= 0);
    do {
        cout << "Enter min num: ";
        cin >> min;
        cout << "Enter max num: ";
        cin >> max;
        if (min <= 0 or max <= 0) {
            cout << "\nError number > 0." << endl;
        }
    } while (min <= 0 or max <= 0);
    cout << "Rand num: ";
    for (int i = 0; i < c; ++i) {
        cout << randNUM(min, max) << " ";
    }*/
    //task 2.2
    srand(unsigned(time(0)));

    int secretNum = rand() % 100;
    int steps = 5; // Кількість спроб

    cout << "5 Attemps." << endl;

    if (game(secretNum, steps)) { cout << "You win!";}
    else{ cout << "You lose!"; }
}
