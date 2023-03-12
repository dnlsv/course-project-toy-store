#include "Users.h"

Users::Users()
{
    login = "";
    password = "";
    role = 0;
}

Users::Users(const Users& ob)
{
    login = ob.login;
    password = ob.password;
    role = ob.role;
}

void Users::setLogin(string buf)
{
    login = buf;
}

string Users::getLogin()
{
    return login;
}

void Users::setPassword(string buf)
{
    password = buf;
}

string Users::getPassword()
{
    return password;
}

void Users::setRole(bool buf)
{
    role = buf;
}
bool Users::getRole()
{
    return role;
}

istream& operator >> (istream& in, Users& obj)
{
    while (1)
    {
        cout << "Введите" << endl << endl << "Логин: ";
        in >> obj.login;
        cout << "Пароль: ";
        in >> obj.password;
        cout << "Роль: ";
        in >> obj.role;
        if (obj.uniqueLogin(obj) == true)
            break;
        else
            cout << endl << "Такой логин уже существует! Введите другой" << endl << endl;
    }
    return in;
}

ostream& operator << (ostream& out, Users& obj)
{
    out << setw(12) << obj.login << "|" << setw(12) << obj.password << "|" << setw(12) << obj.role << endl;
    return out;
}

ifstream& operator >> (ifstream& fin, Users& obj)
{
    fin >> obj.login >> obj.password >> obj.role;
    return fin;
}

ofstream& operator << (ofstream& fout, Users& obj)
{
    fout << obj.login << " " << obj.password << " " << obj.role;
    return fout;
}

void Users::inputUserData()
{
    cout << endl << "Введите" << endl << endl << "Логин: ";
    cin >> login;
    cout << "Пароль: ";
    cin >> password;
}

void Users::edit()
{
    int num;
    cout << endl << "\tКакие данные изменить?" << endl << endl << "1 - Логин" << endl << "2 - Пароль" << endl << "3 - Роль" << endl;
    cin >> num;
    cout << endl << "\tВведите новые данные" << endl << endl;
    switch (num)
    {
    case 1:
        cin >> login;
        break;
    case 2:
        cin >> password;
        break;
    case 3:
        cin >> role;
        break;
    }
}

Users& Users::inputSearchField(int& num)
{
    cout << endl << "\tКакие данные найти?" << endl << endl << "1 - Логин" << endl << "2 - Пароль" << endl << "3 - Роль" << endl;
    cin >> num;
    cout << endl << "\tВведите данные" << endl << endl;
    switch (num)
    {
    case 1:
        validationCheck(this->login);
        break;
    case 2:
        validationCheck(this->password);
        break;
    case 3:
        validationCheck(this->role);
        break;
    }
    return *this;
}

bool Users::search(Users& tmp, int num)
{
    switch (num)
    {
    case 1:
        if (this->login == tmp.login)
            return true;
        else
            break;
    case 2:
        if (this->password == tmp.password)
            return true;
        else
            break;
    case 3:
        if (this->role == tmp.role)
            return true;
        else
            break;
    }
    return false;
}

void Users::tableCap()
{
    cout << endl << setw(3) << left << " №" << "|" << setw(12) << "Логин" << "|" << setw(12) << "Пароль" << "|" << setw(12) << "Роль" << endl;
    cout << "-----------------------------------" << endl;
}

string Users::getNameOfClass()
{
    return USERS;
}

string Users::getNameOfMenu()
{
    return MODYL_OF_ACCOUNTS;
}

bool Users::uniqueLogin(Users el)
{
    bool flag = true;
    List<Users> tmp;
    tmp.readFromFile();
    Users element;
    for (int i = 1; i < tmp.returnCount() + 1; i++)
    {
        element = tmp.getElement(i);
        if (element.getLogin() == el.getLogin())
            flag = false;
    }
    return flag;
}
