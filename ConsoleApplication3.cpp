// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
extern int a, b, c;

int main()
{
//	int a = 3;
//	int b = 4;
//	int c = 35;
	int d = 48;
	std::cout << (a * (b + (c / static_cast<float>(d)))) << std::endl;
	int e;
	std::cin >> e;
	if (e <= 21)
	{
		std::cout << (21 - e) << std::endl;
	}
	else
	{
		std::cout << ((e - 21) * 2) << std::endl;
	}
	e <= 21 ? std::cout << (21 - e) << std::endl : std::cout << ((e - 21) * 2) << std::endl;
	int array[3][3][3];
	array[1][1][1] = 50;
	int* p;
	p = &array[1][1][1];
	std::cout << *p;


}
