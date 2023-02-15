#pragma once
#include "List.cpp"
#include "Constructors.h"
#include "Cars.h"
#include "Robots.h"
#include "SoftToys.h"
#include "BuyToys.h"

template <class T>
class Interface
{
private:
    T element;
public:
    Interface() {}; //����������� ��� ����������
    ~Interface() {}; //���������� ��� ����������
    void menu(); //���� ������ ������ ��� ������ � ����
    void fun(); //���� ������ � ������� ���������� ����
    void menuUser(); //���� ������ ������ ������������ ��� ������ � ����
    void userFun(); //���� ������ � ������� ���������� ���� ��� ������������
    void addElement(List<T>& obj); //���������� ��������
    void deleteElement(List<T>& obj); //�������� ��������
    void viewElements(List<T>& obj); //�������� ������� ���������
    void editElement(List<T>& obj); //�������������� ��������
    void searchElement(List<T>& obj); //����� ��������
    void buyElement(List<T>& obj); //������� ��������
    void selectionMenu(); //���� ������ ����� ������������ � ������������
    void administratorMenu(); //���� �������������� ��� ������ ������, � �������� �� ����� ��������
};
