#pragma once
#include "Users.h"
#include <conio.h>

const string KEYWORD = "admin";
const int RESERVESIZE = 256;

class Entry
{
public:
    void authorization(); //����������� ������������ (������������� ��� ������� ������������)
    void registration(); //����������� ������������
    void firstAdmin(); //����� ��������� ������ ������� ������ ��������������, ���� ����� ����������� 
    string maskingPassword();
};