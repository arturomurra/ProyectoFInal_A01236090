#include "Episodio.h"

Episodio::Episodio(){
    duracion = 0;
    nombre = " ";
}

Episodio::Episodio(int dur, string nom){
    duracion = dur;
    nombre = nom;
}

int Episodio::getDuracion(){
    return duracion;
}

string Episodio::getNombre(){
    return nombre;
}

void Episodio::setDuracion(int dur){
    duracion = dur;
}

void Episodio::setNombre(string nom){
    nombre = nom;
}
