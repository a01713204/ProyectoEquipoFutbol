#ifndef ENTRENADOR_H
#define ENTRENADOR_H 
#include <iostream> 
using namespace std;
class Entrenador {
    
private:
    string nombre;
    float experiencia; //en años como entrenador
    float salario;// en pesos
    int titulos;

public:
    // Constructor por omisión o defecto
    Entrenador() {
        nombre = "desconocido";
        experiencia = 0;
        salario = 0;
        titulos= 0;

    }

    // Constructor de parámetros
    Entrenador(string _nombre, float _experiencia, float _salario, int _titulos) {
        nombre = _nombre;
        experiencia = _experiencia;
        salario= _salario;
        titulos= _titulos;
    }
    // Getters
    string getNombre()  { 
        return nombre; 
        }
    float getExperiencia()  {
        return experiencia; 
        }
    float getSalario()  {
        return salario; 
        }
    float getTitulos()  {
        return titulos; 
        }
    

    // Setters
    void setNombre(string _nombre) { nombre = _nombre; }
    void setExperiencia(float _experiencia) { experiencia = _experiencia; }
    void setSalario(float _salario) { salario = _salario; }
    void setTitulos(int _titulos) { titulos = _titulos; }

    void imprime_datos(){
        cout << "Entrenador: " << nombre << ", Años de experiencia: "<< experiencia << " Salario: $"<<salario<< " Títulos: "<< titulos<< endl;
    }

};
#endif
