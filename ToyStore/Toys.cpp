#include "Toys.h"

Toys::Toys()
{
    name = "";
    price = 0;
    age_group = 0;
    country_producer = "";
}

void Toys::setName(string buf)
{
    name = buf;
}

string Toys::getName()
{
    return name;
}

void Toys::setAgeGroup(int buf)
{
    age_group = buf;
}

int Toys::getAgeGroup()
{
    return age_group;
}

void Toys::setCountryProducer(string buf)
{
    country_producer = buf;
}

string Toys::getCountryProducer()
{
    return country_producer;
}

istream& operator >> (istream& in, Toys& obj)
{
    cout << "\tВведите" << endl << endl << "Название:" << endl;
    validationCheckStr(in, obj.name);
    //in >> obj.name;
    cout << "Цена:" << endl;
    validationCheckField(in, obj.price);
    //in >> obj.price;
    cout << "Возрастная группа:" << endl;
    validationCheckField(in, obj.age_group);
    //in >> obj.age_group;
    cout << "Страна производитель:" << endl;
    validationCheckStr(in, obj.country_producer);
    //in >> obj.country_producer;
    return in;
}

ostream& operator << (ostream& out, Toys& obj)
{
    out << setw(11) << obj.name << "|" << setw(8) << obj.price << "|" << setw(20) << obj.age_group << "|" << setw(23) << obj.country_producer << "|";
    return out;
}

ifstream& operator >> (ifstream& fin, Toys& obj)
{
    fin >> obj.name >> obj.price >> obj.age_group >> obj.country_producer;
    return fin;
}

ofstream& operator << (ofstream& fout, Toys& obj)
{
    fout << obj.name << " " << obj.price << " " << obj.age_group << " " << obj.country_producer << " ";
    return fout;
}
