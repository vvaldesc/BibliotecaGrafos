/*
 * biblioteca.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Declaración de los metodos de Biblioteca
 */

#ifndef __BIBLIOTECA
#define __BIBLIOTECA

#include <iostream>
#include <fstream>
#include <string>

#include "vov_libros.h"
#include "vov_usuarios.h"


using namespace std;

class Biblioteca{
	string nombre;
	VovUsuarios *vUsuarios;
	VovLibros *vLibros;


public:

	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 * Constructor por defecto de Biblioteca
	 */
	Biblioteca();
	/* Pre:{nombre <>""}
	 * Post:
	 * Complejidad: O(1)
	 * Constructor parametrizado de Biblioteca
	 */
	Biblioteca(string nombre);
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 * Módulo que carga los libros del fichero "libros.csv y los separa por campos
	 * para añadirlos al vov_libros"
	 */
	void cargarLibros();
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 * Módulo que carga los libros del fichero "usuarios.csv los separa por campos
	 * para añadirlos al vov_usuarios""
	 */
	void cargarUsuarios();
	/* Pre: {dni <>"" && id <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void prestarLibro(string dni,string id);
	/* Pre: {subcadena <>""}
	 * Post:
	 * Complejidad: O(n)
	 */
	void mostrarTema(string subcadena);
	/* Pre: {id <>""}
	 * Post:
	 * Complejidad: O(n)
	 */
	void libroReferencia(string id);
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 */
	void mostrarLibros();
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 */
	void mostrarUsuarios();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	void mostrarUsuariosPrestados();
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 */
	void descatalogar(string id);
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 */
	void guardarLibros();
	/* Pre:
	 * Post:
	 * Complejidad: O(n)
	 */
	void guardarUsuarios();






	~Biblioteca();
};


#endif /* __BIBLIOTECA */
