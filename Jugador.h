#ifndef JUGADOR_H
#define JUGADOR_H //Nos sirve de prevención
#include <iostream> //el # es para importar una librería
using namespace std;
class Jugador {
    
private:
    string nombre;
    float edad;   // años
    string posicion;
    float salario; //pesos

public:
    // Constructor por omisión o defecto
    Jugador() {
        nombre = "desconocido";
        edad = 0;
        posicion = "desconocida";
        salario=0;

    }

    // Constructor de parámetros
    Jugador(string _nombre, float _edad, string _posicion, float _salario) {
        nombre = _nombre;
        edad = _edad;
        posicion = _posicion;
        salario= _salario;
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
    float get_Salario() { 
        return salario; 
        }

    
    void set_Nombre(string _nombre) {nombre = _nombre; }
    void set_Edad(float _edad) {edad = _edad; }
    void set_Posicion(string _posicion) { posicion = _posicion; }
    void set_Salario(float _salario) { salario = _salario; }

    void imprime_datos(){
        cout << "Jugador: " << nombre << ", Edad: " << edad << ", Posición" << posicion<< ". Salario: $" << salario<<endl;
    }

};
#endif
