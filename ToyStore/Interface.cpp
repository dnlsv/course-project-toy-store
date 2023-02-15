#include "Interface.h"

template<class T>
void Interface<T>::menu()
{
    int num;
    while (1)
    {
        system("cls");
        cout << "\tМАГАЗИН ИГРУШЕК" << endl << endl;
        cout << "1 - Конструкторы" << endl << "2 - Мягкие игрушки" << endl << "3 - Машинки" << endl << "4 - Роботы" << endl << "0 - Вернуться" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
        {
            Interface<Constructors> obj;
            obj.fun();
            break;
        }
        case 2:
        {
            Interface<SoftToys> obj1;
            obj1.fun();
            break;
        }
        case 3:
        {
            Interface<Cars> obj2;
            obj2.fun();
            break;
        }
        case 4:
        {
            Interface<Robots> obj3;
            obj3.fun();
            break;
        }
        case 0:
            return;
        }
    }
}

template<class T>
void Interface<T>::menuUser()
{
    int num;
    while (1)
    {
        system("cls");
        cout << "\tМАГАЗИН ИГРУШЕК" << endl << endl;
        cout << "1 - Конструкторы" << endl << "2 - Мягкие игрушки" << endl << "3 - Машинки" << endl << "4 - Роботы" << endl << "0 - Вернуться" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
        {
            Interface<Constructors> obj;
            obj.userFun();
            break;
        }
        case 2:
        {
            Interface<SoftToys> obj1;
            obj1.userFun();
            break;
        }
        case 3:
        {
            Interface<Cars> obj2;
            obj2.userFun();
            break;
        }
        case 4:
        {
            Interface<Robots> obj3;
            obj3.userFun();
            break;
        }
        case 0:
            return;
        }
    }
}

template <class T>
void Interface<T>::fun()
{
    List<T> obj;
    obj.readFromFile();
    int num;
    bool flag = true;
    while (flag)
    {
        system("cls");
        cout << T::getNameOfMenu() << endl << endl;
        cout << "1 - Добавить" << endl << "2 - Удалить" << endl << "3 - Просмотр" << endl << "4 - Редактировать" << endl 
            << "5 - Поиск" << endl << "0 - Вернуться" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
            this->addElement(obj);
            break;
        case 2:
            this->deleteElement(obj);
            break;
        case 3:
            this->viewElements(obj);
            system("pause");
            break;
        case 4:
            this->editElement(obj);
            break;
        case 5:
            this->searchElement(obj);
            break;
        case 0:
            flag = false;
            break;
        }
    }
        obj.writeToFile();
}

template <class T>
void Interface<T>::userFun()
{
    int number = 100;
    List<T> obj;
    obj.readFromFile();
    int num;
    bool flag = true;
    while (flag)
    {
        system("cls");
        cout << T::getNameOfMenu() << endl << endl;
        cout << "1 - Просмотр" << endl  << "2 - Поиск" << endl << "3 - Покупка" << endl << "0 - Вернуться" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
            this->viewElements(obj);
            system("pause");
            break;
        case 2:
            this->searchElement(obj);
            break;
        case 3:
            this->buyElement(obj);
            break;
        case 0:
            flag = false;
            break;
        }
    }
    obj.writeToFile();
}

template <class T>
void Interface<T>::buyElement(List<T>& obj)
{
    List<BuyToys> jj;
 
    BuyToys bb;
    int n;
    int count = obj.returnCount();
    if (count != 0)
    {
        jj.readFromFile();
        int num;
        viewElements(obj);
        cout << "Введите номер игрушки для покупки:" << endl;
        excessOfLimit(num, obj.returnCount());
        element = obj.getElement(num);
        bb.name_of_toys = element.getName();
        cout << "Введите количество игрушек для покупки:" << endl;
        validationCheck(n);
        bb.amount = n;
        cout << "Введите свой контактный номер телефона:" << endl;
        validationCheck(n);
        bb.number = n;
        cout << endl << "Игрушка куплена!" << endl << endl;
        jj.AddEnd(bb);
        jj.writeToFile();
    }
    else
        cout << endl << "\tДанных нет!" << endl << endl;
    system("pause");
}

template <class T>
void Interface<T>::addElement(List<T>& obj)
{
    cout << endl;
    validationCheck(element);
    //cin >> element;
    obj.AddEnd(element);
    cout << endl << "Запись добавлена!" << endl << endl;
    system("pause");
}

template <class T>
void Interface<T>::deleteElement(List<T>& obj)
{
    int count = obj.returnCount();
    if (count != 0)
    {
        int num;
        viewElements(obj);
        cout << "Введите номер записи для удаления:" << endl;
        excessOfLimit(num, obj.returnCount());
        obj.Del(num);
        cout << endl << "Запись удалена!" << endl << endl;
    }
    else
        cout << endl << "\tДанных нет!" << endl << endl;
    system("pause");
}

template <class T>
void Interface<T>::viewElements(List<T>& obj)
{
    element.tableCap();
    obj.View();
    cout << endl;
}

template <class T>
void Interface<T>::editElement(List<T>& obj)
{
    int count = obj.returnCount();
    if (count != 0)
    {
        int num;
        viewElements(obj);
        cout << "Введите номер записи для редактирования:" << endl;
        excessOfLimit(num, obj.returnCount());
        element = obj.getElement(num);
        element.edit();
        obj.Del(num);
        obj.Insert(num, element);
        cout << endl << "Запись отредактирована!" << endl << endl;
    }
    else
        cout << endl << "\tДанных нет!" << endl << endl;
    system("pause");
}

template <class T>
void Interface<T>::searchElement(List<T>& obj)
{
    int num, j = 0;
    T tmp;
    tmp = element.inputSearchField(num);
    element.tableCap();
    for (int i = 1; i < obj.returnCount() + 1; i++)
    {
        element = obj.getElement(i);
        if (element.search(tmp, num) == true)
            cout << " " << setw(2) << left << ++j << "|" << element;
    }
    if (j == 0)
        cout << endl << "\tНичего не найдено" << endl << endl;
    else
        cout << endl;
    system("pause");
}

template <class T>
void Interface<T>::administratorMenu()
{
    Interface<T> obj;
    int num;
    while (1)
    {
        system("cls");
        cout << "\tМОДУЛЬ АДМИНИСТРАТОРА" << endl << endl;
        cout << "1 - Работа с учетными записями" << endl << "2 - Работа с данными" << endl << "0 - Выход" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
            obj.fun();
            break;
        case 2:
            obj.menu();
            break;
        case 0:
            return;
        }
    }
}

template <class T>
void Interface<T>::selectionMenu()
{
    while (1)
    {
        element.firstAdmin();
        system("cls");
        cout << "\tВХОД В ПРОГРАММУ" << endl << endl;
        int num;
        cout << "1 - Авторизация" << endl << "2 - Регистрация" << endl << endl << "0 - Выход" << endl;
        validationCheck(num);
        switch (num)
        {
        case 1:
            system("cls");
            element.authorization();
            break;
        case 2:
            system("cls");
            element.registration();
            break;
        case 0:
            return;
        }
    }
}
