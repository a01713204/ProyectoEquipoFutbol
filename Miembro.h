#ifndef MIEMBRO_H //Esta clase va a conformar a la clase jugador y entrenador
#define MIEMBRO_H 
#include <iostream> 
using namespace std;
class Miembro {
    
protected:
    string nombre;//Aqui va a ser el nombre del entrenador y de distintos jugadores
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
    //metodo para mostrar los datos de miembro que se implementará en otras clases
    virtual void imprimeDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Salario: $" << salario << endl;
    }
};
#endif
