#include <iostream>
#include "Videoteca.h"
#include "Temporada.h"

using namespace std;

int main()
{
    cout << "Bienvenido a NETFLIX" << endl << endl;
    Pelicula p1 (125, "Titanic", 95, "Drama");
    Pelicula p2 (103, "Rango", 125, "Accion");

    p1.evaluar(4);
    p2.evaluar(5);
    //p1.mostrarPelicula();
    Pelicula * peliculas = new Pelicula[2];
    peliculas[0] = p1;
    peliculas[1] = p2;

    //Serie 1
    Episodio ep1 (54, "Me mori");
    Episodio ep2 (62, "Me sepultaron");

    Episodio ep3 (60, "Revivi");
    Episodio ep4 (58, "Me volvi a morir");

    Episodio * episodios = new Episodio[2];
    Episodio * episodios2 = new Episodio[2];

    episodios[0] = ep1;
    episodios[1] = ep2;

    episodios2[0] = ep3;
    episodios2[1] = ep4;

    Temporada t1 (1, 4, 2, episodios);
    Temporada t2 (2, 5, 2, episodios2);

    Temporada * temporadas = new Temporada[2];

    temporadas[0] = t1;
    temporadas[1] = t2;

    Serie s1 (302, "Buscando a willy", 453, "Drama", 2, temporadas);

    //Serie 2

    Episodio ep21 (54, "Hola");
    Episodio ep22 (62, "Adios");

    Episodio ep23 (54, "Como estas");
    Episodio ep24 (62, "Ya me voy");

    Episodio * episodios3 = new Episodio[2];
    Episodio * episodios4 = new Episodio[2];

    episodios3[0] = ep21;
    episodios3[1] = ep22;

    episodios4[0] = ep23;
    episodios4[1] = ep24;

    Temporada t21 (1, 4, 2, episodios3);
    Temporada t22 (2, 5, 2, episodios4);

    Temporada * temporadas1 = new Temporada[2];

    temporadas1[0] = t21;
    temporadas1[1] = t22;

    Serie s2 (302, "Survivor", 453, "Accion", 2, temporadas1);

    Serie * series = new Serie[2];

    series[0] = s1;
    series[1] = s2;

    Videoteca v1 (peliculas, 2, series, 2);
    v1.enlistar();

    return 0;
}
