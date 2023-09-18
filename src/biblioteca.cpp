/*
 * biblioteca.cpp
 *
 *  Created on: 6 mar 2022
 *      Author: Víctor Valdés Cobos
 *      Mail: vvaldesc@alumnos.unex.es
 *      Código: Implementacion de los metodos de Biblioteca
 */

#include "biblioteca.h"

using namespace std;


// Cargar los libros del archivo "libros.csv" en la biblioteca.
void Biblioteca::cargarLibros() {
	ifstream ifs;
	int intAnioPublicacion;int intnumPaginas;
	string titulo,autor,tematica,anioPublicacion,numPaginas,numEjemplares;
	ifs.open("libros.csv");
	if(ifs.is_open()){
		while(!ifs.eof()){
				getline (ifs,titulo,';');
				getline (ifs,autor,';');
				getline (ifs,tematica,';');
				getline (ifs,anioPublicacion,';');
				getline (ifs,numPaginas);
				intAnioPublicacion=stoi(anioPublicacion);
				intnumPaginas=stoi(numPaginas);
				string id = titulo.substr(0, 3)+"." + autor.substr(0, 3)+"." + anioPublicacion;
				libro *l=new Libro(id,titulo,autor,tematica,intAnioPublicacion,intnumPaginas);
				vLibros->insertar(l);
		}
		ifs.close();
	}
}

void Biblioteca::cargarUsuarios() {
	ifstream ifs;
	string dni,nombre,apellidos,mail,prestamo;
	ifs.open("usuarios.csv");
	if(ifs.is_open()){
		while(!ifs.eof()){
				getline (ifs,dni,';');
				getline (ifs,nombre,';');
				getline (ifs,apellidos,';');
				getline (ifs,mail,';');
				getline (ifs,prestamo);
				Usuario *u=new Usuario(dni,nombre,apellidos,mail,prestamo);
				vUsuarios->insertar(u);
		}
		ifs.close();
	}
}

void Biblioteca::prestarLibro(string dni,string id){
	if(vUsuarios->existe(dni) and vLibros->existe(id)){
		Usuario *uaux = nullptr;
		vUsuarios->obtener(dni, uaux);
		uaux->setPrestamo(id);
	}
	else{
		cout<< "\nEl dni y/o id introducidos no existen" <<endl;
	}
}

void Biblioteca::mostrarTema(string subcadena){
	Libro *l = nullptr;
	//string tema;
	for(int i=0;i<vLibros->cuantos();i++){
		vLibros->obtener(i, l);
			if(!l->getTematica().find(subcadena)){
				l->mostrar();
			}
		}
}

void Biblioteca::libroReferencia(string id){
	if(vLibros->existe(id)){
	Libro *l = nullptr;
	for(int i=0;i<vLibros->cuantos();i++){
		vLibros->obtener(i, l);
		if(l->getId()==id)
			l->mostrar();
	}
	}
	else{
		cout<< "\nEl id introducido no existe" <<endl;
	}
}

void Biblioteca::mostrarLibros(){
	Libro *l = nullptr;
	for(int i=0;i<vLibros->cuantos();i++){
		vLibros->obtener(i, l);
			l->mostrar();
	}
}

void Biblioteca::mostrarUsuarios(){
	Usuario *u = nullptr;
	for(int i=0;i<vUsuarios->cuantos();i++){
		vUsuarios->obtener(i, u);
			u->mostrar();
	}
}

void Biblioteca::mostrarUsuariosPrestados(){
	Usuario *u = nullptr;
	for(int i=0;i<vUsuarios->cuantos();i++){
		vUsuarios->obtener(i, u);
			if(u->getPrestamo()!="sin-prestamo")
				u->mostrar();
	}
}

void Biblioteca::descatalogar(string id){
	if(vLibros->existe(id)){

	Usuario *u = nullptr;
	bool prestado;
	for(int y=0;y<vUsuarios->cuantos();y++){
		vUsuarios->obtener(y, u);
			if(u->getPrestamo()==id){
				prestado=true;
			}
		}
	if(!prestado){
		vLibros->eliminar(id);
			}
		}
	}





Biblioteca::Biblioteca() {
	nombre="";
	vLibros=new VovLibros;
	vUsuarios=new VovUsuarios;
	cargarLibros();
	cargarUsuarios();



}

Biblioteca::Biblioteca(string nombre) {
	this->nombre=nombre;
	vLibros=new VovLibros;
	vUsuarios=new VovUsuarios;
	cargarLibros();
	cargarUsuarios();
}

void Biblioteca::guardarLibros(){
	ofstream ifs;
	Libro *l;
	int i=0;
	ifs.open("libros.csv");
	if(ifs.is_open()){
		for(i=0;i<vLibros->cuantos();i++){
			vLibros->obtener(i, l);
			ifs<<l->getTitulo()<<";"<<l->getAutor()<<";"<<l->getTematica()<<";"<<l->getAnioPublicacion()<<";"<<l->getNumPaginas();
			if(i!=vLibros->cuantos()-1){
				ifs<<endl;
			}
	}
		ifs.close();
	}
}

void Biblioteca::guardarUsuarios(){
	ofstream ifs;
	Usuario *u;
	int i=0;
	ifs.open("usuarios.csv");
	if(ifs.is_open()){
		for(i=0;i<vUsuarios->cuantos();i++){
			vUsuarios->obtener(i, u);
			ifs<<u->getDni()<<";"<<u->getNombre()<<";"<<u->getApellidos()<<";"<<u->getGmail()<<";"<<u->getPrestamo();
			if(i!=vUsuarios->cuantos()-1){
				ifs<<endl;
			}
	}
		ifs.close();
	}
}

Biblioteca::~Biblioteca() {
	guardarLibros();
	guardarUsuarios();
	delete this->vLibros;
	delete this->vUsuarios;

}


