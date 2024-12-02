#ifndef ENTRENADOR_H
#define ENTRENADOR_H 
#include "Miembro.h"
#include <iostream> 
using namespace std;
class Entrenador :public Miembro {//Se incluye la clase Miembro junto con sus atributos
    
private:
    string experiencia; //en años como entrenador
    int titulos;

public:
    // Constructor por omisión o defecto
    Entrenador(): Miembro() {
        experiencia = "Sin experiencia";
        titulos= 0;

    }

    // Constructor de parámetros, tomamos en cuenta los parametros de la clase miembro
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
    //Imprimimos los datos del entrenador, tomando en cuenta los que teníamos de miembro
    void imprimeDatos(){
        cout << "Entrenador: " << endl;
        Miembro:: imprimeDatos();//se imprimen los datos que se mencionaron en la clase Miembros
        cout<<", Años de experiencia: "<< experiencia << endl;
        cout<< " Títulos: "<< titulos<< endl;
    }

};
#endif
