#ifndef HEADERS_H
#define HEADERS_H

#include <iostream>
#include <string>

using namespace std;

struct cell
{
    int age = -1;
    string name;
    cell *next = nullptr;
};

typedef cell *lista;

// FUNZIONI
void read_cell(lista &);
// void init_lista(lista &);
void add_n(lista &);
void add_one(lista &);
void print_lista(lista &);

#endif