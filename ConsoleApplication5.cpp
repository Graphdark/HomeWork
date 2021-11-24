// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void function(double numbers[], int count);

void func(int array2[])
{
    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            array2[i] = 1;
        }
        else
        {
            array2[i] = array2[i - 1] + 3;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;
}

void mirror(int array[])
{
    std::cout << "До: \n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "После: \n";
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 1)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    double array[] = { 3.51, 33.7, 55.1 };
    function(array, 3);
    int array1[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    mirror(array1);
    std::cout << std::endl;
    int array3[8];
    func(array3);
}

void function(double numbers[], int count)
{
    for (int i = 0; i < count; i++)
        std::cout << numbers[i]<<" \n";
}
