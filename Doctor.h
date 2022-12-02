/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================
*/

/*
Clase Doctore una clase hija de la clase Trabajador. Además la clase cuenta con una 
funcion que permite aumentar la cantidad del registro de pacientes atendidos por el
Doctor.
*/

#ifndef DOCTOR_H_
#define DOCTOR_H_

//Bibliotecas y clase padre Trabajador
#include <string>
#include "Trabajador.h"
#include "Especialidad.h"

using namespace std;

class Doctor: public Trabajador{

    private:
        //Declaracion de los atributos
        int pacientes_atendidos;
        Especialidad esp;

    public:
        //Constructor
        Doctor(): Trabajador(){
            pacientes_atendidos = 0;
        }
        Doctor(int p_a, string n_e, string tip, string n_p, string nom, string fic, int eda, string jor): Trabajador(nom, fic, eda, jor){
            pacientes_atendidos = p_a;
            esp = Especialidad(n_e, tip, n_p);
        }

        //Getters
        int get_pacientes_atendidos();
        Especialidad get_especialidad();

        //Setters
        void set_pacientes_atendidos(int p_a);

        //Funciones
        void atender_pacientes(int num_pacientes);
};

//Getters
int Doctor::get_pacientes_atendidos(){
    return pacientes_atendidos;
}

Especialidad Doctor::get_especialidad(){
    return esp;
}

//Setterns
void Doctor::set_pacientes_atendidos(int p_a){
    if(p_a > 0){
        pacientes_atendidos = p_a;
    } else {
        pacientes_atendidos = 0;
    }
}

//Funciones
void Doctor::atender_pacientes(int num_pacientes){
    pacientes_atendidos = pacientes_atendidos + num_pacientes;
}

#endif