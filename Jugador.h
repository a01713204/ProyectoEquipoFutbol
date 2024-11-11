#ifndef JUGADOR_H
#define JUGADOR_H //Nos sirve de prevención
#include <iostream> //el # es para importar una librería
using namespace std;
class Jugador {
    
private:
    string nombre;
    float edad;   // años
    string posicion;

public:
    // Constructor por omisión o defecto
    Jugador() {
        nombre = "desconocido";
        edad = 0;
        posicion = "desconocida";

    }

    // Constructor de parámetros
    Jugador(string _nombre, float _edad, string _posicion) {
        nombre = _nombre;
        edad = _edad;
        posicion = _posicion;
    }
    
    string get_Nombre() { 
        return nombre; 
        }
    float get_Edad() { 
        return edad;
        }
    string get_Posicion() { 
        return posicion; 
        }

    
    void set_Nombre(string _nombre) {nombre = _nombre; }
    void set_Edad(float _edad) {edad = _edad; }
    void set_Posicion(string _posicion) { posicion = _posicion; }

    void imprime_datos(){
        cout << "Jugador: " << nombre << ", Edad: " << edad << ", Posición" << posicion<< endl;
    }

};
#endif
