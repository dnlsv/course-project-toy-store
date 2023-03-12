#pragma once

#include <iostream>
#include <fstream>

using namespace std;

const string PURCHASE = "Purchase";

class Purchase
{
public:
    string name_of_toys;
    int amount;
    int phone_number;
    friend ifstream& operator >> (ifstream& fin, Purchase& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Purchase& obj); //перегрузка оператора вывода для файла
    static string getNameOfClass(); //метод, возвращающий имя класса
};
