// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    const int d = 6, e = 4;
    int a;
    int b;
    int c;
    int f;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите 2 числа\n";
    std::cin >> a;
    std::cin >> b;
    c = a + b;
    if ((10 < c) && (c < 20))
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    if ((d == 10) and (e == 10) or (d + e == 10))
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    std::cout << "Цифры : ";
    for (int count = 1; count < 50; ++count)
        if (count % 2 != 0) std::cout << count << " ";
    std::cout << "\n";
    std::cout << "Введите число\n";
    std::cin >> f;
    for (int count = 2; count < f; ++count)
        if (f % count == 0) std::cout << "не простое ";
        else
        {
            std::cout << "простое ";
        }
}
