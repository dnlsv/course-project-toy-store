#include "Constructors.h"

Constructors::Constructors()
{
    brand = "";
    number_of_details = 0;
}

Constructors::Constructors(const Constructors& ob)
{
    name = ob.name;
    price = ob.price;
    age_group = ob.age_group;
    country_producer = ob.country_producer;
    material = ob.material;
    purpose = ob.purpose;
    brand = ob.brand;
    number_of_details = ob.number_of_details;
}

void Constructors::setBrand(string buf)
{
    brand = buf;
}

string Constructors::getBrand()
{
    return brand;
}

void Constructors::setNumberOfDetails(int buf)
{
    number_of_details = buf;
}

int Constructors::getNumberOfDetails()
{
    return number_of_details;
}

istream& operator >> (istream& in, Constructors& obj)
{
    in >> dynamic_cast<SimpleToys&>(obj);
    cout << "Бренд:" << endl;
    validationCheckStr(in, obj.brand);
    //in >> obj.brand;
    cout << "Количество деталей:" << endl;
    validationCheckField(in, obj.number_of_details);
    //in >> obj.number_of_details;
    return in;
}

ostream& operator << (ostream& out, Constructors& obj)
{
    out << dynamic_cast <SimpleToys&>(obj);
    out << setw(12)  << obj.brand << "|" <<  setw(21) << obj.number_of_details << endl;
    return out;
}

ifstream& operator >> (ifstream& fin, Constructors& obj)
{
    fin >> dynamic_cast<SimpleToys&>(obj);
    fin >> obj.brand >> obj.number_of_details;
    return fin;
}

ofstream& operator << (ofstream& fout, Constructors& obj)
{
    fout << dynamic_cast <SimpleToys&>(obj);
    fout << obj.brand << " " << obj.number_of_details;
    return fout;
}

void Constructors::edit()
{
    int num;
    cout << endl << "\tКакие данные изменить?" << endl << endl << "1 - Название" << endl << "2 - Цена" << endl << "3 - Возрастная группа" << endl << "4 - Страна производитель" << endl
        << "5 - Материал" << endl << "6 - Назначение" << endl << "7 - Бренд" << endl << "8 - Количество деталей" << endl;
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
        cin >> material;
        break;
    case 6:
        cin >> purpose;
        break;
    case 7:
        cin >> brand;
        break;
    case 8:
        cin >> number_of_details;
        break;
    }
}

Constructors& Constructors::inputSearchField(int& num)
{
    cout << endl << "\tКакие данные найти?" << endl << endl << "1 - Название" << endl << "2 - Цена" << endl
        << "3 - Возрастная группа" << endl << "4 - Страна производитель" << endl << "5 - Материал" << endl 
        << "6 - Назначение" << endl << "7 - Бренд" << endl << "8 - Количество деталей" << endl;
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
        validationCheck(this->material);
        break;
    case 6:
        validationCheck(this->purpose);
        break;
    case 7:
        validationCheck(this->brand);
        break;
    case 8:
        validationCheck(this->number_of_details);
        break;
    }
    return *this;
}

bool Constructors::search(Constructors& tmp, int num)
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
        if (this->material == tmp.material)
            return true;
        else
            break;
    case 6:
        if (this->purpose == tmp.purpose)
            return true;
        else
            break;
    case 7:
        if (this->brand == tmp.brand)
            return true;
        else
            break;
    case 8:
        if (this->number_of_details == tmp.number_of_details)
            return true;
        else
            break;
    }
    return false;
}

void Constructors::tableCap()
{
    cout << endl << setw(3) << left << " №" << "|" << setw(11) << "Название" << "|" << setw(8) << "Цена" << "|" << setw(20) << "Возрастная группа" << "|"
        << setw(23) << "Страна производитель" << "|" << setw(11) << "Материал" << "|" << setw(13) << "Назначение" << "|" 
        << setw(12) << "Бренд" << "|" << setw(21) << "Количество деталей" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
}

string Constructors::getNameOfClass()
{
    return CONSTRUCTORS;
}

string Constructors::getNameOfMenu()
{
    return MODYL_OF_CONSTRUCTORS;
}

