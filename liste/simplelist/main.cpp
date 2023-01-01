#include "headers.h"

int main()
{

	lista lis = nullptr;
	// init_lista(lis);
	lis = new cell;

	//	QUESTA LISTA CONTIENE "HEAD" IN TESTA (una cella vuota) PER SEMPLIFICAREL'IMPLEMENTAZIONE GENERALE DEL PROGRAMMA.
	lista head = lis;

	add_n(lis);
	cout << "------------" << endl;
	print_lista(lis);
	cout << "------------" << endl;
	// pop_last(lis);
	cout << "------------" << endl;
	print_lista(lis);
	cout << "------------\n"
		 << endl;
	pop_pos(lis);
	print_lista(lis);
	return 0;
}
