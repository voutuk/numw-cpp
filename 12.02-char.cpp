#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    //TASK-1
    /*char str[101];
    cout << "Enter string(100 char max): ";
    cin.getline(str, 101);

    for (int i = 0; str[i] != '\0'; ++i) { // !
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

    if (tmp > max) { max = tmp; } //!
    cout << "Max (A,a): " << max << endl;*/
    //TASK-3
    // Lorem Ipsum is simply dummy text of the printing and typesetting industry.
    /*char str[100];
    cout << "Enter a string(100 char max): ";
    cin.getline(str, 100);
    int tmpA = 0, tmpB = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 65 and str[i] <= 90) or (str[i] >= 97 and str[i] <= 122)){
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') { tmpA++; }
            else { tmpB++; }
        }
    }
    cout << "Golosni: " << tmpA << " - " << (double(tmpA)/(tmpA+tmpB))*100 << "%" << endl << "Prigolosni: "<< tmpB << " - " << (double(tmpB)/(tmpA+tmpB))*100 << "%"<< endl;*/

    //TASK 2.1
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
    c[(size*2)+1] = '\0'; //!

    cout << c << "|";

    /*for (int i = 0; i < (size*2)+2; ++i) {
        cout << c[i];
    }*/
    //cout << "|";*/


    //TASK 2.2
    // Lorem Ipsum is simply dummy text of the printing and typesetting industry.
    /*char a[100];
    cout << "Enter string: ";
    cin.getline(a, 100);
    int size = 0;
    while (a[size] != '\0') {size++;}
    cout << "Size str: " << size-1 << endl; //!
    return 0;*/

    //TASK 2.3
    // Lorem Ipsum is simply dummy text of the printing and typesetting industry.
    /*char a[100];
    cout << "Enter string: ";
    cin.getline(a, 100);

    for (int i = 0, ii = strlen(a)-1; i < strlen(a)/2; i++, ii--){ //!
        //cout << "Swap I: " << i << " II: " << ii<<endl;
        swap(a[i], a[ii]);
    }
    cout << a;*/

    //TASK 2.4
    /*char a[100], b, c;
    cout << "Enter string: ";
    cin.getline(a, 100);
    cout << "Enter char(1): ";
    cin >> b;
    cout << "Enter char(2): ";
    cin >> c;
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == b) { a[i] = c; }
    }
    cout << a;*/

    //TASK 2.5
    // Lorem Ipsum is simply dummy text of the printing and typesetting industry.
    /*char a[256];
    cout << "Enter string(char 256): ";
    cin.getline(a, 256);

    int tmp = 0;

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == ' ' && a[i+1] != ' ') { tmp++; }
    }
    tmp++;
    cout << "Number: " << tmp << endl;*/

    //TASK 2.6
    /*char a[100], b[100];
    cout << "Enter string1 (char 100): ";
    cin.getline(a, 100);
    cout << "Enter string2 (char 100): ";
    cin.getline(b, 100);
    if (strcmp(a, b) == false){
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }*/

    //TASK 2.7
    // lorem Ipsum is simply dummy text of the printing and typesetting industry.

    /*char a[100];
    cout << "Enter string1 (char 100): ";
    cin.getline(a, 100);
    a[0] = toupper(a[0]);
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == ' '){
            a[i+1] = toupper(a[i+1]);
        }
    }
    cout << a;*/

    //TASK 2.8
    /*char a[100];
    cout << "Enter string1 (char 100): ";
    cin.getline(a, 100);
    int size = 0;
    bool tmp = true;
    for (int i = 0; a[i] != '\0'; i++) { size++; }

    for (int i = 0; i < size/2; ++i){
        if (a[i] != a[size-i-1]){
            tmp = false;
        }
    }
    if (tmp){
        cout << "Palindrom";
    } else{
        cout << "Ne Palindrom";
    }*/
}