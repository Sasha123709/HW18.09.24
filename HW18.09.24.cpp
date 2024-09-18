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

//#include <iostream>
//#include <cstdlib>
//#include <ctime>  
//#include <Windows.h>
//using namespace std;
//
//
//void fillArray(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        arr[i] = (rand() % 10000) / 100.0; 
//    }
//}
//
//
//void showArray(double* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    srand(time(0));
//    char choice;
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    do {
//        int size;
//        cout << "Введіть розмір масиву: ";
//        cin >> size;
//
//        
//        double* array = new double[size];
//
//        
//        fillArray(array, size);
//
//        
//        cout << "Ваш масив: ";
//        showArray(array, size);
//
//        
//        delete[] array;
//
//        
//        cout << "Бажаєте створити новий масив? (y/n): ";
//        cin >> choice;
//
//    } while (choice == 'y' || choice == 'Y');
//
//    cout << "Програма завершена." << endl;
//    return 0;
//}

//#include <iostream>
//#include <cstdlib>  
//#include <ctime>    
//#include <Windows.h>
//
//void printArray(int* array, int size) {
//    for (int i = 0; i < size; ++i) {
//        std::cout << array[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//
//void swapEvenOdd(int* array, int size) {
//    for (int i = 1; i < size; i += 2) {
//        if (i + 1 < size) {
//            std::swap(array[i - 1], array[i]);
//        }
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    std::srand(std::time(nullptr)); 
//
//    int size;
//    std::cout << "Введіть розмір масиву: ";
//    std::cin >> size;
//
//
//    int* array = new int[size];
//
//    
//    for (int i = 0; i < size; ++i) {
//        array[i] = std::rand() % 100;
//    }
//
//    std::cout << "Початковий масив: ";
//    printArray(array, size);
//
//
//    swapEvenOdd(array, size);
//
//    std::cout << "Масив після обміну: ";
//    printArray(array, size);
//
//
//    delete[] array;
//
//    return 0;
//}

#include <iostream>
#include <Windows.h>

void separatePosNeg(int* array, int size, int*& positives, int& posCount, int*& negatives, int& negCount) {
    
    posCount = 0;
    negCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            ++posCount;
        }
        else if (array[i] < 0) {
            ++negCount;
        }
    }

    positives = new int[posCount];
    negatives = new int[negCount];


    int posIndex = 0;
    int negIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) {
            positives[posIndex++] = array[i];
        }
        else if (array[i] < 0) {
            negatives[negIndex++] = array[i];
        }
    }
}


void printArray(int* array, int size, const char* arrayName) {
    std::cout << arrayName << ": ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 10; 
    int array[size];


    std::cout << "Введіть " << size << " цілих чисел: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    
    int* positives = nullptr;
    int* negatives = nullptr;
    int posCount = 0, negCount = 0;


    separatePosNeg(array, size, positives, posCount, negatives, negCount);


    if (posCount > 0) {
        printArray(positives, posCount, "Додатні числа");
    }
    else {
        std::cout << "Додатніх чисел немає.\n";
    }

    if (negCount > 0) {
        printArray(negatives, negCount, "Від'ємні числа");
    }
    else {
        std::cout << "Від'ємних чисел немає.\n";
    }

    delete[] positives;
    delete[] negatives;

    return 0;
}
