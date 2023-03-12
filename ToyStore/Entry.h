#pragma once

#include <conio.h>

#include "Users.h"

const string KEYWORD = "admin";
const int RESERVED_SIZE = 256;

class Entry
{
public:
    void authorization(); //авторизация пользователя (админитсратор или обычный пользователь)
    void registration(); //регистрация пользователя
    void firstAdmin(); //метод создающий первую учетную запись администратора, если такая отсутствует 
    string maskingPassword();
};
