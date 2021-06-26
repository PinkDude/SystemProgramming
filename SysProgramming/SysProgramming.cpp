// SysProgramming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "FileService.h"
#include "Lab1.h"
#include "Lab2.h"
#include "Lab3.h"

using namespace std;

void writeLabs();
bool chooseLab(int labNumber, char* argv[]);

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int answer;
	while (true)
	{
		cout << "Введите номер лабораторной работы:\n";
		writeLabs();

		cin >> answer;

		bool isExit = chooseLab(answer, argv);
		if (isExit)
			return 0;
	}
}

void writeLabs()
{
	cout << "1) Лабораторная работа №1\n";
	cout << "2) Лабораторная работа №2\n";
	cout << "3) Лабораторная работа №3\n";
	cout << "0) Выход из программы\n";
}

bool chooseLab(int labNumber, char* argv[])
{
	switch (labNumber)
	{
	case 1:
		Lab1();
		break;
	case 2:
		Lab2();
		break;
	case 3:
		Lab3((int)argv[0]);
		break;
	case 0:
		return true;
	default:
		cout << "Такой лабораторной работы нет! Попробуй еще раз...\n";
		break;
	}
	return false;
}
