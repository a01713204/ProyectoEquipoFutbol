#ifndef PARTIDO_H
#define PARTIDO_H //Nos sirve de prevención
#include <iostream> //el # es para importar una librería
using namespace std;
class Partido {
    
private:
    string rival;
    int goles_contra;   
    int goles_favor;

public:
    // Constructor por omisión o defecto
    Partido() {
        rival = "desconocido";
        goles_contra = 0;
        goles_favor = 0;

    }

    // Constructor de parámetros
    Partido(string _rival, int _goles_contra, int _goles_favor) {
        rival = _rival;
        goles_contra = _goles_contra;
        goles_favor = _goles_favor;
    }
    string getRival() { 
         return rival;
     }
    int getGolesContra() { 
        return goles_contra;
         }
    int getGolesFavor() { 
         return goles_favor; 
        }

    // Setters
    void setRival(string _rival) { 
         rival = _rival; 
        }
    void setGolesContra(int _goles_contra) { 
         goles_contra = _goles_contra; 
         }
    void setGolesFavor(int _goles_favor) { 
         goles_favor = _goles_favor; 
        }

    void imprimeDatos(){
        cout << "Partido contra: " << rival << endl;
        cout<<"Marcador:  "<< goles_contra << "-" << goles_favor<< endl;
    }

};
#endif
