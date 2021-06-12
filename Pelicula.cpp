#include "Pelicula.h"
#include <iostream>


Pelicula::Pelicula()
{
    id = 0;
    nombre = "";
    duracion = 0;
    genero = "";
    calificacion = 0;
}

Pelicula::Pelicula(int id, string nombre, int duracion, string genero)
{
    this->id = id;
    this->nombre = nombre;
    this->duracion = duracion;
    this->genero = genero;
}

void Pelicula::evaluar(int calificacion)
{
    this->calificacion = calificacion;
}

void Pelicula::mostrarPelicula()
{
    cout << "El ID de la pelicula es: " << id << endl;
    cout << "El Nombre de la pelicula es: " << nombre << endl;
    cout << "La Duracion de la pelicula es: " << duracion << " minutos." << endl;
    cout << "El Genero de la pelicula es: " << genero << endl;
    cout << "La calificacion de la pelicula es: " << calificacion << endl << endl;
}

Pelicula::~Pelicula()
{
    //dtor
}
