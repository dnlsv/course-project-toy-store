#pragma once
#include "SimpleToys.h"

const string CONSTRUCTORS = "Constructors";
const string MODYL_OF_CONSTRUCTORS = "\t������������";

class Constructors :public SimpleToys
{
private:
    string brand; //�����
    int number_of_details; //���������� �������
public:
    Constructors(); //����������� ��� ����������
    ~Constructors() {}; //���������� ��� ����������
    Constructors(const Constructors& ob); //����������� �����������
    void setBrand(string buf); //�����, ��������������� �������� ���� brand
    string getBrand(); //�����, ������������ �������� ���� brand
    void setNumberOfDetails(int buf); //�����, ��������������� �������� ���� number_of_details
    int getNumberOfDetails(); //�����, ������������ �������� ���� number_of_details
    friend istream& operator >> (istream& in, Constructors& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, Constructors& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, Constructors& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, Constructors& obj); //���������� ��������� ������ ��� �����
    void edit(); //�������������� ���� ����� �������
    bool search(Constructors&, int num); //����� �� ����� �������
    Constructors& inputSearchField(int& num); //���� ���� ��� ������
    void tableCap(); //����� �� ����� ����� �������
    static string getNameOfClass(); //�����, ������������ ��� ������
    static string getNameOfMenu(); //�����, ������������ �������� ����
};
