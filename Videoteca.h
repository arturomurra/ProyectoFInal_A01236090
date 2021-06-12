#ifndef VIDEOTECA_H
#define VIDEOTECA_H
#include "Pelicula.h"
#include "Serie.h"

class Videoteca
{
    public:
        Videoteca();
        Videoteca(Pelicula *, int, Serie *, int);
        void enlistar();
        virtual ~Videoteca();

    protected:
        Pelicula * peliculas;
        int npeliculas;
        Serie * series;
        int nseries;
    private:

};

#endif // VIDEOTECA_H
