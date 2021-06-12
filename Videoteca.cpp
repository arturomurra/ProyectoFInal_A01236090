#include "Videoteca.h"

Videoteca::Videoteca()
{
    //ctor
}

Videoteca::Videoteca(Pelicula * peliculas, int npeliculas, Serie* series, int nseries)
{
    this->peliculas = peliculas;
    this->npeliculas = npeliculas;
    this->series = series;
    this->nseries = nseries;
}

void Videoteca::enlistar()
{
    for (int i = 0; i < npeliculas; i++)
    {
        peliculas[i].mostrarPelicula();
    }
    for (int i = 0; i < nseries; i++)
    {
        series[i].mostrarSerie();
    }
}

Videoteca::~Videoteca()
{
    //dtor
}
