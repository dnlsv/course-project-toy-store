#include "list.h"

template <class T>
List<T>::List()
{
    begin = end = NULL;
    count = 0;
}

template <class T>
List<T>::~List()
{
    DelAll();
}

template <class T>
void List<T>::AddBegin(T n)
{
    Spis2<T>* temp = new Spis2<T>;
    temp->prev = 0;
    temp->data = n;
    temp->next = begin;
    if (begin != 0)
        begin->prev = temp;
    if (count == 0)
        begin = end = temp;
    else
        begin = temp;
    count++;
}

template <class T>
void List<T>::AddEnd(T n)
{
    Spis2<T>* temp = new Spis2<T>;
    temp->next = 0;
    temp->data = n;
    temp->prev = end;
    if (end != 0)
        end->next = temp;
    if (count == 0)
        begin = end = temp;
    else
        end = temp;
    count++;
}

template <class T>
void List<T>::Del(int pos)
{
    Spis2<T>* del = begin;
    for (int i = 0; i < pos - 1; i++)
        del = del->next;

    Spis2<T>* prevd = del->prev;
    Spis2<T>* after = del->next;
    if (prevd != 0)
        prevd->next = after;
    if (after != 0)
        after->prev = prevd;
    if (pos == 1)
        begin = after;
    if (pos == count)
        end = prevd;

    delete del;
    count--;
}

template <class T>
void List<T>::View()
{
    int i = 0;
    Spis2<T>* temp = begin;
    if (count != 0)
    {
        while (temp != 0)
        {
            cout << " " << setw(2) << left << ++i << "|" << temp->data;
            temp = temp->next;
        }
    }
    else
        cout << endl << "\tДанных нет!" << endl;
}

template <class T>
T& List<T>::getElement(int pos)
{
    Spis2<T>* temp;
    temp = begin;
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    return temp->data;
}

template <class T>
int List<T>::returnCount()
{
    return count;
}

template <class T>
void List<T>::DelAll()
{
    while (count != 0)
        Del(1);
}

template <class T>
void List<T>::readFromFile()
{
    T element;
    string Way = "..\\Resources\\FileOf" + T::getNameOfClass() + ".txt";
    ifstream fin(Way, ios::in);
    if ((int)fin.eof() != fin.peek() + 1)
    {
        while (!fin.eof())
        {
            fin >> element;
            this->AddEnd(element);
        }
    }
    fin.close();
}

template <class T>
void List<T>::writeToFile()
{
    string Way = "..\\Resources\\FileOf" + T::getNameOfClass() + ".txt";
    int i = 0;
    ofstream fout(Way, ios::out);
    Spis2<T>* temp = begin;
    while (temp != 0)
    {
        fout << temp->data;
        temp = temp->next;
        if (i < count - 1)
            fout << endl;
        i++;
    }
    fout.close();
}

template <class T>
void List<T>::Insert(int pos, T& tmp)
{
    if (pos == count + 1)
    {
        AddEnd(tmp);
        return;
    }
    if (pos == 1)
    {
        AddBegin(tmp);
        return;
    }
    Spis2<T>* in = begin;
    for (int i = 0; i < pos - 1; i++)
        in = in->next;

    Spis2<T>* previn = in->prev;
    Spis2<T>* temp = new Spis2<T>;
    temp->data = tmp;

    if (previn != 0 && count != 1)
        previn->next = temp;

    temp->next = in;
    temp->prev = previn;
    in->prev = temp;

    count++;
}
