#include "Video.h"

Video::Video()
{
    id = 0;
    nombre = "";
    duracion = 0;
    genero = "";
}

Video::Video(int id, string nombre, int duracion, string genero)
{
    this->id = id;
    this->nombre = nombre;
    this->duracion = duracion;
    this->genero = genero;
}

Video::~Video()
{
    //dtor
}
