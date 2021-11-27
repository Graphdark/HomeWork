// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>


void CreateFile(std::string File)
{
    std::ofstream fout(File); 
    for (int i = 0; i < 100; i++)
        fout << i << std::endl; 
    fout.close();
}

int* array(int n)
{
    int* arr;
    arr = new (std::nothrow) int[n];
    if (arr != nullptr)
    {
        for (int i = 0; i < n; ++i)
        {
            arr[i] = pow(2, i);
        }
    }
   // arr[3] = 5;
   // std::cout << "S:" << arr[3] << std::endl;
    return arr;
    delete[] arr;
    arr = nullptr;
}

int** secArray(int n)
{
    srand(time(0));
    int** arr;
    arr = new (std::nothrow) int*[n];
    if (arr != nullptr)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = rand();
    }
    return arr;
    delete[] arr;
    arr = nullptr;
}

void printArr(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        //std::cout << i << " ";
        std::cout << "Array: " << arr[i] << " " << std::endl;
    }
}

void SecPrintArr(int** arr, int n)
{
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
            if ((j % n == 0) or ((i == 0) & (j == 0)))
            {
                std::cout << std::endl;
            }
        }
    }
}

void combine(std::string in1File, std::string in2File, std::string outFile)
{
        std::ifstream in1(in1File);
        std::ifstream in2(in2File);
        std::ofstream out(outFile);
        if (!in1.is_open() || !in2.is_open() || !out.is_open())
            exit(EXIT_FAILURE);
        char ch;
        in1.get(ch);
        while (!in1.eof())
        {
            out << ch;
            in1.get(ch);
        }
        in2.get(ch);
        while (!in2.eof())
        {
            out << ch;
            in2.get(ch);
        }
}

int main()
{
    int a;
    std::string d;
    std::string e;
    std::string f;
    std::cout << "Enter array size: \n";
    std::cin >> a;
    if (a > 0)
    {
        printArr(array(a), a);
    }
    std::cout << "Second: " << std::endl;
    SecPrintArr(secArray(a), a);
    std::cout << std::endl;
    std::cout << "Third. Enter name: " << std::endl;
    std::string name;
    std::cin >> name;
    CreateFile(name);
    std::cout << "Third. Enter name 2: " << std::endl;
    std::cin >> name;
    CreateFile(name);
    std::cout << "Fourth. Enter file name a, b and  output" << std::endl;
    std::cin >> d;
    std::cin >> e;
    std::cin >> f;
    combine(d, e, f);
}

