#pragma once
#include "Interface.cpp"

using namespace std;

const string USERS = "Users";
const string MODYL_OF_ACCOUNTS = "\t������ ������� �������";

class Users
{
private:
    string login; //�����
    string password; //������
    bool role; //����
public:
    Users(); //����������� ��� ����������
    ~Users() {}; //���������� ��� ����������
    Users(const Users& ob); //����������� �����������
    void setLogin(string buf); //�����, ��������������� �������� ���� login
    string getLogin(); //�����, ������������ �������� ���� login
    void setPassword(string buf); //�����, ��������������� �������� ���� password
    string getPassword(); //�����, ������������ �������� ���� password
    void setRole(bool buf); //�����, ��������������� �������� ���� role
    bool getRole(); //�����, ������������ �������� ���� role
    friend istream& operator >> (istream& in, Users& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, Users& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, Users& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, Users& obj); //���������� ��������� ������ ��� �����
    void inputUserData(); //���� ������ ��� ������������
    void edit(); //�������������� ���� ����� �������  
    bool search(Users&, int num); //����� �� ����� �������
    Users& inputSearchField(int& num); //���� ���� ��� ������
    void tableCap(); //����� �� ����� ����� �������
    static string getNameOfClass(); //�����, ������������ ��� ������
    static string getNameOfMenu(); //�����, ������������ �������� ����
    bool uniqueLogin(Users); //�����, ���������� ������������ ������
};
