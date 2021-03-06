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
void output(bool isFile, bool isHave);
string getOutputFilePath();

void Lab2() {
	while (true)
	{
		bool isFileIn = isFileInput();
		bool isFileOut = isFileOutput();

		string str = input(isFileIn);

		bool result = false;

		for (int i = 1; i < str.size(); i++) {
			if (str[i] == '-' && str[i-1] == ',') {
				result = true;
				break;
			}
		}

		output(isFileOut, result);

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
		cout << "??????? ??????: ";
		string str;
		cin >> str;
		return str;
	}
}

string getInputFilePath() {
	string filePath;
	cout << "??????? ???? ?? ????? ????? (??? ??????? '-' ??? ?????????? ????): ";
	cin >> filePath;

	if (filePath == "-")
		filePath = fileInputPathLab2;

	return filePath;
}

void output(bool isFile, bool isHave) {
	string answer;
	if (isHave) {
		answer = "There is a sequence ',-'\n";
	}
	else {
		answer = "Sequence ',-' is not found\n";
	}
	if (isFile) {
		string filePath = getOutputFilePath();
		WriteInFile(filePath, answer);
	}
	else {
		cout << "?????????:\n";
		cout << answer;
	}
}

string getOutputFilePath() {
	string filePath;
	cout << "??????? ???? ?? ????? ?????? (??? ??????? '-' ??? ?????????? ????): ";
	cin >> filePath;

	if (filePath == "-")
		filePath = fileOutputPathLab2;

	return filePath;
}