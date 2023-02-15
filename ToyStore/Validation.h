#pragma once
#include <iostream>
#include <fstream>

using namespace std;

template <class T>
void validationCheck(T& temp); //�������� �������� ������ �� ���������� � ���������� �����

template <class T>
void excessOfLimit(T& temp, int count); //�������� �������� ������ �� ����� �� �������

template <class T>
void validationCheckField(istream& in, T& temp);

template <class T>
void validationCheckStr(istream& in, T& temp);
