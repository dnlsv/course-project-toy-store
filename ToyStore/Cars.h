#pragma once
#include "ElectronicToys.h"

const string CARS = "Cars";
const string MODYL_OF_CARS = "\t�������";

class Cars :public ElectronicToys
{
private:
    string type_of_car; //��� ����
    string body_color; //���� �������
public:
    Cars(); //����������� ��� ����������
    ~Cars() {}; //���������� ��� ����������
    Cars(const Cars& ob); //����������� �����������
    void setTypeOfCar(string buf); //�����, ��������������� �������� ���� type_of_car
    string getTypeOfCar(); //�����, ������������ �������� ���� type_of_car
    void setBodyColor(string buf); //�����, ��������������� �������� ���� body_color
    string getBodyColor(); //�����, ������������ �������� ���� body_color
    friend istream& operator >> (istream& in, Cars& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, Cars& obj); //���������� ��������� ������
    friend ifstream& operator >> (ifstream& fin, Cars& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, Cars& obj); //���������� ��������� ������ ��� �����
    void edit(); //�������������� ���� ����� �������
    bool search(Cars& , int num); //����� �� ����� �������
    Cars& inputSearchField(int& num); //���� ���� ��� ������
    void tableCap(); //����� �� ����� ����� �������
    static string getNameOfClass(); //�����, ������������ ��� ������
    static string getNameOfMenu(); //�����, ������������ �������� ����
};
