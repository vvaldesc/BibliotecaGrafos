/*
 * vov_libros.cpp
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Implementacion de los metodos de VovLibros
 */

#include <iostream>

#include "vov_libros.h"

using namespace std;

VovLibros::VovLibros() {
	this->ocupacion=0;

}

void VovLibros::insertar(Libro *l) {
	if (ocupacion < MAX) {
		vov_libros[ocupacion] = l;
		ocupacion++;
	}
}

void VovLibros::obtener(int pos, Libro *&l) {
	l = vov_libros[pos];
}

void VovLibros::obtener(string id, Libro *&l) {
	int i=0;
	bool bandera = false;
	Libro *laux = nullptr;
	while(!bandera and i<ocupacion){
		obtener (i,laux);
		if (laux->getId()==id){
			bandera=true;
			l = laux;
		}
		else{
			i++;
		}
	}
}

bool VovLibros::existe(string id) {
	int i=0;
	bool bandera = false;
	while(!bandera and i<ocupacion){
		if(vov_libros[i]->getId()==id){
			bandera=true;
		}
	i++;
	}
	return bandera;
}

void VovLibros::eliminar(string id) {
	int i=0,pos=0;
	bool bandera = false;
	Libro *laux = nullptr;
	while(!bandera and i<ocupacion){
		obtener (i,laux);
		if (laux->getId()==id){
			bandera=true;
			delete laux;
			for(pos=i;pos<ocupacion-1;pos++){
				vov_libros[pos]=vov_libros[pos+1];
			}
		}
		else{
			i++;
		}
	}
	disminuirCuantos();
}

int VovLibros::cuantos() {
	return ocupacion;
}

void VovLibros::disminuirCuantos(){
	this->ocupacion--;
}

VovLibros::~VovLibros() {
}
