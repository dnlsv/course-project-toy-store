#include "Purchase.h"

ifstream& operator >> (ifstream& fin, Purchase& obj)
{
    fin >> obj.name_of_toys >> obj.amount >> obj.phone_number;
    return fin;
}

ofstream& operator << (ofstream& fout, Purchase& obj)
{
    fout << obj.name_of_toys << " " << obj.amount << " " << obj.phone_number;
    return fout;
}

string Purchase::getNameOfClass()
{
    return PURCHASE;
}
