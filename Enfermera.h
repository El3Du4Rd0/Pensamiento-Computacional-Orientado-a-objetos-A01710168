/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================
*/

/*
Clase Enfermeras es una clase hija de la clase Trabajador. Además la clase cuenta con una 
funcion que permite aumentar la cantidad del registro de pacientes cuidados por la
enfermera.
*/

#ifndef ENFERMERA_H_
#define ENFERMERA_H_

//Bibliotecas y clase padre Trabajador
#include <string>
#include "Trabajador.h"

using namespace std;

class Enfermera: public Trabajador{

    private:
        //Declaracion de los atributos
        int pacientes_cuidados;

    public:
        //Constructor
        Enfermera():Trabajador(){
            pacientes_cuidados = 0;
        }
        Enfermera(int p_c, string nom, string fic, int eda, string jor): Trabajador(nom, fic, eda, jor){
            pacientes_cuidados = p_c;
        }

        //Getters
        int get_pacientes_cuidados();

        //Setters
        void set_pacientes_cuidados(int p_c);

        //Funciones
        void cuidar_paciente(int num_pacientes);
};

//Declarar funciones
int Enfermera::get_pacientes_cuidados(){
    return pacientes_cuidados;
}

void Enfermera::set_pacientes_cuidados(int p_c){
    if(p_c > 0){
        pacientes_cuidados = pacientes_cuidados + p_c;
    } else{
        pacientes_cuidados = 0;
    }
}

void Enfermera::cuidar_paciente(int num_pacientes){
    pacientes_cuidados = pacientes_cuidados + num_pacientes;
}

#endif