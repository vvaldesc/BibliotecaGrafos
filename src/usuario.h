/*
 * libro.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Declaracion de los metodos de usuario
 */

#ifndef USUARIO_H_
#define USUARIO_H_
#include <string>
using namespace std;

class usuario {
private:
	string dni;
	string nombre;
	string apellidos;
	string gmail;
	string prestamo;

public:

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	// Desc: Constructor por defecto de Usuario
	usuario();


	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	// Desc: Constructor parametrizado de Usuario
	usuario(string dni,string nombre,string apellidos,string gmail,string prestamo);

	// PRE  = { }
	// POST = { }
	// COMPL: O(n)
	void mostrar();

	// métodos selectores

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	string getApellidos();

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	string getGmail();

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	string getDni();

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	string getNombre();

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	string getPrestamo();

	// métodos modificadores


	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	void setApellidos(string apellidos);

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	void setGmail(string gmail);

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	void setDni(string id);

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	void setNombre(string nombre);

	// PRE  = { }
	// POST = { }
	// COMPL: O(1)
	void setPrestamo(string prestamo);

	virtual ~usuario();

};

#endif /* LIBRO_H_ */
