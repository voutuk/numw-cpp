#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string(100 char max): ";
    cin.getline(str, 100);

    /*for (int i = 0; str[i] != '\0'; ++i) {
        cout << "Cast: " << static_cast<int>(str[i]);
    }*/

    int num = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] >= 48 && str[i] <= 57) {num++;}
    }
    cout << "Num: " << num << endl;
    return 0;
}