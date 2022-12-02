/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================
*/

/*
Clase Domestico es una clase hija de la clase Trabajador. Además la clase cuenta con una
funcion que le permite aumentar la cantidad del registro de baños lavados por el Domestico.
*/

#ifndef DOMESTICO_H_
#define DOMESTICO_H_

//Bibliotecas y clase padre Trabajador
#include <string>
#include "Trabajador.h"

using namespace std;

class Domestico: public Trabajador{

    private:
        //Declaracion de los atributos
        int banios_lavados;
    
    public:
        //Constructor
        Domestico(): Trabajador(){
            banios_lavados = 0;
        }
        Domestico(int b_l, string nom, string fic, int eda, string jor): Trabajador(nom, fic, eda, jor){
            banios_lavados = b_l;
        }

        //Getters
        int get_banios_lavados();

        //Setters
        void set_banios_lavados(int b_l);

        //Funciones
        void lavar_banios(int num_banios);
};

//Declarar funciones
int Domestico::get_banios_lavados(){
    return banios_lavados;
}

void Domestico::set_banios_lavados(int b_l){
    if(b_l > 0){
        banios_lavados = b_l;
    }else{
        banios_lavados = 0;
    }
}

void Domestico::lavar_banios(int num_banios){
    banios_lavados = banios_lavados + num_banios;
}

#endif