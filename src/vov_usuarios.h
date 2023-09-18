/*
 * vov_libros.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Declaracion de los metodos de VovUsuarios
 */

#ifndef __VOV_USUARIOS
#define __VOV_USUARIOS

#include <iostream>
#include <fstream>
#include <string>
#include "usuario.h"
using namespace std;


// Máximo numero de libros
const int MAX1 = 200;


// Tipos de datos que representa un LIBRO
typedef struct usuario Usuario;


// Tipo de datos que representa la BIBLIOTECA
class VovUsuarios {
	Usuario* vov_usuarios [MAX1];
	int   ocupacion;
public:
	VovUsuarios();


	// PRE  = { }
	// POST = { b.ocupacion + 1 si b.ocupacion < MAX }
	// DESC:  Inserta un puntero usuario en la biblioteca si hay espacio.
	// COMPL: O(1)
	void insertar(usuario *l);
	// PRE  = { pos >= 0 && pos < b.ocupacion}
	// POST = { }
	// DESC:  Obtiene el usuario en la posicion "pos".
	// COMPL: O(n)
	void obtener  (int pos, usuario *&l);
	// PRE  = {dni <> ""}
	// POST = { }
	// DESC:  Obtiene el libro con el dni indicado.
	// COMPL: O(n)
	void obtener  (string dni, usuario *&l);
	// PRE  = { dni <> ""}
	// POST = { }
	// DESC:  Devuelve true si existe un usuario con el dni indicado.
	// COMPL: O(n)
	bool existe (string dni);
	// PRE  = {id <> ""}
	// POST = { b.ocupacion - 1 si b.ocupacion > 0 }
	// DESC:  Elimina el usuario con el dni indicado.
	// COMPL: O(n)
	void eliminar (string dni);
	// PRE  = { }
	// POST = { }
	// DESC:  Devuelve el numero de libros en la biblioteca.
	// COMPL: O(1)
	int  cuantos  ();




	~VovUsuarios();

};

#endif /* __VOV_LIBROS */
