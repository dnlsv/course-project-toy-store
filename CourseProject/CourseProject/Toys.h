#pragma once
#include <iostream>
#include <iomanip> //для setw
#include <fstream>

#include "Validation.cpp"

using namespace std;

class Toys
{
protected:
    string name; //название
    int price;
    int age_group; //возрастная группа
    string country_producer; //страна производитель
public:
    Toys(); //конструктор без параметров
    ~Toys() {}; //деструктор без параметров
    void setName(string buf); //метод, устанавливающий значение поля name
    string getName(); //метод, возвращающий значение поля name
    void setAgeGroup(int buf); //метод, устанавливающий значение поля age_group
    int getAgeGroup(); //метод, возвращающий значение поля age_group
    void setCountryProducer(string buf); //метод, устанавливающий значение поля country_producer
    string getCountryProducer(); //метод, возвращающий значение поля country_producer
    friend istream& operator >> (istream& in, Toys& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, Toys& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, Toys& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Toys& obj); //перегрузка оператора вывода для файла
};
