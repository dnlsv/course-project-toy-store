#pragma once
#include "SimpleToys.h"

const string SOFTTOYS = "SoftToys";
const string MODYL_OF_SOFTTOYS = "\t������ �������";

class SoftToys :public SimpleToys
{
private:
    string form; //�����
    string color; //����
public:
    SoftToys(); //����������� ��� ����������
    ~SoftToys() {}; //���������� ��� ����������
    SoftToys(const SoftToys& ob); //����������� �����������
    void setForm(string buf); //�����, ��������������� �������� ���� form
    string getForm(); //�����, ������������ �������� ���� form
    void setColor(string buf); //�����, ��������������� �������� ���� color
    string getColor(); //�����, ������������ �������� ���� color
    friend istream& operator >> (istream& in, SoftToys& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, SoftToys& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, SoftToys& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, SoftToys& obj); //���������� ��������� ������ ��� �����
    void edit(); //�������������� ���� ����� �������  
    bool search(SoftToys&, int num); //����� �� ����� �������
    SoftToys& inputSearchField(int& num); //���� ���� ��� ������
    void tableCap(); //����� �� ����� ����� �������
    static string getNameOfClass(); //�����, ������������ ��� ������
    static string getNameOfMenu(); //�����, ������������ �������� ����
};
