#include "Entry.h"
#include <Windows.h>


int main()
{
    system("color B0");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    Interface<Entry> obj;
    obj.selectionMenu();

    system("pause");
    return 0;
}