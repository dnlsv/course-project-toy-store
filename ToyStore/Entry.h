#pragma once
#include "Users.h"
#include <conio.h>

const string KEYWORD = "admin";
const int RESERVESIZE = 256;

class Entry
{
public:
    void authorization(); //авторизация пользователя (админитсратор или обычный пользователь)
    void registration(); //регистрация пользователя
    void firstAdmin(); //метод создающий первую учетную запись администратора, если такая отсутствует 
    string maskingPassword();
};