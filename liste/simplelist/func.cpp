#include "headers.h"

// IMPLEMENTAZIONE DELLE FUNZIONI

void init_lista(lista l)
{
    l = new cell;
    l->age = -1;
    l->next = nullptr;
};

void add_one(lista &l)
{
    if (l->age < 0)
    {
        cout << "Enter age:" << endl;
        cin >> l->age;
        cout << "Enter name:" << endl;
        cin >> l->name;
    }
    else
    {
        lista p = l->next;
        cout << "Enter age:" << endl;
        cin >> l->age;
        cout << "Enter name:" << endl;
        cin >> l->name;
    }
};

void add_n(lista &l, unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        add_one(l);
    }
};

void print_lista(lista &l)
{
    lista p = l;
    do
    {
        cout << p->name << " " << p->age << endl;
        p = p->next;

    } while (p->next != nullptr);
};
