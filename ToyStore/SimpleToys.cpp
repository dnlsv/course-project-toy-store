#include "SimpleToys.h"

SimpleToys::SimpleToys()
{
    material = "";
    purpose = "";
}

void SimpleToys::setMaterial(string buf)
{
    material = buf;
}

string SimpleToys::getMaterial()
{
    return material;
}

void SimpleToys::setPurpose(string buf)
{
    purpose = buf;
}

string SimpleToys::getPurpose()
{
    return purpose;
}

istream& operator >> (istream& in, SimpleToys& obj)
{
    in >> dynamic_cast<Toys&>(obj);
    cout << "Материал:" << endl;
    validationCheckStr(in, obj.material);
    //in >> obj.material;
    cout << "Назначение:" << endl;
    validationCheckStr(in, obj.purpose);
    //in >> obj.purpose;
    return in;
}

ostream& operator << (ostream& out, SimpleToys& obj)
{
    out << dynamic_cast <Toys&>(obj);
    out << setw(11) << obj.material << "|" << setw(13) << obj.purpose << "|";
    return out;
}

ifstream& operator >> (ifstream& fin, SimpleToys& obj)
{
    fin >> dynamic_cast<Toys&>(obj);
    fin >> obj.material >> obj.purpose;
    return fin;
}

ofstream& operator << (ofstream& fout, SimpleToys& obj)
{
    fout << dynamic_cast <Toys&>(obj);
    fout << obj.material << " " << obj.purpose << " ";
    return fout;
}
