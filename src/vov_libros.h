/*
 * vov_libros.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Declaracion de los metodos de VovLibros
 */

#ifndef __VOV_LIBROS
#define __VOV_LIBROS

#include <iostream>
#include <fstream>
#include <string>
#include "libro.h"
using namespace std;


// Máximo numero de libros
const int MAX = 100;


// Tipos de datos que representa un LIBRO
typedef struct libro Libro;


// Tipo de datos que representa la BIBLIOTECA
class VovLibros {
	Libro* vov_libros [MAX];
	int   ocupacion;
public:
	VovLibros();


	// PRE  = { }
	// POST = { b.ocupacion + 1 si b.ocupacion < MAX }
	// DESC:  Inserta un puntero libro en la biblioteca si hay espacio.
	// COMPL: O(1)
	void insertar(Libro *l);
	// PRE  = { pos >= 0 && pos < b.ocupacion}
	// POST = { }
	// DESC:  Obtiene el libro en la posicion "pos".
	// COMPL: O(n)
	void obtener  (int pos, Libro *&l);
	// PRE  = {id <> ""}
	// POST = { }
	// DESC:  Obtiene el libro con la id indicada.
	// COMPL: O(n)
	void obtener  (string id, Libro *&l);
	// PRE  = { id <> ""}
	// POST = { }
	// DESC:  Devuelve true si existe un libro con la id indicada.
	// COMPL: O(n)
	bool existe (string id);
	// PRE  = {id <> ""}
	// POST = { b.ocupacion - 1 si b.ocupacion > 0 }
	// DESC:  Elimina el libro con la referencia indicada y comprime el vector.
	// COMPL: O(n)
	void eliminar (string id);
	// PRE  = { }
	// POST = { }
	// DESC:  Devuelve el numero de libros en la biblioteca.
	// COMPL: O(1)
	int  cuantos  ();
	// PRE  = { }
	// POST = { b.ocupacion - 1 si b.ocupacion > 0 }
	// DESC:  Disminuye en 1 el numero de libros en la biblioteca.
	// COMPL: O(1)
	void disminuirCuantos();


	~VovLibros();

};

#endif /* __VOV_LIBROS */
