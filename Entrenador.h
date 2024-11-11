#ifndef ENTRENADOR_H
#define ENTRENADOR_H 
#include <iostream> 
using namespace std;
class Entrenador {
    
private:
    string nombre;
    float experiencia; //en años como entrenador

public:
    // Constructor por omisión o defecto
    Entrenador() {
        nombre = "desconocido";
        experiencia = 0;

    }

    // Constructor de parámetros
    Entrenador(string _nombre, float _experiencia) {
        nombre = _nombre;
        experiencia = _experiencia;
    }
    // Getters
    string getNombre()  { 
        return nombre; 
        }
    float getExperiencia()  {
        return experiencia; 
        }

    // Setters
    void setNombre(string _nombre) { nombre = _nombre; }
    void setExperiencia(float _experiencia) { experiencia = _experiencia; }

    void imprime_datos(){
        cout << "Entrenador: " << nombre << ", Años de experiencia: "<< experiencia << endl;
    }

};
#endif
