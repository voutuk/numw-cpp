#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    //TASK-1
    /*char str[100];
    cout << "Enter string(100 char max): ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; ++i) {
        cout << "Cast: " << int(str[i]);
    }

    int num = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i] >= 48 && str[i] <= 57) {num++;}
    }
    cout << "Num: " << num << endl;
    return 0;*/

    //TASK-2
    /*char str[100];
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
    cout << "Max (A,a): " << max << endl;*/
    //TASK-3
    // Lorem Ipsum is simply dummy text of the printing and typesetting industry.
    char str[100];
    cout << "Enter a string(100 char max): ";
    cin.getline(str, 100);
    int tmpA = 0, tmpB = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 65 and str[i] <= 90) or (str[i] >= 97 and str[i] <= 122)){
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') { tmpA++; }
            else { tmpB++; }
        }
    }
    cout << "Golosni: " << tmpA << " - " << (double(tmpA)/(tmpA+tmpB))*100 << "%" << endl << "Prigolosni: "<< tmpB << " - " << (double(tmpB)/(tmpA+tmpB))*100 << "%"<< endl;

    //TASK-4
    /*const int size = 5;
    char a[size]{'H', 'e', 'l', 'l', 'o'};
    char b[size]{'W', 'o', 'r', 'l', 'd'};
    char c[(size*2)+2]{};
    for (int i = 0; i < size; ++i) {
        c[i] = a[i];
    }
    c[size] = ' ';
    for (int i = 0; i < size; ++i) {
        c[size + 1 + i] = b[i];
    }
    c[(size*2)+1] = '\0'; //
    cout << c << "|";
    for (int i = 0; i < (size*2)+2; ++i) {
        cout << c[i];
    }
    cout << "|";*/

}