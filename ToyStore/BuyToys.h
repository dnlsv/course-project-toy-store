#pragma once
#include<iostream>
#include<fstream>

using namespace std;

const string BUYTOYS = "BuyToys";

class BuyToys
{
public:
	string name_of_toys;
	int amount;
	int number;
	friend ifstream& operator >> (ifstream& fin, BuyToys& obj); //���������� ��������� ����� ��� �����
	friend ofstream& operator << (ofstream& fout, BuyToys& obj); //���������� ��������� ������ ��� �����
	static string getNameOfClass(); //�����, ������������ ��� ������
};