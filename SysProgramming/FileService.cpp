#include <iostream>
#include <fstream>
#include <sstream>

#include<string>

using namespace std;

string ReadFile(string filePath)
{
    std::string line;
    fstream file;
    file.open(filePath, ios::in);
    if (!file) {
        cout << "No such file";
        return "";
    }

    char ch;
    while (true)
    {
        file >> ch;
        if (file.eof())
            break;
        line += ch;
    }

    file.close();
    return line;
}

void WriteInFile(string filePath, string value) {
    fstream file;
    file.open(filePath, ios::out);
    if (!file) {
        cout << "File not created!\n";
        return;
    }

    file << value;

    file.close();
}