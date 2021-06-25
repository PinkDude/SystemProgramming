#include "InputOutputHelper.h"
#include "FileService.h"
#include "constants.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int input(bool isFile);
void output(bool isFile, vector<int> arr);

void Lab1() {
	while (true)
	{
		bool isFileIn = isFileInput();
		bool isFileOut = isFileOutput();

		int n = input(isFileIn);

		vector<int> bs;

		for (int i = 0; i < n; i++)
		{
			bs.push_back(i + 1);
		}

		output(isFileOut, bs);

		if (!isFileIn && wanaRetry()) {
			continue;
		}
		return;
	}
}

int input(bool isFile) {
	int n{};

	if (isFile) {
		string nStr = ReadFile(fileInputPathLab1);
		n = stoi(nStr);
	}
	else {
		cout << "Введите n: ";
		cin >> n;
	}

	return n;
}

void output(bool isFile, vector<int> arr) {
	string values = "";
	stringstream ss;

	for (int i = 0; i < arr.size(); i++) {
		ss << "b" << i + 1 << " = " << arr[i] << endl;
	}
	values += ss.str();

	if (isFile) {
		WriteInFile(fileOutputPathLab1, values);
	}
	else {
		cout << "Результа\n";
		cout << values;
	}
}