// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "mylib.h"
#include <stdio.h>
#include <fstream>
#include <vector>

using namespace std;

#pragma pack(push, 1)
struct Sotr {
    std::string Name;
    short Age;
    std::string Prof;
    int Cost; 
};
#pragma pack(pop)


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
    ofstream file("sotr.txt");
    vector<Sotr> s;
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
    std::cout << std::endl;
    Sotr Age;
    Age.Age = 34;
    std::cout << Age.Age << " " << sizeof(Age.Age) << std::endl;
    Age.Age = 34;
    Age.Cost = 1000;
    Age.Name = "Ivan";
    Age.Prof = "Progs";
    s.push_back(Age);
    file << s[0].Name << " " << s[0].Age << " " << s[0].Cost << " " << s[0].Prof << "\n";
    file.close();


}
