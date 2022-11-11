/*
============================================================================================
* Proyecto: Hospital funcional
* Nombre: Juan Eduardo Rosas Ceron 
* Matricula: A01710168
* Fecha: 11/11/2022
============================================================================================
*/

/*
* Clase Enfermeras sirve para clasificar el area donde laburan las
* enfermeras a lo largo del hospital.
*/

//bibliotecas
#include <string>

using namespace std;

//Declaracion de clase Pacientes
class Enfermeras {

    private:
        //Declaracion de los atributos
        string nombre;
        int edad;
        string area;

    public:
        //Constructor
        Enfermeras();
        Enfermeras(string nom, int eda, string are){
            nombre = nom;
            edad = eda;
            area = are;
        }

        //Getters
        string get_nombre();
        int get_edad();
        string get_area();

        //Setters
        void set_nombre(string );
        void set_edad(int );
        void set_area(string );
};

//Declarar funciones
string Enfermeras::get_nombre(){
    return nombre;
}
int Enfermeras::get_edad(){
    return edad;
}
string Enfermeras::get_area(){
    return area;
}

void Enfermeras::set_nombre(string nom){
    nombre = nom;
}
void Enfermeras::set_edad(int eda){
    if (eda > 0){
        edad = eda;
    }else{
        edad = 0;
}
}
void Enfermeras::set_area(string are){
        area = are;
}