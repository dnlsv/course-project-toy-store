#pragma once
#include "Toys.h"

class SimpleToys :public Toys
{
protected:
    string material; //материал
    string purpose; //назначение
public:
    SimpleToys(); //конструктор без параметров
    ~SimpleToys() {}; //деструктор без параметров
    void setMaterial(string buf); //метод, устанавливающий значение поля material
    string getMaterial(); //метод, возвращающий значение поля material
    void setPurpose(string buf); //метод, устанавливающий значение поля purpose
    string getPurpose(); //метод, возвращающий значение поля purpose
    friend istream& operator >> (istream& in, SimpleToys& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, SimpleToys& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, SimpleToys& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, SimpleToys& obj); //перегрузка оператора вывода для файла
};
