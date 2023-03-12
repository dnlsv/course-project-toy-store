#pragma once

#include "SimpleToys.h"

const string CONSTRUCTORS = "Constructors";
const string MODYL_OF_CONSTRUCTORS = "\tКОНСТРУКТОРЫ";

class Constructors :public SimpleToys
{
private:
    string brand; //бренд
    int number_of_details; //количество деталей
public:
    Constructors(); //конструктор без параметров
    ~Constructors() {}; //деструктор без параметров
    Constructors(const Constructors& ob); //конструктор копирования
    void setBrand(string buf); //метод, устанавливающий значение поля brand
    string getBrand(); //метод, возвращающий значение поля brand
    void setNumberOfDetails(int buf); //метод, устанавливающий значение поля number_of_details
    int getNumberOfDetails(); //метод, возвращающий значение поля number_of_details
    friend istream& operator >> (istream& in, Constructors& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, Constructors& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, Constructors& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Constructors& obj); //перегрузка оператора вывода для файла
    void edit(); //редактирование всех полей объекта
    bool search(Constructors&, int num); //поиск по полям объекта
    Constructors& inputSearchField(int& num); //ввод поля для поиска
    void tableCap(); //вывод на экран шапки таблицы
    static string getNameOfClass(); //метод, возвращающий имя класса
    static string getNameOfMenu(); //метод, возвращающий название меню
};
