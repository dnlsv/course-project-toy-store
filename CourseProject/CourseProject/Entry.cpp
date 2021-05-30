#include "Entry.h"

void Entry::authorization()
{
    cout << "\tАВТОРИЗАЦИЯ" << endl << endl;
    Interface<Users> obj;
    List<Users> tmp;
    Users element;
    string log, pas;
    bool flag = false;

    cout << "Логин: ";
    cin >> log;
    cout << endl << "Пароль: ";
    pas = maskingPassword();

    tmp.readFromFile();
    for (int i = 1; i < tmp.returnCount() + 1; i++)
    {
        element = tmp.getElement(i);
        if (log == element.getLogin() && pas == element.getPassword() && element.getRole() == 1)
        {
            obj.administratorMenu();
            flag = true;
        }
        if (log == element.getLogin() && pas == element.getPassword() && element.getRole() == 0)
        {
            obj.menuUser();
            flag = true;
        }
    }

    if (flag == false)
    {
        cout << endl << endl << "Неверный логин или пароль!" << endl << endl;
        system("pause");
    }
}

void Entry::firstAdmin()
{
    List<Users> tmp;
    Users element;
    string log, pas;
    int count = 0;

    tmp.readFromFile();
    for (int i = 1; i < tmp.returnCount() + 1; i++)
    {
        element = tmp.getElement(i);
        if (element.getRole() == 1)
            count++;
    }
    if (count == 0)
    {
        element.setLogin(KEYWORD);
        element.setPassword(KEYWORD);
        element.setRole(1);
        tmp.AddEnd(element);
        tmp.writeToFile();
    }
}

void Entry::registration()
{
    cout << "\tРЕГИСТРАЦИЯ" << endl;
    Interface<Users> obj;
    List<Users> tmp;
    Users element;
    tmp.readFromFile();
    while (1)
    {
        element.inputUserData();
        element.setRole(0);
        if (element.uniqueLogin(element) == true)
            break;
        else
            cout << endl << "Такой логин уже существует! Введите другой" << endl << endl;
    }
    tmp.AddEnd(element);
    tmp.writeToFile();
    cout << endl << "Учетная запись зарегистрирована!" << endl << endl;
    system("pause");
}

string Entry::maskingPassword()
{
    string pas;
    char c;
    int j = 0;
    char* arr = new char[RESERVESIZE];

    while ((c = _getch()) != '\r')
    {
        arr[j] = c;
        _putch('*');
        j++;
    }
    arr[j++] = '\0';

    string str(arr);
    str = arr;
    pas = str;

    delete[]arr;

    return pas;
}
