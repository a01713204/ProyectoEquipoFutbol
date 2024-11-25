#ifndef MIEMBRO_H
#define MIEMBRO_H 
#include <iostream> 
using namespace std;
class Miembro {
    
protected:
    string nombre;
    float salario;// en pesos

public:
    // Constructor por omisión o defecto
    Miembro() {
        nombre = "desconocido";
        salario = 0;
    }

    // Constructor de parámetros
    Miembro(string _nombre, float _salario) {
        nombre = _nombre;
        salario= _salario;
    }
    // Getters
    string getNombre()  { 
        return nombre; 
        }
    float getSalario()  {
        return salario; 
        }
    

    // Setters
    void setNombre(string _nombre) { 
        nombre = _nombre; 
        }
    void setSalario(float _salario) { 
        salario = _salario; 
        }

    virtual void imprimeDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario: $" << salario << endl;
    }
};
#endif
