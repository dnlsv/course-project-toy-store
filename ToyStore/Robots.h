#pragma once
#include "ElectronicToys.h"

const string ROBOTS = "Robots";
const string MODYL_OF_ROBOTS = "\t������";

class Robots :public ElectronicToys
{
private:
    string sensors; //�������
    string character; //��������(��� ������)
public:
    Robots(); //����������� ��� ����������
    ~Robots() {}; //���������� ��� ����������
    Robots(const Robots& ob); //����������� �����������
    void setSensors(string buf); //�����, ��������������� �������� ���� sensors
    string getSensors(); //�����, ������������ �������� ���� sensors
    void setCharacter(string buf); //�����, ��������������� �������� ���� character
    string getCharacter(); //�����, ������������ �������� ���� character
    friend istream& operator >> (istream& in, Robots& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, Robots& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, Robots& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, Robots& obj); //���������� ��������� ������ ��� �����
    void edit(); //�������������� ���� ����� �������
    bool search(Robots&, int num); //����� �� ����� �������
    Robots& inputSearchField(int& num); //���� ���� ��� ������
    void tableCap(); //����� �� ����� ����� �������
    static string getNameOfClass(); //�����, ������������ ��� ������
    static string getNameOfMenu(); //�����, ������������ �������� ����
};
