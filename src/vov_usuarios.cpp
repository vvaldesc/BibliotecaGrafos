/*
 * vov_libros.cpp
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Implementacion de los metodos de VovUsuarios
 */

#include "vov_usuarios.h"

#include <iostream>


using namespace std;

VovUsuarios::VovUsuarios() {
	this->ocupacion=0;
}

void VovUsuarios::insertar(Usuario *l) {
	if (ocupacion < MAX1) {
		vov_usuarios[ocupacion] = l;
		ocupacion++;
	}
}

void VovUsuarios::obtener(int pos, Usuario *&l) {
	l = vov_usuarios[pos];
}

void VovUsuarios::obtener(string dni, Usuario *&l) {
	int i=0;
	bool bandera = false;
	Usuario *laux = nullptr;
	while(!bandera and i<ocupacion){
		obtener (i,laux);
		if (laux->getDni()==dni){
			bandera=true;
			l = laux;
		}
		else{
			i++;
		}
	}
}

bool VovUsuarios::existe(string dni) {
	int i=0;
	bool bandera = false;
	while(!bandera and i<ocupacion){
		if(vov_usuarios[i]->getDni()==dni){
			bandera=true;
		}
	i++;
	}
	return bandera;
}

void VovUsuarios::eliminar(string id) {
	int i=0;
	bool bandera = false;
	Usuario  *laux = nullptr;
	while(!bandera and i<ocupacion){
		obtener (i,laux);
		if (laux->getDni()==id){
			bandera=true;
			delete laux;
		}
		else{
			i++;
		}
	}
}

int VovUsuarios::cuantos() {
	return ocupacion;
}

VovUsuarios::~VovUsuarios() {
}
