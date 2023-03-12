#pragma once

#include "Toys.h"

class ElectronicToys :public Toys
{
protected:
    int scale; //масштаб
    int battery_capacity; //емкость батареи
public:
    ElectronicToys(); //конструктор без параметров
    ~ElectronicToys() {}; //деструктор без параметров
    void setScale(int buf); //метод, устанавливающий значение поля scale
    int getScale(); //метод, возвращающий значение поля scale
    void setBatteryCapacity(int buf); //метод, устанавливающий значение поля battery_capacity
    int getBatteryCapacity(); //метод, возвращающий значение поля battery_capacity
    friend istream& operator >> (istream& in, ElectronicToys& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, ElectronicToys& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, ElectronicToys& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, ElectronicToys& obj); //перегрузка оператора вывода для файла
};
