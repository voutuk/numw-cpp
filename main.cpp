#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    //TASK-1
    /*char str[100];
    cout << "Enter string(100 char max): ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; ++i) {
        cout << "Cast: " << static_cast<int>(str[i]);
    }

    int num = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] >= 48 && str[i] <= 57) {num++;}
    }
    cout << "Num: " << num << endl;
    return 0;*/

    //TASK-2
    char str[100];
    cout << "Enter a string(100 char max): ";
    cin.getline(str, 100);

    int max = 0;
    int tmp = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'A' || str[i] == 'a') {tmp ++;}
        else{
            if (tmp > max) { max = tmp; }
            tmp = 0;
        }
    }

    if (tmp > max) { max = tmp; } //
    cout << "Max (A,a): " << max << endl;
}