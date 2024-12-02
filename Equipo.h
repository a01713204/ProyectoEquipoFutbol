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
        vector<Jugador> jugadores; //Nos ayudará a hacer una lista
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
        //Implementamos la composicion junto con metodos de agregar jugadores en una lista 
        void agregarJugador(string nombre, float salario, float edad, string posicion){
            Jugador nuevo = Jugador(nombre, salario, edad, posicion);
            jugadores.push_back(nuevo);  
        }
        void eliminarJugador(int indice){// Metodo para eliminar jugador y posteriormente lo hacemos con patido
            jugadores.erase(jugadores.begin() + indice);
        }
        void agregarPartido(string rival, int goles_contra, int goles_favor) {
            Partido nuevo = Partido(rival, goles_contra, goles_favor);
            partidos.push_back(nuevo);
        }
        void eliminarPartido(int indice){
            partidos.erase(partidos.begin() + indice);
        }
        //Mostrar datos
        void ver_equipo(){
            cout<< "Equipo: "<<endl;
            cout << "Entrenador: "<<endl;
            entrenador.imprimeDatos();
            cout<< "Jugadores: "<< endl;
            for(int i = 0; i < jugadores.size(); i++){
                cout<< "Jugador "<< i+1<<":" << endl; 
                jugadores[i].imprimeDatos();
            }
            cout<< "Partidos: "<<endl;
            for(int i = 0; i < partidos.size(); i++){
                cout<< "Partido"<< i+1<<":"<<endl;
                partidos[i].imprimeDatos();
            }
        }

};
#endif
