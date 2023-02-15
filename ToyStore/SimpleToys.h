#pragma once
#include "Toys.h"

class SimpleToys :public Toys
{
protected:
    string material; //��������
    string purpose; //����������
public:
    SimpleToys(); //����������� ��� ����������
    ~SimpleToys() {}; //���������� ��� ����������
    void setMaterial(string buf); //�����, ��������������� �������� ���� material
    string getMaterial(); //�����, ������������ �������� ���� material
    void setPurpose(string buf); //�����, ��������������� �������� ���� purpose
    string getPurpose(); //�����, ������������ �������� ���� purpose
    friend istream& operator >> (istream& in, SimpleToys& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, SimpleToys& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, SimpleToys& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, SimpleToys& obj); //���������� ��������� ������ ��� �����
};
