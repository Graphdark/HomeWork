// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "mylib.h"

#define DIAP(n,b) if ((n > 0) and (n < b)) std::cout << "true" << std::endl; else std::cout << "false" << std::endl;
#define ARR() std::cout << "Size of: "; 

void buble(int* arr, int c)
{
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    int b;
    int size = 10;
    mylib::printArray(mylib::MyArray(size), size);
    mylib::posNeg(mylib::MyArray(size), size);
    std::cout << "Enter numb: ";
    std::cin >> n;
    std::cout << "Enter diap: ";
    std::cin >> b;
    DIAP(n, b);
    int c;
    ARR();
    std::cin >> c;
    int* arrMy;
    arrMy = new (std::nothrow) int [c];
    for (int i = 0; i < c; i++)
        arrMy[i] = rand();
    buble(arrMy, c);
    delete[] arrMy;
    arrMy = nullptr;

}
