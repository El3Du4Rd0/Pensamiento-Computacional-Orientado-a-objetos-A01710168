/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================
*/

#include <iostream>
#include <string>
#include "Enfermera.h"
#include "Domestico.h"
#include "Doctor.h"

using namespace std;

int main() {

  Enfermera enfermera_1(3, "Maria", "29736459", 42, "2");
  Domestico domestico_1(4, "Luis", "55667788", 57, "1");
  Doctor doctor_1(9, "Jorge", "33333333", 32, "0");

  cout << endl;
  cout << enfermera_1.get_pacientes_cuidados() << endl;
  cout << enfermera_1.get_nombre() << endl;
  cout << enfermera_1.get_ficha() << endl;
  cout << enfermera_1.get_edad() << endl;
  cout << enfermera_1.get_jornada() << endl;
  cout << endl;
  cout << domestico_1.get_banios_lavados() << endl;
  cout << domestico_1.get_nombre() << endl;
  cout << domestico_1.get_ficha() << endl;
  cout << domestico_1.get_edad() << endl;
  cout << domestico_1.get_jornada() << endl;
  cout << endl;
  cout << doctor_1.get_pacientes_atendidos() << endl;
  cout << doctor_1.get_nombre() << endl;
  cout << doctor_1.get_ficha() << endl;
  cout << doctor_1.get_edad() << endl;
  cout << doctor_1.get_jornada() << endl;
  
  return 0;
 }