#pragma once
#include <string>
using namespace std;

#ifndef FILESERVICE_H
#define FILESERVICE_H
string ReadFile(string filePath);
void WriteInFile(string filePath, string value);
#endif 