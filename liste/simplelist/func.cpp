#include "headers.h"

// IMPLEMENTAZIONE DELLE FUNZIONI
void pop_one(lista &l){

};

void add_one(lista &l)
{
    lista aux = l;
    while (aux->next != nullptr)
    {
        aux = aux->next;
    }
    aux->next = new cell;
    aux = aux->next;
    read_cell(aux);
};

void read_cell(lista &l)
{
    cout << "Name: ";
    cin >> l->name;
    cout << endl;
    cout << "Age: ";
    cin >> l->age;
    cout << endl;
};

void add_n(lista &l)
{
    unsigned int n;
    cout << "Quante celle vuoi aggiungere? ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        add_one(l);
    }
};

void print_lista(lista &l)
{
    lista p = l->next;
    while (p != nullptr)
    {
        cout << p->name << " " << p->age << endl;
        p = p->next;
    }
};
