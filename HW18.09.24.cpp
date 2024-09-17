#include <iostream>
#include <Windows.h>
using namespace std;

void checkNumber(int& num) {
    if (num > 0) {
        cout << "Число додатне." << endl;
    }
    else if (num < 0) {
        cout << "Число від'ємне." << endl;
    }
    else {
        cout << "Число дорівнює нулю." << endl;
    }
}

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int number;


    cout << "Введіть число: ";
    cin >> number;


    checkNumber(number);

    return 0;
}
