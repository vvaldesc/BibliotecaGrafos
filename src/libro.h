/*
 * libro.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Declaración de los metodos de libro
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <string>

using namespace std;

class libro {
private:
	string id;
	string titulo;
	string autor;
	string tematica;
	int anioPublicacion;
	int numPaginas;
	int numEjemplares;


public:

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	// Desc: Constructor por defecto de libro
	libro();


	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	// Desc: Constructor parametrizado de libro
	libro(string id,string titulo,string autor,string tematica,int anioPublicacion,int numPaginas);

	// métodos modificadores
	/*
	 * Pre:{id <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setId (string id);
	/* Pre:{titulo <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setTitulo (string titulo);
	/* Pre:{autor <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setAutor (string autor);
	/* Pre:{tematica <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setTematica (string tematica);
	/* Pre:{anioPublicacion <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setAnioPublicacion (int anioPublicacion);
	/* Pre:{numPaginas <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setNumPaginas (int numPaginas);
	/* Pre:{numEjemplares <>""}
	 * Post:
	 * Complejidad: O(1)
	 */
	void setNumEjemplares (int numEjemplares);

	// métodos selectores

	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	string getId ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	string getTitulo ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	string getAutor ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	string getTematica ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	int getAnioPublicacion ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	int getNumPaginas ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */
	int getNumEjemplares ();
	/* Pre:
	 * Post:
	 * Complejidad: O(1)
	 */

	void mostrar();




	virtual ~libro();
};

#endif /* LIBRO_H_ */
