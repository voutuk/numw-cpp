#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /*cout << "Enter number: " << endl;
    int a;
    cin >> a;
    if(cin.good()) {
        cout << "Good" << endl;
    }else if (cin.fail()) {
        cin.clear();
        cin.ignore(LLONG_MAX, '\n');
        cout << "Fail" << endl;
        cin >> a;
    } else if (cin.bad()) {
        cout << "Bad" << endl;
    } else if (cin.eof()) {
        cout << "EOF" << endl;
    }
    cout << "Number: " << a << endl;*/

    // Читання з файлу та виведення на екран
    string filename = "file.txt";
    ifstream file(filename, ios::in); //Читання з файлу
    if (!file.is_open()){
        cout << "File not found" << endl;
        return 0;
    }

    /*if (file.is_open()) {
        char line1;
        while (file.get(line1)) {
            cout << line1;
        }
        file.close();
    }*/

    /*if (file.is_open()) {
        string line;
        while (getline(file, line, '\r')) {
            cout << line << endl;
        }
        file.close();
    }*/

    /*string txt;
    while (file >> txt) {
        cout << txt << endl;
    }
    if(file.eof()){
        cout << "End of file" << endl;
    }*/
    file.close();
    ofstream file1(filename, ios::out); // Запис в файл
    if (!file1.is_open()){ // Файл сам створиться
        cout << "File not found" << endl;
        return 0;
    }
    cout << "Enter text: ";
    string text;
    getline(cin, text);

    /*int txtSize = text.length(); // Посимвольно
    for (int i = 0; i < txtSize; ++i) {
        file1.put(text[i]);
    }*/
    //Порядково
    string g = "Hello";
    string b = "World";
    file1 << g << "\n" << b << "\n";
}