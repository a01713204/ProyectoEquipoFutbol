#include <iostream> //el # es para importar una librería
#include "Equipo.h"
using namespace std;
int main() {
    Equipo equipo;
    // Mostrar cada clase
    equipo.agregarJugador("Pablo Torres", 5000, 19, "Delantero");
    equipo.agregarJugador("Leo Messi", 100000, 37,"Delantero");
    equipo.agregarJugador("Cristiano Ronaldo", 1000, 39,"Delantero");
    equipo.agregarJugador("Lamine Yamal", 60455, 17, "Extremo derecho");

    Entrenador entrenador("Pep Guardiola", 5000, "5 años", 30);
    equipo.agregarPartido("Tec Qro", 3, 2);
    equipo.agregarPartido("Real Madrid", 8, 2);

    equipo.ver_equipo();
    return 0;
}
