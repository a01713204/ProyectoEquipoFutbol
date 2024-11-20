#include <iostream> //el # es para importar una librería
#include "Jugador.h"
#include "Entrenador.h"
#include "Partido.h"
using namespace std;
int main() {
    // Mostrar cada clase
    Jugador jugador1("Pablo Torres", 19, "Delantero", 5000);
    Entrenador entrenador1("Pep Guardiola", 15.8, 1000, 4);
    Partido partido1("Tec Qro", 3, 2);

    jugador1.imprime_datos();
    entrenador1.imprime_datos();
    partido1.imprime_datos();

    return 0;
}
