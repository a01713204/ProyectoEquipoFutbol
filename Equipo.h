//Clase compuesta
#ifndef EQUIPO_H
#define EQUIPO_H

#include <iostream>
#include <vector>
#include "Jugador.h"
#include "Entrenador.h"
#include "Partido.h"

class Equipo {
    private:
        vector<Jugador> jugadores;
        Entrenador entrenador;
        vector<Partido> partidos;
    
    public:
        Equipo(){
            //COnstructor
        }

        //Getters
        vector <Jugador> getJugadores(){
            return jugadores;
        }
        Entrenador getEntrenador(){ //No se usa vector debeido a que solo es uno
            return entrenador;
        }
        vector <Partido> getPartidos(){
            return partidos;
        }
        //Implementamos la composicion
        Jugador agregarJugador(string nombre, float salario, string posicion, float edad){
            Jugador nuevo = Jugador(nombre, edad, posicion, salario);
            jugadores.push_back(nuevo);
            return nuevo;    
        }
        void eliminarJugador(int indice){
            jugadores.erase(jugadores.begin() + indice);//preguntar al profesor
        }
        Partido agregarPartido(string rival, int goles_contra, int goles_favor) {
        Partido nuevo = Partido(rival, goles_contra, goles_favor);
        partidos.push_back(nuevo);
        return nuevo;
        }
        void eliminarPartido(int indice){
            partidos.erase(partidos.begin() + indice);//preguntar al profesor
        }

        void ver_equipo(){
            cout<< "Equipo: "<<endl;
            cout << "Entrenador: "<<endl;
            entrenador.imprime_datos();
            cout<< "Jugadores: "<< endl;
            for(int i = 0; i < jugadores.size(); i++){
                cout<< "Jugador "<< i+1<<":" << endl; 
                jugadores[i].imprime_datos();
            }
            cout<< "Partidos: "<<endl;
            for(int i = 0; i < partidos.size(); i++){
                cout<< "Partido"<< i+1<<":"<<endl;
                partidos[i].imprime_datos();
            }
        }
};
#endif
