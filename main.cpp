/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 24/11/2022
============================================================================================

Mi proyecto es una herramienta para organizar a los trabajadores de un hospital
*/

//Bibliotecas
#include <iostream>
#include <string>

//Archivos
#include "Enfermera.h"
#include "Domestico.h"
#include "Doctor.h"

using namespace std;

//Funciones

void menuIngresar(){
  int opcion;
  string auxString1, auxString2, auxString3, auxString4, auxString5, auxString6;
  int auxInt1, auxInt2;
  Doctor doc();
  Domestico dom();
  Enfermera enf();

  cout << endl;
  cout << "Seleccione una opcion utizando numeros enteros:\n";
  cout << "1. Ingresar un Doctor. \n";
  cout << "2. Ingresar un Domestico. \n";
  cout << "3. Ingresar una Enfermera. \n";
  cin >> opcion;

  if (opcion > 0 && opcion < 4){
    switch (opcion){
    case 1:
      cout << endl;
      cout << "Ingresa el nombre del Doctor: \n";
      cin >> auxString1;
      cout << "Ingresa su numero de ficha: \n";
      cin >> auxString2;
      cout << "Ingresa su edad: \n";
      cin >> auxInt1;
      cout << "Ingresa su numero de jornada: \n";
      cin >> auxString3;
      cout << "Ingresa la cantidad de pacientes que el Doctor haya atendido: \n";
      cin >> auxInt2;
      cout << "Ingresa el nombre de su especialidad: \n";
      cin >> auxString4;
      cout << "Ingresa el tipo de su especialidad: \n";
      cin >> auxString5;
      cout << "Ingresa el nivel de posgrado del doctor: \n";
      cin >> auxString6;
      cout << "Doctor ingresado. \n";
      break;
    
    case 2:
      cout << endl;
      cout << "Ingresa el nombre del Domestico: \n";
      cin >> auxString1;
      cout << "Ingresa su numero de ficha: \n";
      cin >> auxString2;
      cout << "Ingresa su edad: \n";
      cin >> auxInt1;
      cout << "Ingresa su numero de jornada: \n";
      cin >> auxString3;
      cout << "Ingresa la cantidad de baños que haya lavado: \n";
      cin >> auxInt2;
      cout << "Domestico ingresado. \n";
      break;
    
    case 3:
      cout << endl;
      cout << "Ingresa el nombre de la Enfermera: \n";
      cin >> auxString1;
      cout << "Ingresa su numero de ficha: \n";
      cin >> auxString2;
      cout << "Ingresa su edad: \n";
      cin >> auxInt1;
      cout << "Ingresa su numero de jornada: \n";
      cin >> auxString3;
      cout << "Ingresa la cantidad de pacientes que haya cuidado: \n";
      cin >> auxInt2;
      cout << "Enfermera ingresada. \n";
      break;
    }
  
  if (opcion == 1){
    Doctor doc(auxInt2, auxString4, auxString5, auxString6, auxString1, auxString2, auxInt1, auxString3);
    cout << endl;
    cout << "Nombre del Doctor: \n";
    cout << doc.get_nombre() << endl;
    cout << "Ficha del Doctor: \n";
    cout << doc.get_ficha() << endl;
    cout << "Edad del Doctor: \n";
    cout << doc.get_edad() << endl;
    cout << "Jornada del Doctor: \n";
    cout << doc.get_jornada() << endl;
    cout << "Pacientes atendidos del Doctor: \n";
    cout << doc.get_pacientes_atendidos() << endl;
    cout << "Nombre de la especialidad del Doctor: \n";
    cout << doc.get_especialidad().get_nombre_especialidad() << endl;
    cout << "Tipo de la especialidad del Doctor: \n";
    cout << doc.get_especialidad().get_tipo() << endl;
    cout << "Nivel de posgrado del Doctor: \n";
    cout << doc.get_especialidad().get_nivel_posgrado() << endl;
  }
  if (opcion == 2){
    Domestico dom(auxInt2,auxString1,auxString2,auxInt1,auxString3);
    cout << endl;
    cout << "Nombre del Domestico: \n";
    cout << dom.get_nombre() << endl;
    cout << "Ficha del Domestico: \n";
    cout << dom.get_ficha() << endl;
    cout << "Edad del Domestico: \n";
    cout << dom.get_edad() << endl;
    cout << "Jornada del Domestico: \n";
    cout << dom.get_jornada() << endl;
    cout << "Banios lavados del Domestico: \n";
    cout << dom.get_banios_lavados() << endl;
  }
  if (opcion == 3){
    Enfermera enf(auxInt2,auxString1,auxString2,auxInt1,auxString3);
    cout << endl;
    cout << "Nombre de la Enfermera: \n";
    cout << enf.get_nombre() << endl;
    cout << "Ficha de la Enfermera: \n";
    cout << enf.get_ficha() << endl;
    cout << "Edad de la Enfermera: \n";
    cout << enf.get_edad() << endl;
    cout << "Jornada de la Enfermera: \n";
    cout << enf.get_jornada() << endl;
    cout << "Pacientes cuidados de la Enfermera: \n";
    cout << enf.get_pacientes_cuidados() << endl;
  }
  }
}

int main() {
  string option = "";
  int num = 0;
  cout << "¿Quiere ingresar un trabajador? \n";
  cin >> option; 
  if (option == "si"){
    cout << "¿A cuantos? \n";
    cin >> num;
    for (num; num > 0; num--){
      menuIngresar();
    }
  } else {
    cout << "Fin del programa \n";
  }
  return 0;
 }