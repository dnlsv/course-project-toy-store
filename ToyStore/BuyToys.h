#pragma once
#include<iostream>
#include<fstream>

using namespace std;

const string BUYTOYS = "BuyToys";

class BuyToys
{
public:
	string name_of_toys;
	int amount;
	int number;
	friend ifstream& operator >> (ifstream& fin, BuyToys& obj); //перегрузка оператора ввода для файла
	friend ofstream& operator << (ofstream& fout, BuyToys& obj); //перегрузка оператора вывода для файла
	static string getNameOfClass(); //метод, возвращающий имя класса
};