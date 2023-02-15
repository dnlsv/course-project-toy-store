#include "BuyToys.h"

ifstream& operator >> (ifstream& fin, BuyToys& obj)
{
    fin >> obj.name_of_toys >> obj.amount >> obj.number;
    return fin;
}

ofstream& operator << (ofstream& fout, BuyToys& obj)
{
    fout << obj.name_of_toys << " " << obj.amount << " " << obj.number;
    return fout;
}

string BuyToys::getNameOfClass()
{
    return BUYTOYS;
}