#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

struct Age {
	int age;
};

struct Sex {
  string sex;
};

struct Education {
	string edu;
};

struct Answer {
	string ans;
};

struct Data {
	Age _age;
	Sex _sex;
	Education _edu;
	Answer _ans;
};

void DataEntry(Data* (&d), int &n);
void Print(Data* d, int n);
void DataChange(Data* (&d), int n);
void DataFind(Data* d, int n);
void AddData(Data* (&d), int &n);
void DeleteData(Data* (&d), int& n);
void Copy(Data& d_n, Data& d_o);
void Copy(Data* (&d_n), Data* (&d_o), int n);
