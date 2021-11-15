// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum game
{
	plus,
	nul,
	empty
};

struct xornul
{
	char x;
	int nul;
	int arr[0];
};

int main()
{
	unsigned int a = 10;
	int b = 20;
	long c = 30;
	short int d = 50;
	long long e = 60;
	game array[3];
	array[0] = game::empty;
	array[1] = game::nul;
	array[2] = game::plus;
		
}
