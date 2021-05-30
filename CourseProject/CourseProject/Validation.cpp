#include "Validation.h"

template <class T>
void validationCheck(T& temp)
{
    while (true) {
        cin >> temp;
        if (cin.get() == '\n')
            break;
        else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << endl << "Некорректный ввод!" << endl << endl;
        }
    }
}

template <class T>
void excessOfLimit(T& temp, int count)
{

    while (1)
    {
        validationCheck(temp);
        if (temp > 0 && temp <= count)
            break;
        else
            cout << endl << "Некорректный ввод!" << endl << endl;
    }
}

template <class T>
void validationCheckField(istream& in, T& temp)
{
    while (true) {
        in >> temp;
        if (in.get() == '\n')
            break;
        else {
            in.clear();
            in.ignore(256, '\n');
            cout << endl << "Некорректный ввод!" << endl << endl;
        }
    }
}

template <class T>
void validationCheckStr(istream& in, T& temp)
{
    int count;
    while (true) {
        count = 0;
        in >> temp;
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] >= 'а' && temp[i] <= 'я' || temp[i] >= 'А' && temp[i] <= 'Я')
                count++;
        }
        if (count == temp.length())
            break;
        else
            cout << endl << "Некорректный ввод!" << endl << endl;
    }
}