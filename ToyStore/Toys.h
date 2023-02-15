#pragma once
#include <iostream>
#include <iomanip> //��� setw
#include <fstream>

#include "Validation.cpp"

using namespace std;

class Toys
{
protected:
    string name; //��������
    int price;
    int age_group; //���������� ������
    string country_producer; //������ �������������
public:
    Toys(); //����������� ��� ����������
    ~Toys() {}; //���������� ��� ����������
    void setName(string buf); //�����, ��������������� �������� ���� name
    string getName(); //�����, ������������ �������� ���� name
    void setAgeGroup(int buf); //�����, ��������������� �������� ���� age_group
    int getAgeGroup(); //�����, ������������ �������� ���� age_group
    void setCountryProducer(string buf); //�����, ��������������� �������� ���� country_producer
    string getCountryProducer(); //�����, ������������ �������� ���� country_producer
    friend istream& operator >> (istream& in, Toys& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, Toys& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, Toys& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, Toys& obj); //���������� ��������� ������ ��� �����
};
