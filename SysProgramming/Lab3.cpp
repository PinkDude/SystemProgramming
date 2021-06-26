#include "InputOutputHelper.h"
#include "FileService.h"
#include "constants.h"
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string input(bool isFile);
string getInputFilePath();
void output(bool isFile, int number);
string getOutputFilePath();

void Lab3(int shift) {
	while (true)
	{
		bool isFileIn = isFileInput();
		bool isFileOut = isFileOutput();

		string str = input(isFileIn);
		int n = stoi(str);

		n = n >> shift;

		output(isFileOut, n);

		if (!isFileIn && wanaRetry()) {
			continue;
		}
		return;
	}
}

string input(bool isFile) {
	if (isFile) {
		string filePath = getInputFilePath();

		string str = ReadFile(filePath);
		return str;
	}
	else {
		cout << "¬ведите число: ";
		string str;
		cin >> str;
		return str;
	}
}

string getInputFilePath() {
	string filePath;
	cout << "¬ведите путь до файла ввода (или введите '-' дл€ дефолтного пути): ";
	cin >> filePath;

	if (filePath == "-")
		filePath = fileInputPathLab2;

	return filePath;
}

void output(bool isFile, int number) {
	if (isFile) {
		string filePath = getOutputFilePath();
		string result = "Number is " + number;
		WriteInFile(filePath, result);
	}
	else {
		cout << "–езультат:\n";
		cout << number;
	}
}

string getOutputFilePath() {
	string filePath;
	cout << "¬ведите путь до файла вывода (или введите '-' дл€ дефолтного пути): ";
	cin >> filePath;

	if (filePath == "-")
		filePath = fileOutputPathLab2;

	return filePath;
}