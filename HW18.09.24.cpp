#include <iostream>
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
    int number;


    cout << "Введіть число: ";
    cin >> number;


    checkNumber(number);

    return 0;
}
