#pragma once

#include "ElectronicToys.h"

const string CARS = "Cars";
const string MODYL_OF_CARS = "\tМАШИНКИ";

class Cars :public ElectronicToys
{
private:
    string type_of_car; //тип авто
    string body_color; //цвет корпуса
public:
    Cars(); //конструктор без параметров
    ~Cars() {}; //деструктор без параметров
    Cars(const Cars& ob); //конструктор копирования
    void setTypeOfCar(string buf); //метод, устанавливающий значение поля type_of_car
    string getTypeOfCar(); //метод, возвращающий значение поля type_of_car
    void setBodyColor(string buf); //метод, устанавливающий значение поля body_color
    string getBodyColor(); //метод, возвращающий значение поля body_color
    friend istream& operator >> (istream& in, Cars& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, Cars& obj); //перегрузка оператора вывода
    friend ifstream& operator >> (ifstream& fin, Cars& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Cars& obj); //перегрузка оператора вывода для файла
    void edit(); //редактирование всех полей объекта
    bool search(Cars&, int num); //поиск по полям объекта
    Cars& inputSearchField(int& num); //ввод поля для поиска
    void tableCap(); //вывод на экран шапки таблицы
    static string getNameOfClass(); //метод, возвращающий имя класса
    static string getNameOfMenu(); //метод, возвращающий название меню
};
