/*
 * libro.cpp
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Implementacion de los metodos de libro
 */

#include "libro.h"
#include "iostream"




libro::libro() {
	id ="";
	titulo="";
	autor="";
	numEjemplares=1;
	numPaginas=0;
	anioPublicacion=0;
}

libro::libro(string id,string titulo,string autor,string tematica,int anioPublicacion,int numPaginas) {
	this->id=id;
	this->titulo=titulo;
	this->autor=autor;
	this->tematica=tematica;
	this->anioPublicacion=anioPublicacion;
	this->numPaginas=numPaginas;
	this->numEjemplares=numEjemplares;
}

void libro::setId(string id) {
	this->id = id;
}

void libro::setTitulo(string titulo) {
	this->titulo = titulo;
}

void libro::setAutor(string autor) {
	this->autor = autor;
}

void libro::setTematica(string tematica) {
	this->tematica = tematica;
}

void libro::setAnioPublicacion(int anioPublicacion) {
	this->anioPublicacion = anioPublicacion;
}

void libro::setNumPaginas(int numPaginas) {
	this->numPaginas = numPaginas;
}

void libro::setNumEjemplares(int numEjemplares) {
	this->numEjemplares = numEjemplares;
}

string libro::getId() {
	return id;
}

string libro::getTitulo() {
	return titulo;
}

string libro::getAutor() {
	return autor;
}

string libro::getTematica() {
	return tematica;
}

int libro::getAnioPublicacion() {
	return anioPublicacion;
}

int libro::getNumPaginas() {
	return numPaginas;
}

int libro::getNumEjemplares() {
	return numEjemplares;
}

void libro::mostrar(){
	cout << "[" << this->id << "]" << this->titulo << ": " << this->autor << ";" << this->tematica << this->anioPublicacion << this->numPaginas << this->numEjemplares << "\n";
}

libro::~libro() {
	// TODO Auto-generated destructor stub
}


