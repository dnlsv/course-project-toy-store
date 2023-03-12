#pragma once

#include "ElectronicToys.h"

const string ROBOTS = "Robots";
const string MODYL_OF_ROBOTS = "\tРОБОТЫ";

class Robots :public ElectronicToys
{
private:
    string sensors; //датчики
    string character; //персонаж(вид робота)
public:
    Robots(); //конструктор без параметров
    ~Robots() {}; //деструктор без параметров
    Robots(const Robots& ob); //конструктор копирования
    void setSensors(string buf); //метод, устанавливающий значение поля sensors
    string getSensors(); //метод, возвращающий значение поля sensors
    void setCharacter(string buf); //метод, устанавливающий значение поля character
    string getCharacter(); //метод, возвращающий значение поля character
    friend istream& operator >> (istream& in, Robots& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, Robots& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, Robots& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Robots& obj); //перегрузка оператора вывода для файла
    void edit(); //редактирование всех полей объекта
    bool search(Robots&, int num); //поиск по полям объекта
    Robots& inputSearchField(int& num); //ввод поля для поиска
    void tableCap(); //вывод на экран шапки таблицы
    static string getNameOfClass(); //метод, возвращающий имя класса
    static string getNameOfMenu(); //метод, возвращающий название меню
};
