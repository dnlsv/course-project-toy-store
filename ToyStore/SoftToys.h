#pragma once
#include "SimpleToys.h"

const string SOFTTOYS = "SoftToys";
const string MODYL_OF_SOFTTOYS = "\tМЯГКИЕ ИГРУШКИ";

class SoftToys :public SimpleToys
{
private:
    string form; //форма
    string color; //цвет
public:
    SoftToys(); //конструктор без параметров
    ~SoftToys() {}; //деструктор без параметров
    SoftToys(const SoftToys& ob); //конструктор копирования
    void setForm(string buf); //метод, устанавливающий значение поля form
    string getForm(); //метод, возвращающий значение поля form
    void setColor(string buf); //метод, устанавливающий значение поля color
    string getColor(); //метод, возвращающий значение поля color
    friend istream& operator >> (istream& in, SoftToys& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, SoftToys& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, SoftToys& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, SoftToys& obj); //перегрузка оператора вывода для файла
    void edit(); //редактирование всех полей объекта  
    bool search(SoftToys&, int num); //поиск по полям объекта
    SoftToys& inputSearchField(int& num); //ввод поля для поиска
    void tableCap(); //вывод на экран шапки таблицы
    static string getNameOfClass(); //метод, возвращающий имя класса
    static string getNameOfMenu(); //метод, возвращающий название меню
};
