/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================

Descripcion:
clase Especialidad es parte de la calse doctores, lo que le proporcionara mas atributos y
sus respectivos metodos.
*/

#ifndef ESPECIALIDAD_H_
#define ESPECIALIDAD_H_

#include <string>

using namespace std;

class Especialidad{
    private:
        //Declaracion de los atributos
        string nombre_especialidad;
        string tipo;
        string nivel_posgrado;

    public:
        //Constructor
        Especialidad(){
            nombre_especialidad = "";
            tipo = "";
            nivel_posgrado = "";
        };
        Especialidad(string n_e, string tip, string n_p){
            nombre_especialidad = n_e;
            tipo = tip;
            nivel_posgrado = n_p;
        }

        //Getters
        string get_nombre_especialidad();
        string get_tipo();
        string get_nivel_posgrado();

        //Setters
        void set_nombre_especialidad(string n_e);
        void set_tipo(string tip);
        void set_nivel_posgrado(string n_p);
};

//Declarar funciones
string Especialidad::get_nombre_especialidad(){
    return nombre_especialidad;
}

string Especialidad::get_tipo(){
    return tipo;
}

string Especialidad::get_nivel_posgrado(){
    return nivel_posgrado;
}

void Especialidad::set_nombre_especialidad(string n_e){
    nombre_especialidad = n_e;
}

void Especialidad::set_tipo(string tip){
    tipo = tip;
}

void Especialidad::set_nivel_posgrado(string n_p){
    nivel_posgrado = n_p;
}

#endif