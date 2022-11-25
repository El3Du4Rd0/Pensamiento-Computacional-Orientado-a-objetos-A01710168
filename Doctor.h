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

//Bibliotecas y clase padre Trabajador
#include <string>
#include "Trabajador.h"

using namespace std;

class Doctor: public Trabajador{

    private:
        //Declaracion de los atributos
        int pacientes_atendidos;

    public:
        //Constructor
        Doctor();
        Doctor(int p_a, string nom, string fic, int eda, string jor): Trabajador(nom, fic, eda, jor){
            pacientes_atendidos = p_a;
        }

        //Getters
        int get_pacientes_atendidos();

        //Setters
        void set_pacientes_atendidos(int p_a);

        //Funciones
        void atender_pacientes(int num_pacientes);
};

//Getters
int Doctor::get_pacientes_atendidos(){
    return pacientes_atendidos;
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
