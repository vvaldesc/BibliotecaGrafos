/*
 * libro.h
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Implementacion de los metodos de usuario
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <string>
#include "usuario.h"
#include "iostream"

using namespace std;
	usuario::usuario(){
		dni ="";
		nombre="";
		apellidos="";
		gmail="";
		prestamo="";
	}

	usuario::usuario(string dni,string nombre,string apellidos,string gmail,string prestamo){
		this->dni =dni;
		this->nombre=nombre;
		this->apellidos=apellidos;
		this->gmail=gmail;
		this->prestamo=prestamo;
	}

	string usuario::getApellidos(){
		return apellidos;
	}

	string usuario::getGmail(){
		return gmail;
	}

	string usuario::getDni(){
		return dni;
	}

	string usuario::getNombre(){
		return nombre;
	}

	string usuario::getPrestamo(){
		return prestamo;
	}

	void usuario::setApellidos(string apellidos) {
		this->apellidos = apellidos;
	}


	void usuario::setGmail(string gmail) {
		this->gmail = gmail;
	}


	void usuario::setDni(string id) {
		this->dni = dni;
	}

	void usuario::setNombre(string nombre) {
		this->nombre = nombre;
	}

	void usuario::setPrestamo(string prestamo) {
		this->prestamo = prestamo;
	}

	void usuario::mostrar(){
		cout << "[" << this->dni << "]" << this->nombre << ": " << this->apellidos << ";" << this->gmail << this->prestamo << "\n";
	}

usuario::~usuario() {
	// TODO Auto-generated destructor stub


//virtual ~usuario();

};

#endif /* LIBRO_H_ */
