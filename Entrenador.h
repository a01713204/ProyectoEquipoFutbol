#ifndef ENTRENADOR_H
#define ENTRENADOR_H 
#include "Miembro.h"
#include <iostream> 
using namespace std;
class Entrenador :public Miembro {
    
private:
    string experiencia; //en años como entrenador
    int titulos;

public:
    // Constructor por omisión o defecto
    Entrenador(): Miembro() {
        experiencia = "Sin experiencia";
        titulos= 0;

    }

    // Constructor de parámetros
    Entrenador(string _nombre, float _salario, string _experiencia, int _titulos): Miembro (_nombre, _salario) {

        experiencia = _experiencia;
        titulos= _titulos;
    }
    // Getters
    string getExperiencia()  {
        return experiencia; 
        }
    int getTitulos()  {
        return titulos; 
        }
    

    // Setters
    void setExperiencia(string _experiencia) { 
        experiencia = _experiencia; 
        }
    void setTitulos(int _titulos) { 
        titulos = _titulos; 
        }

    void imprimeDatos(){
        cout << "Entrenador: " << endl;
        Miembro:: imprimeDatos();
        cout<<", Años de experiencia: "<< experiencia << endl;
        cout<< " Títulos: "<< titulos<< endl;
    }

};
#endif
