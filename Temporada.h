#ifndef TEMP_H
#define TEMP_H

#include "Episodio.h"

class Temporada {
    protected:
        int numTemporada;
        int numEpisodios;
        int calificacion;
        Episodio *eps;

    public:
        Temporada();
        Temporada(int, int, int, Episodio*);
        void setNumTemporada(int);
        void setNumEpisodios(int);
        void setEpisodios(Episodio*);
        void setCalificacion(int);
        int getNumTemporada();
        Episodio* getEpisodio();
        Episodio getEpisodio(int numEpisodio);
        int getCalificacion();
        int getNumEpisodios();
        void mostrarTemporada();
        void mostrarEpisodios();
        void mostrarEpisodios(int);
        //~Temporada();
};

#endif //Temporada.h
