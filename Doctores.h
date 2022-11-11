/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 11/11/2022
============================================================================================
*/

/*
* Clase Doctores contiene los principales atributos de los doctores, ademas
* de los principales metodos para clasificarlos en el hospital.
*/

//bibliotecas
#include <string>

using namespace std;

//Declaracion de clase Doctores
class Doctores {

    private:
        //Declaracion de los atributos
        string nombre;
        int edad;
        int consultorio;
        string especialidad;

    public:
        //Constructor
        Doctores();
        Doctores(string nom, int eda, int con, string esp){
            nombre = nom;
            edad = eda;
            consultorio = con;
            especialidad = esp;
        }

        //Getters
        string get_nombre();
        int get_edad();
        int get_consultorio();
        string get_especialidad();

        //Setters
        void set_nombre(string );
        void set_edad(int );
        void set_consultorio(int );
        void set_especialidad(string );
};

//Declarar funciones
string Doctores::get_nombre(){
    return nombre;
}
int Doctores::get_edad(){
    return edad;
}
int Doctores::get_consultorio(){
    return consultorio;
}
string Doctores::get_especialidad(){
    return especialidad;
}

void Doctores::set_nombre(string nom){
    nombre = nom;
}
void Doctores::set_edad(int eda){
    if (eda > 0){
        edad = eda;
    }else{
        edad = 0;
}
}
void Doctores::set_consultorio(int con){
    if (con > 0){
        consultorio = con;
    }else{
        consultorio = 0;
    }
}
void Doctores::set_especialidad(string esp){
    especialidad = esp;
}