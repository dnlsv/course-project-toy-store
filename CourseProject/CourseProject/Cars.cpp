#include "Cars.h"

Cars::Cars() 
{
    type_of_car = "";
    body_color = "";
}

Cars::Cars(const Cars& ob)
{
    name = ob.name;
    price = ob.price;
    age_group = ob.age_group;
    country_producer = ob.country_producer;
    scale = ob.scale;
    battery_capacity = ob.battery_capacity;
    type_of_car = ob.type_of_car;
    body_color = ob.body_color;
}

void Cars::setTypeOfCar(string buf)
{
    type_of_car = buf;
}

string Cars::getTypeOfCar()
{
    return type_of_car;
}

void Cars::setBodyColor(string buf)
{
    body_color = buf;
}

string Cars::getBodyColor()
{
    return body_color;
}

istream& operator >> (istream& in, Cars& obj)
{
    in >> dynamic_cast<ElectronicToys&>(obj);
    cout << "Тип авто:" << endl;
    validationCheckStr(in, obj.type_of_car);
    //in >> obj.type_of_car;
    cout << "Цвет корпуса:" << endl;
    validationCheckStr(in, obj.body_color);
    //in >> obj.body_color;
    return in;
}

ostream& operator << (ostream& out, Cars& obj)
{
    out << dynamic_cast <ElectronicToys&>(obj);
    out << setw(11) << obj.type_of_car << "|" << setw(15) << obj.body_color << endl;
    return out;
}

ifstream& operator >> (ifstream& fin, Cars& obj)
{
    fin >> dynamic_cast<ElectronicToys&>(obj);
    fin >> obj.type_of_car >> obj.body_color;
    return fin;
}

ofstream& operator << (ofstream& fout, Cars& obj)
{
    fout << dynamic_cast <ElectronicToys&>(obj);
    fout << obj.type_of_car << " " << obj.body_color;
    return fout;
}

void Cars::edit()
{
    int num;
    cout << endl << "\tКакие данные изменить?" << endl << endl << "1 - Название" << endl << "2 - Цена" << endl << "3 - Возрастная группа"
        << endl << "4 - Страна производитель" << endl << "5 - Масштаб" << endl << "6 - Емкость аккумулятора"
        << endl << "7 - Тип авто" << endl << "8 - Цвет корпуса" << endl;
    cin >> num;
    cout << endl << "\tВведите новые данные" << endl << endl;
    switch (num)
    {
    case 1:
        cin >> name;
        break;
    case 2:
        cin >> price;
        break;
    case 3:
        cin >> age_group;
        break;
    case 4:
        cin >> country_producer;
        break;
    case 5:
        cin >> scale;
        break;
    case 6:
        cin >> battery_capacity;
        break;
    case 7:
        cin >> type_of_car;
        break;
    case 8:
        cin >> body_color;
        break;
    }
}

Cars& Cars::inputSearchField(int& num)
{
    cout << endl << "\tКакие данные найти?" << endl << endl << "1 - Название" << endl << "2 - Цена" << endl << "3 - Возрастная группа"
        << endl << "4 - Страна производитель" << endl << "5 - Масштаб" << endl << "6 - Емкость аккумулятора"
        << endl << "7 - Тип авто" << endl << "8 - Цвет корпуса" << endl;
    cin >> num;
    cout << endl << "\tВведите данные" << endl << endl;
    switch (num)
    {
    case 1:
        validationCheck(this->name);
        break;
    case 2:
        validationCheck(this->price);
        break;
    case 3:
        validationCheck(this->age_group);
        break;
    case 4:
        validationCheck(this->country_producer);
        break;
    case 5:
        validationCheck(this->scale);
        break;
    case 6:
        validationCheck(this->battery_capacity);
        break;
    case 7:
        validationCheck(this->type_of_car);
        break;
    case 8:
        validationCheck(this->body_color);
        break;
    }
    return* this;
}

bool Cars::search(Cars& tmp, int num)
{
    switch (num)
    {
    case 1:
        if (this->name == tmp.name)
            return true;
        else
            break;
    case 2:
        if (this->price == tmp.price)
            return true;
        else
            break;
    case 3:
        if (this->age_group == tmp.age_group)
            return true;
        else
            break;
    case 4:
        if (this->country_producer == tmp.country_producer)
            return true;
        else
            break;
    case 5:       
        if (this->scale == tmp.scale)
            return true;
        else
            break;
    case 6:
        if (this->battery_capacity == tmp.battery_capacity)
            return true;
        else
            break;
    case 7:
        if (this->type_of_car == tmp.type_of_car)
            return true;
        else
            break;
    case 8:
        if (this->body_color == tmp.body_color)
            return true;
        else
            break;
    }
    return false;
}

void Cars::tableCap()
{
    cout << endl << setw(3) << left << " №" << "|" << setw(11) << "Название" << "|" << setw(8) << "Цена" << "|"
        << setw(20) << "Возрастная группа" << "|" << setw(23) << "Страна производитель" << "|" 
        << setw(10) << "Масштаб" << "|" << setw(18) << "Емкость батареи" << "|" 
        << setw(11) << "Тип авто" << "|" << setw(15)  << "Цвет корпуса" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------"<< endl;
}

string Cars::getNameOfClass()
{
    return CARS;
}

string Cars::getNameOfMenu()
{
    return MODYL_OF_CARS;
}

