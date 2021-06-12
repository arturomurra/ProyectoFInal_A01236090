#include "Temporada.h"

Temporada::Temporada(){
    numTemporada = 0;
    calificacion = 0;
    numEpisodios = 0;
    eps = NULL;
}
Temporada::Temporada(int numTemporada, int calificacion, int numEpisodios, Episodio *arr){
    eps = arr;
    this->numTemporada = numTemporada;
    this->calificacion = calificacion;
    this->numEpisodios = numEpisodios;
}
void Temporada::setNumTemporada(int num){
    numTemporada = num;
}
void Temporada::setEpisodios(Episodio*arr){
    eps = arr;
}
void Temporada::setCalificacion(int cal){
    calificacion = cal;
}
int Temporada::getNumTemporada(){
    return numTemporada;
}
Episodio* Temporada::getEpisodio(){
    return eps;
}
Episodio Temporada::getEpisodio(int numEpisodio){
    return eps[numEpisodio];
}
int Temporada::getCalificacion(){
    return calificacion;
}

void Temporada::mostrarTemporada(){
    cout<<"Numero de temporada: "<<numTemporada<<"\n";
    cout<<"Numero de Episodios: "<<numEpisodios<<"\n"; 
    cout<<"Calificacion: "<<calificacion<<"\n"; 
}

void Temporada::mostrarEpisodios(){
    cout<<"Episodios: \n";
    for(int i = 0; i<numEpisodios; i++){
        cout<<"Nombre: " <<eps[i].getNombre()<<"\n";
        cout<<"Duracion: "<<eps[i].getDuracion()<<"\n";
    }
}

void Temporada::mostrarEpisodios(int n){
    cout<<"Episodio "<<n<<":\n";
    cout<<"Nombre: " <<eps[n].getNombre()<<"\n";
    cout<<"Duracion: "<<eps[n].getDuracion()<<"\n";
}