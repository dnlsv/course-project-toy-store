#pragma once
#include <iostream>
#include <fstream>
#include <iomanip> //��� setw

using namespace std;

template <class T>
struct Spis2
{
    T data; // ������
    Spis2<T>* next, * prev; //��������� �� ���������� � �� �������� �������� ����������� ������ 
};

template <class T>
class List
{
private:
    Spis2<T>* begin, * end; //��������� �� ������ � ����� ����������� ������
    int count; //���������� ��������� ������
public:
    List(); //����������� ��� ����������
    ~List(); //���������� ��� ����������
    void Insert(int pos, T& tmp); //���������� �������� � ������� pos ������
    void AddEnd(T n); //���������� �������� � ����� ������
    void AddBegin(T n); //���������� �������� � ������ ������
    void DelAll(); //�������� ���� ��������� ������
    void Del(int pos = 0); //�������� �������� ������ � �������� pos
    void View(); //�������� ��������� ������
    T& getElement(int pos); //����� ������������ ������� ������ � �������� pos
    void readFromFile(); //������ ����� �� �����
    void writeToFile(); //������ ������ � ����
    int returnCount(); //�����, ������������ ���������� ��������� ������
};
