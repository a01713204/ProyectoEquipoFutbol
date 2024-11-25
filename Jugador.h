#ifndef JUGADOR_H
#define JUGADOR_H 
#include "Miembro.h"
#include <iostream> 
using namespace std;
class Jugador:public Miembro {
    
private:
    float edad;   // años
    string posicion;

public:
    // Constructor por omisión o defecto
    Jugador(): Miembro(){
        edad = 0;
        posicion = "desconocida";

    }

    // Constructor de parámetros
    Jugador(float _edad, string _posicion, string _nombre, float _salario): Miembro(_nombre, _salario) {
        edad = _edad;
        posicion = _posicion;
    }
    
    float getEdad() { 
        return edad;
        }
    string getPosicion() { 
        return posicion; 
        }
    
    void setEdad(float _edad) {
        edad = _edad;
         }
    void setPosicion(string _posicion) {
         posicion = _posicion; 
         }

    void imprime_datos(){
        cout << "Jugador: "<< endl;
        Miembro::imprime_datos();
        cout<< "Edad: " << edad<< endl;
        cout <<", Posición" << posicion<< endl;
    }

};
#endif
