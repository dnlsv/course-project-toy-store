#include "Robots.h"

Robots::Robots()
{
    sensors = "";
    character = "";
}

Robots::Robots(const Robots& ob)
{
    name = ob.name;
    price = ob.price;
    age_group = ob.age_group;
    country_producer = ob.country_producer;
    scale = ob.scale;
    battery_capacity = ob.battery_capacity;
    sensors = ob.sensors;
    character = ob.character;
}

void Robots::setSensors(string buf)
{
    sensors = buf;
}

string Robots::getSensors()
{
    return sensors;
}

void Robots::setCharacter(string buf)
{
    character = buf;
}

string Robots::getCharacter()
{
    return character;
}

istream& operator >> (istream& in, Robots& obj)
{
    in >> dynamic_cast<ElectronicToys&>(obj);
    cout << "�������:" << endl;
    validationCheckStr(in, obj.sensors);
    //in >> obj.sensors;
    cout << "�������� (��� ������):" << endl;
    validationCheckStr(in, obj.character);
    //in >> obj.character;
    return in;
}

ostream& operator << (ostream& out, Robots& obj)
{
    out << dynamic_cast <ElectronicToys&>(obj);
    out << setw(10) << obj.sensors << "|" << setw(11) << obj.character << endl;
    return out;
}

ifstream& operator >> (ifstream& fin, Robots& obj)
{
    fin >> dynamic_cast<ElectronicToys&>(obj);
    fin >> obj.sensors >> obj.character;
    return fin;
}

ofstream& operator << (ofstream& fout, Robots& obj)
{
    fout << dynamic_cast <ElectronicToys&>(obj);
    fout << obj.sensors << " " << obj.character;
    return fout;
}

void Robots::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - ��������" << endl << "2 - ����" << endl << "3 - ���������� ������"
        << endl << "4 - ������ �������������" << endl << "5 - �������" << endl << "6 - ������� ������������"
        << endl << "7 - �������" << endl << "8 - ��������" << endl;
    cin >> num;
    cout << endl << "\t������� ����� ������" << endl << endl;
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
        cin >> sensors;
        break;
    case 8:
        cin >> character;
        break;
    }
}

Robots& Robots::inputSearchField(int& num)
{
    cout << endl << "\t����� ������ �����?" << endl << endl << "1 - ��������" << endl << "2 - ����" << endl << "3 - ���������� ������"
        << endl << "4 - ������ �������������" << endl << "5 - �������" << endl << "6 - ������� ������������"
        << endl << "7 - �������" << endl << "8 - ��������" << endl;
    cin >> num;
    cout << endl << "\t������� ������" << endl << endl;
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
        validationCheck(this->sensors);
        break;
    case 8:
        validationCheck(this->character);
        break;
    }
    return *this;
}

bool Robots::search(Robots& tmp, int num)
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
        if (this->sensors == tmp.sensors)
            return true;
        else
            break;
    case 8:
        if (this->character == tmp.character)
            return true;
        else
            break;
    }
    return false;
}

void Robots::tableCap()
{
    cout << endl << setw(3) << left << " �" << "|" << setw(11) << "��������" << "|" << setw(8) << "����" << "|" << setw(20) << "���������� ������"
        << "|" << setw(23) << "������ �������������" << "|" << setw(10) << "�������" << "|" << setw(18) 
        << "������� �������" << "|" << setw(10) << "�������" << "|" << setw(11) << "��������" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
}

string Robots::getNameOfClass()
{
    return ROBOTS;
}

string Robots::getNameOfMenu()
{
    return MODYL_OF_ROBOTS;
}