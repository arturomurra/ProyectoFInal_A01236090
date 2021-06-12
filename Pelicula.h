#ifndef PELICULA_H
#define PELICULA_H

#include <Video.h>


class Pelicula : public Video
{
    public:
        Pelicula();
        Pelicula(int, string, int, string);
        void evaluar(int);
        void mostrarPelicula();
        virtual ~Pelicula();

    protected:
        int calificacion;

    private:
};

#endif // PELICULA_H
