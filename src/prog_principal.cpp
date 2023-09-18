/*
 * prog_principal.cpp
 *
 *  Autor: Juan A. Rico (jarico@unex.es)
 *  Fecha: 31 Enero 2022
 */

#include <iostream>
#include <fstream>
#include <string>

#include "biblioteca.h"

using namespace std;


// Muestra el menu por pantalla y devuelve una opcion elegida.
int menu() {

	int opcion;

	do {
		cout << endl;
		cout << "______________ MENU PRINCIPAL ______________"<< endl << endl;

		cout << "     1. Prestar libro a un usuario" << endl;
		cout << "     2. Mostrar los libros de un temática determinada" << endl;
		cout << "     3. Buscar un libro por su referencia" << endl;
		cout << "     4. Mostrar todos los libros" << endl;
		cout << "     5. Mostrar todos los usuarios"  <<  endl;
		cout << "     6. Mostrar todos los usuarios que tienen algún libro prestado"  <<  endl;
		cout << "     7. Descatalogar un libro."  <<  endl;
		cout << "     0. Finalizar." << endl;
		cout << "                        Opcion:  ";
		cin >> opcion;
		cin.ignore();

	} while ((opcion < 0) || (opcion > 7));

	return opcion;
}


// Programa principal: 
int main() {

	bool        fin = false;
	int         opcion;
	Biblioteca  *b=new Biblioteca("Biblioteca");
	string dni,id,tema2,ref,ref2;



	do {
		opcion = menu();

		switch (opcion) {
			case 1:
				cout << "Introduzca el dni" << endl;
				cin >> dni;
				cout << "Introduzca el id" << endl;
				cin >> id;
				b->prestarLibro(dni,id);
				// TODO 
				break;

			case 2:
				cout << "Introduzca el tema" << endl;
				cin >> tema2;
				b->mostrarTema(tema2);
				// TODO 
				break;

			case 3:
				cout << "Introduzca la referencia" << endl;
				cin >> ref;
				b->libroReferencia(ref);
				// TODO 
				break;

			case 4:
				b->mostrarLibros();
				break;

			case 5:
				b->mostrarUsuarios();
				break;

			case 6:
				b->mostrarUsuariosPrestados();
				break;

			case 7:
				cout << "Introduzca la referencia" << endl;
				cin >> ref2;
				b->descatalogar(ref2);
				break;

			case 0:
				fin = true;
				break;

			default:
				break;

		}
		
	} while (!fin);
	delete b;
	return 0;
}


