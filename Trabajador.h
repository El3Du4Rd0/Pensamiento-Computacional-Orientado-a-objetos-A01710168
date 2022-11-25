/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================

Descripcion:
clase Trabajador es una clase abtracta que sirve para darle caracteristicas a sus clases hijo
Doctores, Enfermeras, Domesticos. 
*/

#ifndef TRABAJADOR_H_
#define TRABAJADOR_H_

#include<iostream>
#include<string>

using namespace std;

class Trabajador{
    private:
        //Declaracion de los atributos
        string nombre;
        string ficha;
        int edad;
        string jornada;

    public:

        //Constructor
        Trabajador(){
            string nombre = "";
            string ficha = "00000000";
            int edad = 0;
            string jornada = "#";
        }
        Trabajador(string nom, string fic, int eda, string jor){
            nombre = nom;
            ficha = fic;
            edad = eda;
            jornada = jor;
        }

        //Getters
        string get_nombre();
        string get_ficha();
        int get_edad();
        string get_jornada();

        //Setters
        void set_nombre(string);
        void set_ficha(string);
        void set_edad(int);
        void set_jornada(string);
};

//Declarar funciones
string Trabajador::get_nombre(){
    return nombre;
}

string Trabajador::get_ficha(){
    return ficha;
}

int Trabajador::get_edad(){
    return edad;
}

string Trabajador::get_jornada(){
    return jornada;
}

void Trabajador::set_nombre(string nom){
    nombre = nom;
}

void Trabajador::set_ficha(string fic){
    string aux1 = "";
    int aux2 = fic.length();
    int num_ceros = 8 - aux2;
    for(int i = 0; i < num_ceros; i++){
        aux1 = "0" + aux1;
    };
    ficha = aux1 + fic;
}

void Trabajador::set_edad(int eda){
    if (eda > 0){
        edad = eda;
    } else {
        edad = 0;
    };
}

void Trabajador::set_jornada(string jor){
    if (jor.length() == 1){
        jornada = jor;
    } else {
        jornada = "#";
    };
}

#endif