#include "ElectronicToys.h"

ElectronicToys::ElectronicToys()
{
    scale = 0;
    battery_capacity = 0;
}

void ElectronicToys::setScale(int buf)
{
    scale = buf;
}

int ElectronicToys::getScale()
{
    return scale;
}

void ElectronicToys::setBatteryCapacity(int buf)
{
    battery_capacity = buf;
}

int ElectronicToys::getBatteryCapacity()
{
    return battery_capacity;
}

istream& operator >> (istream& in, ElectronicToys& obj)
{
    in >> dynamic_cast<Toys&>(obj);
    cout << "Масштаб:" << endl;
    validationCheckField(in, obj.scale);
    //in >> obj.scale;
    cout << "Емкость батареи:" << endl;
    validationCheckField(in, obj.battery_capacity);
    //in >> obj.battery_capacity;
    return in;
}

ostream& operator << (ostream& out, ElectronicToys& obj)
{
    out << dynamic_cast <Toys&>(obj);
    out << setw(10) << obj.scale << "|" << setw(18) << obj.battery_capacity << "|";
    return out;
}

ifstream& operator >> (ifstream& fin, ElectronicToys& obj)
{
    fin >> dynamic_cast<Toys&>(obj);
    fin >> obj.scale >> obj.battery_capacity;
    return fin;
}

ofstream& operator << (ofstream& fout, ElectronicToys& obj)
{
    fout << dynamic_cast <Toys&>(obj);
    fout << obj.scale << " " << obj.battery_capacity << " ";
    return fout;
}