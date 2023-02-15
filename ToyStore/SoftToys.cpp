#include "SoftToys.h"

SoftToys::SoftToys() 
{
    form = "";
    color = "";
}

SoftToys::SoftToys(const SoftToys& ob)
{
    name = ob.name;
    price = ob.price;
    age_group = ob.age_group;
    country_producer = ob.country_producer;
    material = ob.material;
    purpose = ob.purpose;
    form = ob.form;
    color = ob.color;
}

void SoftToys::setForm(string buf)
{
    form = buf;
}

string SoftToys::getForm()
{
    return form;
}

void SoftToys::setColor(string buf)
{
    color = buf;
}

string SoftToys::getColor()
{
    return color;
}

istream& operator >> (istream& in, SoftToys& obj)
{
    in >> dynamic_cast<SimpleToys&>(obj);
    cout << "�����:" << endl;
    validationCheckStr(in, obj.form);
    //in >> obj.form;
    cout << "����:" << endl;
    validationCheckStr(in, obj.color);
    //in >> obj.color;
    return in;
}

ostream& operator << (ostream& out, SoftToys& obj)
{
    out << dynamic_cast <SimpleToys&>(obj);
    out << setw(12) << obj.form << "|" << setw(12) << obj.color << endl;
    return out;
}

ifstream& operator >> (ifstream& fin, SoftToys& obj)
{
    fin >> dynamic_cast<SimpleToys&>(obj);
    fin >> obj.form >> obj.color;
    return fin;
}

ofstream& operator << (ofstream& fout, SoftToys& obj)
{
    fout << dynamic_cast <SimpleToys&>(obj);
    fout << obj.form << " " << obj.color;
    return fout;
}

void SoftToys::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - ��������" << endl 
        << "2 - ����" << endl << "3 - ���������� ������" << endl << "4 - ������ �������������" << endl << "5 - ��������"
        << endl << "6 - ����������" << endl << "7 - �����" << endl << "8 - ����" << endl;
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
        cin >> material;
        break;
    case 6:
        cin >> purpose;
        break;
    case 7:
        cin >> form;
        break;
    case 8:
        cin >> color;
        break;
    }
}

SoftToys& SoftToys::inputSearchField(int& num)
{
    cout << endl << "\t����� ������ �����?" << endl << endl << "1 - ��������" << endl << "2 - ����" << endl
        << "3 - ���������� ������" << endl << "4 - ������ �������������" << endl << "5 - ��������"
        << endl << "6 - ����������" << endl << "7 - �����" << endl << "8 - ����" << endl;
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
        validationCheck(this->material);
        break;
    case 6:
        validationCheck(this->purpose);
        break;
    case 7:
        validationCheck(this->form);
        break;
    case 8:
        validationCheck(this->color);
        break;
    }
    return *this;
}

bool SoftToys::search(SoftToys& tmp, int num)
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
        if (this->form == tmp.form)
            return true;
        else
            break;
    case 8:
        if (this->color == tmp.color)
            return true;
        else
            break;
    }
    return false;
}

void SoftToys::tableCap()
{
    cout << endl << setw(3) << left << " �" << "|" << setw(11) << "��������" << "|" << setw(8) << "����" << "|" << setw(20) << "���������� ������"
        << "|" << setw(23) << "������ �������������" << "|"  << setw(11) << "��������" << "|" << setw(13) << "����������" 
        << "|" << setw(12) << "�����" << "|" << setw(12) << "����" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
}

string SoftToys::getNameOfClass()
{
    return SOFTTOYS;
}

string SoftToys::getNameOfMenu()
{
    return MODYL_OF_SOFTTOYS;
}