#pragma once
#include <iostream>
#include <fstream>

using namespace std;

template <class T>
void validationCheck(T& temp); //проверка вводимых данных на совпадение с заявленным типом

template <class T>
void excessOfLimit(T& temp, int count); //проверка вводимых данных на выход за пределы

template <class T>
void validationCheckField(istream& in, T& temp);

template <class T>
void validationCheckStr(istream& in, T& temp);
