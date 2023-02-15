#pragma once
#include "Toys.h"

class ElectronicToys :public Toys
{
protected:
    int scale; //�������
    int battery_capacity; //������� �������
public:
    ElectronicToys(); //����������� ��� ����������
    ~ElectronicToys() {}; //���������� ��� ����������
    void setScale(int buf); //�����, ��������������� �������� ���� scale
    int getScale(); //�����, ������������ �������� ���� scale
    void setBatteryCapacity(int buf); //�����, ��������������� �������� ���� battery_capacity
    int getBatteryCapacity(); //�����, ������������ �������� ���� battery_capacity
    friend istream& operator >> (istream& in, ElectronicToys& obj); //���������� ��������� �����
    friend ostream& operator << (ostream& out, ElectronicToys& obj); //���������� ��������� ������ 
    friend ifstream& operator >> (ifstream& fin, ElectronicToys& obj); //���������� ��������� ����� ��� �����
    friend ofstream& operator << (ofstream& fout, ElectronicToys& obj); //���������� ��������� ������ ��� �����
};
