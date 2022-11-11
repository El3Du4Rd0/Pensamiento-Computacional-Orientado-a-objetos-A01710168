/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 11/11/2022
============================================================================================
*/

/*
* Clase Paciente contiene los principales atributos de los pacientes, junto con
* los principales metodos para tomarles los datos.
*/

//bibliotecas
#include <string>

using namespace std;

//Declaracion de clase Pacientes
class Pacientes {
    
    private:
        //Declaracion de los atributos
        string nombre;
        int edad;
        string padecimiento;

    public:
        //Constructor
        Pacientes();
        Pacientes(string nom, int eda, string pad){
            nombre = nom;
            edad = eda;
            padecimiento = pad;
        }

        //Getters
        string get_nombre();
        int get_edad();
        string get_padecimiento();

        //Setters
        void set_nombre(string );
        void set_edad(int );
        void set_padecimiento(string );
};

//Declarar funciones
string Pacientes::get_nombre(){
    return nombre;
}
int Pacientes::get_edad(){
    return edad;
}
string Pacientes::get_padecimiento(){
    return padecimiento;
}

void Pacientes::set_nombre(string nom){
    nombre = nom;
}
void Pacientes::set_edad(int eda){
    if (eda > 0){
        edad = eda;
    }else{
        edad = 0;
}
}
void Pacientes::set_padecimiento(string pad){
        padecimiento = pad;