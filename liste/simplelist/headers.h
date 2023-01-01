#ifndef HEADERS_H
#define HEADERS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// fstream listona;

struct cell
{
    int age = -1;
    string name;
    cell *next = nullptr;
};

typedef cell *lista;

// FUNZIONI

void read_cell(lista &);
void add_n(lista &);
void add_one(lista &);
void print_lista(lista &);
void pop_last(lista &);
void delete_cell(lista &);
void write_cell(const lista &);
void pop_pos(lista &);
//  FSTREAM
void open_file();
void open_file();
void close_file();

#endif
