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
        cout << "�������" << endl << endl << "�����: ";
        in >> obj.login;
        cout << "������: ";
        in >> obj.password;
        cout << "����: ";
        in >> obj.role;
        if (obj.uniqueLogin(obj) == true)
            break;
        else
            cout << endl << "����� ����� ��� ����������! ������� ������" << endl << endl;
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
    cout << endl << "�������" << endl << endl << "�����: ";
    cin >> login;
    cout << "������: ";
    cin >> password;
}

void Users::edit()
{
    int num;
    cout << endl << "\t����� ������ ��������?" << endl << endl << "1 - �����" << endl << "2 - ������" << endl << "3 - ����" << endl;
    cin >> num;
    cout << endl << "\t������� ����� ������" << endl << endl;
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
    cout << endl << "\t����� ������ �����?" << endl << endl << "1 - �����" << endl << "2 - ������" << endl << "3 - ����" << endl;
    cin >> num;
    cout << endl << "\t������� ������" << endl << endl;
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
    cout << endl << setw(3) << left << " �" << "|" << setw(12) << "�����" << "|" << setw(12) << "������" << "|" << setw(12) << "����" << endl;
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
