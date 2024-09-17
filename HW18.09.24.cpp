//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void checkNumber(int& num) {
//    if (num > 0) {
//        cout << "Число додатне." << endl;
//    }
//    else if (num < 0) {
//        cout << "Число від'ємне." << endl;
//    }
//    else {
//        cout << "Число дорівнює нулю." << endl;
//    }
//}
//
//int main() {
//    SetConsoleCP(1251); 
//    SetConsoleOutputCP(1251);
//    int number;
//
//
//    cout << "Введіть число: ";
//    cin >> number;
//
//
//    checkNumber(number);
//
//    return 0;
//}

#include <iostream>
#include <cstdlib>
#include <ctime>  
#include <Windows.h>
using namespace std;


void fillArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = (rand() % 10000) / 100.0; 
    }
}


void showArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    char choice;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    do {
        int size;
        cout << "Введіть розмір масиву: ";
        cin >> size;

        
        double* array = new double[size];

        
        fillArray(array, size);

        
        cout << "Ваш масив: ";
        showArray(array, size);

        
        delete[] array;

        
        cout << "Бажаєте створити новий масив? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Програма завершена." << endl;
    return 0;
}
