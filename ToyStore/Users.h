#pragma once
#include "Interface.cpp"

using namespace std;

const string USERS = "Users";
const string MODYL_OF_ACCOUNTS = "\tМОДУЛЬ УЧЕТНЫХ ЗАПИСЕЙ";

class Users
{
private:
    string login; //логин
    string password; //пароль
    bool role; //роль
public:
    Users(); //конструктор без параметров
    ~Users() {}; //деструктор без параметров
    Users(const Users& ob); //конструктор копирования
    void setLogin(string buf); //метод, устанавливающий значение поля login
    string getLogin(); //метод, возвращающий значение поля login
    void setPassword(string buf); //метод, устанавливающий значение поля password
    string getPassword(); //метод, возвращающий значение поля password
    void setRole(bool buf); //метод, устанавливающий значение поля role
    bool getRole(); //метод, возвращающий значение поля role
    friend istream& operator >> (istream& in, Users& obj); //перегрузка оператора ввода
    friend ostream& operator << (ostream& out, Users& obj); //перегрузка оператора вывода 
    friend ifstream& operator >> (ifstream& fin, Users& obj); //перегрузка оператора ввода для файла
    friend ofstream& operator << (ofstream& fout, Users& obj); //перегрузка оператора вывода для файла
    void inputUserData(); //ввод данных для пользователя
    void edit(); //редактирование всех полей объекта  
    bool search(Users&, int num); //поиск по полям объекта
    Users& inputSearchField(int& num); //ввод поля для поиска
    void tableCap(); //вывод на экран шапки таблицы
    static string getNameOfClass(); //метод, возвращающий имя класса
    static string getNameOfMenu(); //метод, возвращающий название меню
    bool uniqueLogin(Users); //метод, проверящий уникальность логина
};
