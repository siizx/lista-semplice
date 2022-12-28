#include "headers.h"

// IMPLEMENTAZIONE DELLE FUNZIONI

// void init_lista(lista &l)
// {
//     l = new cell;
//     l->age = -1;
//     l->next = nullptr;
// };

// void add_one(lista &l)
// {

// };

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
    lista aux = l;

    unsigned int n;
    cout << "Quante celle vuoi aggiungere? ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (aux->age != -1)
        {
            read_cell(aux);
        }
        else
        {
            while (aux->next != nullptr)
            {
                aux = aux->next;
            }
            aux->next = new cell;
            aux = aux->next;
            read_cell(aux);
        }
        aux = aux->next;
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
