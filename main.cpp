#include <iostream> //el # es para importar una librería
#include "Equipo.h" //Solo incluimos la clase equipo porque esta ya esta conformada de todas las clases
using namespace std;
int main() {
    Equipo equipo;
    // Mostrar cada clase dandalo nombre y valor a cada atributos de nuestras clases
    equipo.agregarJugador("Pablo Torres", 5000, 19, "Delantero");//Se generara una lista de hasta 20 jugadores
    equipo.agregarJugador("Leo Messi", 100000, 37,"Delantero");
    equipo.agregarJugador("Cristiano Ronaldo", 1000, 39,"Delantero");
    equipo.agregarJugador("Lamine Yamal", 60455, 17, "Extremo derecho");
    
    Entrenador entrenador("Pep Guardiola", 5000, "5 años", 30);//Se agregará un solo entrenador
    equipo.agregarPartido("Tec Qro", 3, 2);//Se hace la lista de partidos
    equipo.agregarPartido("Real Madrid", 8, 2);

    equipo.ver_equipo();
    return 0;
}
