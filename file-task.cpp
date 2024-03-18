#include <iostream>
#include <fstream>
using namespace std;

bool palindrom(string word) {
    return word[0] == word[word.length()-1];
}

int main (){
    //task1   https://www.random.org/sequences/?min=1&max=100&col=1&format=html&rnd=new
    /*
    ifstream fileF("f"); //Читання
    ofstream fileG("g"); //Запис
    if (!fileF.is_open() || !fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    int tmp;
    while (fileF >> tmp){
        if(tmp % 3 == 0 && tmp % 7 != 0){
            fileG << tmp << "\n";
        }
    }
    fileG.close();
    fileF.close();
    return 0;
    */
    //task2
    /*ofstream fileG("g"); //Запис
    if (!fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    const int gameSize = 10;
    int point[gameSize] { 5, 4, 10, 2, 3, 6, 8, 7, 9, 1 };
    string name[gameSize] { "Ivan", "Pasha", "Vova", "Vasya", "Kolya", "Sasha", "Dima", "Misha", "Vanya", "Petya" };
    fileG << gameSize << "\n";
    for (int i = 0; i < gameSize; i++){
        fileG << name[i] << "\n" << point[i] << "\n";
    }
    fileG.close();*/

    /*ifstream fileG("g"); //Читання з файлу
    if (!fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    int gameSize;
    fileG >> gameSize;

    int max1 = 0, max2 = 0, max3 = 0;
    string name1, name2, name3;

    for (int i = 0; i < gameSize*2; ++i) {
        string name;
        int points;
        fileG >> name;
        fileG >> points;
        if (points > max1) {
            max3 = max2;
            name3 = name2;
            max2 = max1;
            name2 = name1;
            max1 = points;
            name1 = name;
        } else if (points > max2) {
            max3 = max2;
            name3 = name2;
            max2 = points;
            name2 = name;
        } else if (points > max3) {
            max3 = points;
            name3 = name;
        }
    }
    fileG.close();

    std::cout << "Top-3:\n";
    std::cout << "1. " << name1 << " - " << max1 << " points\n";
    std::cout << "2. " << name2 << " - " << max2 << " points\n";
    std::cout << "3. " << name3 << " - " << max3 << " points\n";*/

    //task3
    /*fstream fileG("g"); //Читання з файлу
    if (!fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    string line;
    int count = 0;
    while (getline(fileG, line, '\n')) {
        if(line[0] == line[line.length()-1]){
            cout << line << endl;
            count++;
        }
    }
    cout << "\nCount: " << count << endl;*/
    //task4
    /*ifstream fileG("g"); //Читання з файлу
    if (!fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    string word;
    while (fileG >> word) {
        if (palindrom(word)) {
            cout << word << endl;
        }
    }*/
    //task 5
    //ofstream fileG("g"); //Запис з файлу
    ifstream fileG("g"); //Читання з файлу
    if (!fileG.is_open()){
        cout << "File not found" << endl;
        return 0;
    }
    int rows, cols;
    fileG >> rows >> cols;
    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            fileG >> arr[i][j];
        }
    }
    fileG.close();
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int max = 0;
    int ind = -1;

    // Перебір стовпців
    for (int j = 0; j < cols; ++j) {
        int count = 0;
        for (int i = 0; i < rows-1; ++i) {
            if (arr[i][j] == arr[i+1][j]) {  // Порівнюємо поточний елемент з наступним у стовпці
                count++;
            }
        }
        if (count > max) {
            max = count, ind = j;
        }
    }

    if (ind == -1){
        cout << "FAIL" << endl;
    } else {
        cout << "Index: " << ind << endl;
    }

    /*int rows = 10, cols = 10;
    fileG << rows << '\n' << cols << "\n";
    unsigned seed = time(0);

    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            arr[i][j] = rand() % 100;
            fileG << arr[i][j] << "\n";
        }
    }
    fileG.close();*/

}