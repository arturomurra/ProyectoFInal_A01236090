#ifndef EP_H
#define EP_H

#include <iostream>

using namespace std;

class Episodio{
    protected:
        string nombre;
        int duracion;
    public:
        Episodio();
        Episodio(int, string);
        int getDuracion();
        string getNombre();
        void setDuracion(int);
        void setNombre(string);
};

#endif //Episodio.h
