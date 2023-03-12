#include "Entry.h"

int main()
{
    system("color B0");
    setlocale(LC_ALL, ".UTF8");

    Interface<Entry> obj;
    obj.selectionMenu();

    system("pause");
    return 0;
}
