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

typedef cell *lista;

// FUNZIONI

void init_lista();
void add();
void add_one();
void print_lista();

#endif