#include <iostream>

using namespace std;

bool isFileInput() {
	int answer;
	while (true)
	{
		cout << "���� ������ ����� � �����?\n1)��\n2)���\n";

		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "������ �������� ���! �������� ��� ���...\n";
			break;
		}
	}
}

bool isFileOutput() {
	int answer;
	while (true)
	{
		cout << "����� ������ ����� � ����?\n1)��\n2)���\n";

		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "������ �������� ���! �������� ��� ���...\n";
			break;
		}
	}
}

bool wanaRetry() 
{
	int answer;
	while (true)
	{
		cout << "������ ��������� ���� ������?\n1)��\n2)���\n";
		cin >> answer;

		switch (answer)
		{
		case 1:
			return true;
		case 2:
			return false;
		default:
			cout << "������ �������� ���! �������� ��� ���...\n";
			break;
		}
	}
}