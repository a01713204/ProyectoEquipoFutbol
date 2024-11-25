#include <iostream> //el # es para importar una librería
#include "Jugador.h"
#include "Entrenador.h"
#include "Partido.h"
using namespace std;
int main() {
    Equipo equipo;
    // Mostrar cada clase
    equipo.agregarJugador("Pablo Torres", 5000, "Delantero", 19);
    equipo.agregarJugador("Leo Messi", 100000, "Delantero", 37);
    equipo.agregarJugador("Cristiano Ronaldo", 1000, "Delantero", 39);
    equipo.agregarJugador("Lamine Yamal", 60455, "Extremo derecho", 17);Entrenador entrenador("15 años", 4, "Pep Guardiola", 15000);
    

    Entrenador entrenador("Pep Guardiola", 5000, "5 años", 30);
    equipo.agregarPartido("Tec Qro", 3, 2);
    equipo.agregarPartido("Real Madrid", 8, 2);

    equipo.verEquipo();
    return 0;
}
