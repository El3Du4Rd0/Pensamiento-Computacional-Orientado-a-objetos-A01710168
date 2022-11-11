/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 11/11/2022
* Metodos: setters(), getters()
============================================================================================
*/

//Bibliotecas y clases
#include <iostream>
#include <string>
#include "Doctores.h"
#include "Pacientes.h"
#include "Enfermeras.h"

using namespace std;

//funcion imprime un menu
void menu(){
    cout << "Selecciona una opcion:" << endl;
    cout << "1. Doctor" << endl;
    cout << "2. Paciente" << endl;
    cout << "3. Enfermera" << endl;
}

int main(){
    //introduccion
    cout << "Este programa sirve para generar objetos sobre las" << endl;
    cout << "distintas personas que conforman un hospital" << endl;

    //Ejemplos de objetos
    cout << "Ejemplos:" << endl;

    Doctores doctor_1("Pablo", 35, 2, "General");
    cout << doctor_1.get_nombre() << endl;
    cout << doctor_1.get_edad() << endl;
    cout << doctor_1.get_consultorio() << endl;
    cout << doctor_1.get_especialidad() << endl;

    Pacientes paciente_1("Juan", 12, "Covid-19");
    cout << paciente_1.get_nombre() << endl;
    cout << paciente_1.get_edad() << endl;
    cout << paciente_1.get_padecimiento() << endl;

    Enfermeras enfermera_1("Maria", 41, "Urgencias");
    cout << enfermera_1.get_nombre() << endl;
    cout << enfermera_1.get_edad() << endl;
    cout << enfermera_1.get_area() << endl;

    return 0;
}