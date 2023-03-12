#pragma once

#include "List.cpp"
#include "Constructors.h"
#include "Cars.h"
#include "Robots.h"
#include "SoftToys.h"
#include "Purchase.h"

template <class T>
class Interface
{
private:
    T element;
public:
    Interface() {}; //конструктор без параметров
    ~Interface() {}; //деструктор без параметров
    void menu(); //меню выбора данных для работы с ними
    void fun(); //меню работы с данными выбранного типа
    void userMenu(); //меню выбора данных пользователя для работы с ними
    void userFun(); //меню работы с данными выбранного типа для пользователя
    void addElement(List<T>& obj); //добавление элемента
    void deleteElement(List<T>& obj); //удаление елемента
    void viewElements(List<T>& obj); //просмотр таблицы элементов
    void editElement(List<T>& obj); //редактирование елемента
    void searchElement(List<T>& obj); //поиск элемента
    void buyElement(List<T>& obj); //покупка элемента
    void selectionMenu(); //меню выбора между авторизацией и регистрацией
    void administratorMenu(); //меню администратора для выбора данных, с которыми он будет работать
};
