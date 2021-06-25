#include <iostream>

using namespace std;

bool isFileInput() {
	int answer;
	while (true)
	{
		cout << "Ввод данных будет с файла?\n1)Да\n2)Нет\n";

		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "Такого варианта нет! Попробуй еще раз...\n";
			break;
		}
	}
}

bool isFileOutput() {
	int answer;
	while (true)
	{
		cout << "Вывод данных будет в файл?\n1)Да\n2)Нет\n";

		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "Такого варианта нет! Попробуй еще раз...\n";
			break;
		}
	}
}

bool wanaRetry() 
{
	int answer;
	while (true)
	{
		cout << "Хотите повторить ввод данных?\n1)Да\n2)Нет\n";
		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "Такого варианта нет! Попробуй еще раз...\n";
			break;
		}
	}
}