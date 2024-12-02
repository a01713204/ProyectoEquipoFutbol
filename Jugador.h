#ifndef JUGADOR_H
#define JUGADOR_H 
#include "Miembro.h"
#include <iostream> 
using namespace std;
class Jugador:public Miembro { //Se incluye la clase miembro, ya que tiene atributos de la misma
    
private:
    float edad;   // años
    string posicion;

public:
    // Constructor por omisión o defecto
    Jugador(): Miembro(){ //nuestra clase miembro que comparte atributos con jugador
        edad = 0;
        posicion = "desconocida";

    }

    // Constructor de parámetros de la clase jugador y la clase miembro
    Jugador(string _nombre, float _salario, float _edad, string _posicion): Miembro(_nombre, _salario) {
        edad = _edad;
        posicion = _posicion;
    }
    //getters
    float getEdad() { 
        return edad;
        }
    string getPosicion() { 
        return posicion; 
        }
    //setters
    void setEdad(float _edad) {
        edad = _edad;
         }
    void setPosicion(string _posicion) {
         posicion = _posicion; 
         }
    //Mostramos los datos de jugador
    void imprimeDatos(){
        cout << "Jugador: "<< endl;
        Miembro::imprimeDatos(); //Se aplicará el "imprimeDatos" que se implementó en la clase Miembro
        cout<< "Edad: " << edad<< endl;
        cout <<", Posición" << posicion<< endl;
    }

};
#endif
