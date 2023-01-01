#include "headers.h"

// IMPLEMENTAZIONE DELLE FUNZIONI

// FSTREAM START //////
void open_file(){
    // listona.open("listona.txt");
};

void close_file(){
    // listona.close();
};

void read_file()
{
    ifstream infile("listona.txt");
};

// FSTREAM END /////

void delete_cell(lista &l)
{
    delete l;
};

void write_cell(const lista &q)
{
    cout << "Name: " << q->name << "\nAge: " << q->age << "\n"
         << endl;
};

void pop_last(lista &l)
{
    lista aux = l;
    lista prev = l;
    while (aux->next != nullptr)
    {
        prev = aux;
        aux = aux->next;
    }
    // ORA DEVO SCRIVERE AUX  IN OUTPUT (IMPLEMENTARE FUNZIONE) E POI CANCELLARLO.
    write_cell(aux);
    delete_cell(aux);
    prev->next = nullptr;
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
    // cout << endl;
    cout << "Age: ";
    cin >> l->age;
    // cout << endl;
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
        write_cell(p);
        p = p->next;
    }
};

void pop_pos(lista &l)
{

    unsigned int n;
    cout << "Quale pos vuoi cancellare? ";
    cin >> n;
    cout << endl;

    // creo due puntatori ausiliari:
    lista aux = l;
    lista prev = l;

    // Itero n volte aux in l
    for (int i = 0; i < n; i++)
    {
        if (aux->next != nullptr)
        {
            prev = aux;
            aux = aux->next;
        }
        else
        {
            cout << "Pos out of bound." << endl;
            break;
        }
    }
    prev->next = aux->next;
    delete aux;
    aux = nullptr;
};
