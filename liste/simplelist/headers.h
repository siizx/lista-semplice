#ifndef HEADERS_H
#define HEADERS_H

#include <iostream>
#include <string>

using namespace std;

struct cell
{
    int age;
    string name;
    cell *next = nullptr;
};

cell head;
head.age = 0;
head.name = "head";
head.next = nullptr;

typedef cell *lista;

// FUNZIONI

void init_lista(lista &);
void add_n(lista &);
void add_one(lista &);
void print_lista(lista &);

#endif