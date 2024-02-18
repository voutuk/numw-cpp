#include <iostream>
using namespace std;

int main (){
    int arr[3]{2, 2, 3};
    int* ptr1 = arr; // Зберігає адресу першого елементу масиву
    for(int i = 0; i < 3; i++){cout << *(ptr1+i) << endl;}
}