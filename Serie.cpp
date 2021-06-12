#include "Serie.h"

Serie::Serie(){
    numTemporadas = 0;
    temps = NULL;
    calificacion = 0;
}

Serie::Serie(int id, string nombre, int duracion, string genero, int n, Temporada *arr){
    this->id = id;
    this->nombre = nombre;
    this->duracion = duracion;
    this->genero = genero;
    numTemporadas = n;
    temps = arr;
    for(int i = 0; i<n; i++){
        calificacion+=arr[i].getCalificacion();
    }
    calificacion = calificacion/n;
}

void Serie::setNumTemporadas(int n){
    numTemporadas = n;
}

void Serie::setTemporadas(Temporada *arr){
    temps = arr;
}

void Serie::setTemporadas(Temporada temp, int n){
    temps[n] = temp;
}

void Serie::setCalificacion(int n, int cal){
    temps[n].setCalificacion(cal);
    calificacion = 0;
    for(int i = 0; i<n; i++){
        calificacion+=temps[i].getCalificacion();
    }
    calificacion = calificacion/n;
}

int Serie::getNumTemporadas(){
    return numTemporadas;
}

void Serie::mostrarSerie(){
    cout << "El ID de la serie es: " << id << endl;
    cout << "El Nombre de la serie es: " << nombre << endl;
    cout << "La Duracion de la serie es: " << duracion << " minutos." << endl;
    cout << "El Genero de la serie es: " << genero << endl;
    cout << "La calificacion de la serie es: " << calificacion << endl;
    cout << "El numero de temporadas es: " << numTemporadas << endl << endl;
    for(int i = 0; i<numTemporadas; i++){
        temps[i].mostrarTemporada();
        temps[i].mostrarEpisodios();
    }
}

void Serie::mostrarTemporadas(){
    for(int i = 0; i<numTemporadas; i++){
        temps[i].mostrarTemporada();
    }
}

void Serie::mostrarTemporadas(int n){
    temps[n].mostrarTemporada();
}
