#include "iostream"
#include "fstream"
using namespace std;

struct list {
    bool himia, fizika, matematika, istoria;
};

struct Students {
    int pp, yearsCHOOL;
    string name;
    string group;
    bool work;
    list zaborgovanosti;
};

Students* ReadStudFile(int& students){
    ifstream fileG1("stud"); //Читання
    if (!fileG1.is_open()) {
        cout << "File not found" << endl;
    }
    fileG1 >> students;
    Students* stud = new Students[students];
    for (int i = 0; i < students; ++i) {
        fileG1 >> stud[i].pp >> stud[i].yearsCHOOL >> stud[i].name >> stud[i].group >> stud[i].work >> stud[i].zaborgovanosti.himia >> stud[i].zaborgovanosti.fizika >> stud[i].zaborgovanosti.matematika >> stud[i].zaborgovanosti.istoria;
    }
    fileG1.close();
    return stud;
}
void check(Students* stud, int students){
    for (int i = 0; i < students; ++i) {
        int tmp = 0;
        if (stud[i].zaborgovanosti.himia) tmp++;
        if (stud[i].zaborgovanosti.fizika) tmp++;
        if (stud[i].zaborgovanosti.matematika) tmp++;
        if (stud[i].zaborgovanosti.istoria) tmp++;

        if (tmp == 2 && stud[i].group == "KB-1") {
            cout << "Name: " << stud[i].name << ", Group: " << stud[i].group << endl;
        }
    }
}
int main() {
    int students;
    Students* stud = ReadStudFile(students);

    cout << "Students 2 zaborgovanosti:" << endl;

    check(stud, students);
    delete[] stud;
    return 0;
}