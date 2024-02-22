#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
using namespace std;

void printM(double** matrix, int ROWS, int COLS) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

bool range(double tmp) {
    return (tmp >= 50 && tmp <= 100);
}

int filter(double** a, double** b, int ROWS, int COLS) {
    int newROWS = 0;

    for (int i = 0; i < ROWS; i++) {
        bool tmp = true;
        for (int j = 0; j < COLS; ++j) {
            if (!range(a[i][j])) {
                tmp = false;
                break;
            }
        }
        if (tmp) {
            for (int j = 0; j < COLS; ++j) {
                b[newROWS][j] = a[i][j];
            }
            newROWS++;
        }
    }
    return newROWS;
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
int game2(int userNumber) {
    int step = 0;
    int tmp[100]{};
    for (int i = 0; i < 100; ++i) {
        tmp[i] = 0;
    }

    while (true) {
        int random = rand() % 101; // Генеруємо випадкове число від 0 до 99
        // Перевіряємо, чи це число вже було вгадане
        if (tmp[random] == 0) {
            //cout << "Pc number: " << random << " " << step << endl;
            tmp[random] = 1; // Позначаємо, що це число вже вгадане
            step++; // Збільшуємо кількість спроб

            // Перевіряємо, чи комп'ютер вгадав число користувача
            if (random == userNumber) {
                return step;
            }
        }
    }
}

int usrStep() {
    int tmp;
    cout << "Оберіть зброю (0 - Камінь, 1 - Ножиці, 2 - Бумага): ";
    cin >> tmp;
    return tmp;
}

int pcStep() {
    return rand() % 3;
}

void reverseArray(int*  arr, int N) {
    stack<int> st;

    for (int i = 0; i < N; i++) {
        st.push(arr[i]);
    }

    for (int i = 0; i < N; i++) {
        arr[i] = st.top();
        st.pop();
    }
}

int main()
{
    /*const int ROWS = 9;
    const int COLS = 3;

    //task 1
    srand(unsigned(time(0)));

    double** a = new double* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        a[i] = new double[COLS];
    }

    double** b = new double* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        b[i] = new double[COLS];
    }

    //random matrix
    for (int i = 0; i < ROWS; i++) {
        for (int ii = 0; ii < COLS; ii++) {
            a[i][ii] = randNUM(0, 100);
        }
    }

    int newROWS = filter(a, b, ROWS, COLS);

    cout << endl;
    printM(a, ROWS, COLS);

    cout << endl;
    printM(b, newROWS, COLS);

    for (int i = 0; i < ROWS; ++i) {
        delete[] a[i];
    }
    for (int i = 0; i < newROWS; ++i) {
        delete[] b[i];
    }
    delete[] a;
    delete[] b;

    return 0;*/

    //task 2
    /*cout << "Enter string (100 char max): ";
    char* str = new char[101];
    cin.getline(str, 100);

    int a = 0, b = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '(') {
            a++;
        } else if (str[i] == ')') {
            b++;
        }
    }

    if (a == b) { cout << "True"; }
    else { cout << "False"; }

    delete[] str;*/

    //task3
    int N;
    cout << "Enter arr size: ";
    cin >> N;

    int *arr = new int[N]; // Створюємо динамічний масив

    cout << "Enter element:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Array A:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, N);

    cout << "Array B:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Звільняємо пам'ять, виділену для динамічного масиву

    return 0;

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

    //task 2.2 2.3
    /*srand(unsigned(time(0)));

    int secretNum = rand() % 100;
    int steps = 5; // Кількість спроб

    cout << "5 Attemps." << endl;

    if (game(secretNum, steps)) { cout << "You win!";}
    else{ cout << "You lose!"; }*/

    //task 2.4
    /*srand(unsigned(time(0)));
    int num;
    do {
        cout << "Enter num(0-100): ";
        cin >> num;
        if (num < 0 or num > 100) {
            cout << "\nError number." << endl;
        }
    } while (num < 0 or num > 100);
    int attempts = game2(num);

    cout << "Pc find number " << num << " attempts: " << attempts << endl;*/

    //task 2.5
    /*srand(unsigned(time(0)));
    int usrScore = 0, pcScore = 0;
    while (usrScore < 2 && pcScore < 2) {
        cout << "Step " << usrScore + pcScore + 1 << endl;
        int usr = usrStep();
        int pc = pcStep();

        cout << "Ви обрали ";
        switch (userChoice) {
            case ROCK: cout << "Камінь"; break;
            case PAPER: cout << "Бумага"; break;
            case SCISSORS: cout << "Ножиці"; break;
        }
        cout << ", комп'ютер обрав ";
        switch (computerChoice) {
            case ROCK: cout << "Камінь"; break;
            case PAPER: cout << "Бумага"; break;
            case SCISSORS: cout << "Ножиці"; break;
        }
        cout << endl;

        int result = determineWinner(userChoice, computerChoice);
        if (result == 0) cout << "Нічия!" << endl;
        else if (result == 1) {
            cout << "Ви перемогли в цьому раунді!" << endl;
            userScore++;
        } else {
            cout << "Комп'ютер переміг в цьому раунді." << endl;
            computerScore++;
        }
        cout << endl;
    }
    if (userScore > pcScore) cout << "Ви виграли гру з рахунком " << usrScore << ":" << pcScore << endl;
    else cout << "Комп'ютер виграв гру з рахунком " << pcScore << ":" << usrScore << endl;

    return 0;*/

}
