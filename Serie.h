#ifndef SERIE_H
#define SERIE_H

#include "Temporada.h"
#include "Video.h"

class Serie : public Video {
    protected:
        int numTemporadas;
        Temporada *temps;
        int calificacion;
    public:
        Serie();
        Serie(int, string, int, string, int, Temporada*);
        void setNumTemporadas(int);
        void setTemporadas(Temporada*);
        void setTemporadas(Temporada, int);
        void setCalificacion(int, int);
        int getNumTemporadas();
        void mostrarSerie();
        void mostrarTemporadas();
        void mostrarTemporadas(int);
};

#endif //Serie.g
