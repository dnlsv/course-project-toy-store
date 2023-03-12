#pragma once

#include <iostream>
#include <fstream>
#include <iomanip> //для setw

using namespace std;

template <class T>
struct Spis2
{
    T data; // данные
    Spis2<T>* next, * prev; //указатели на предыдущий и на следущий элементы двусвязного списка 
};

template <class T>
class List
{
private:
    Spis2<T>* begin, * end; //указатели на начало и конец двусвязного списка
    int count; //количество элементов списка
public:
    List(); //конструктор без параметров
    ~List(); //деструктор без параметров
    void Insert(int pos, T& tmp); //добавление элемента в позицию pos списка
    void AddEnd(T n); //добавление элемента в конец списка
    void AddBegin(T n); //добавление элемента в начало списка
    void DelAll(); //удаление всех элементов списка
    void Del(int pos = 0); //удаление элемента списка с позицией pos
    void View(); //просмотр элементов списка
    T& getElement(int pos); //метод возвращающий элемент списка с позицией pos
    void readFromFile(); //чтение даных из файла
    void writeToFile(); //запись данных в файл
    int returnCount(); //метод, возвращающий количество элементов списка
};
