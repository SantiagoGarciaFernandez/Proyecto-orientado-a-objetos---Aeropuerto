#include<iostream> // prints
#include <string>

using namespace std;
//#include "Itinerario.h"

class Pasajero{
    private:
        string nombre;
        int edad;
        string nacionalidad;
        int numMaletas;
        //Itinerario* vuelo;

    public:
        //Constructor
        Pasajero(string _nombre, int _edad, string _nacionalidad, int _numMaletas /*Itinerario vuelo*/){
            nombre = _nombre;
            edad = _edad;
            nacionalidad = _nacionalidad;
            numMaletas = _numMaletas;
            //vuelo("","","","");
        }
        
        Pasajero(){
            nombre = "Juan";
            edad = 35;
            nacionalidad = "Mexico";
            numMaletas = 2;

        }
       
        string getNombre(){
            return nombre;
        }
        void setName(string _nombre){
            nombre = _nombre;
        }

        int getEdad(){
            return edad;
        }
        void setEdad(int _edad){
            edad = _edad;
        }

        string getNacionalidad(){
            return nacionalidad;
        }
        void setNacionalidad(string _nacionladidad){
            nacionalidad = _nacionladidad;
        }

        int getNumMaletas(){
            return numMaletas;
        }
        void setMaletas(int _numMaletas){
            numMaletas = _numMaletas;
        }
        
        // Display informacion sobre el pasajero
        string Pasajero_toString(){
            string info = "\nNombre: " + getNombre() + "\n";
            info += "Edad: " + to_string(getEdad()) + "\n";
            info += "Nacionalidad: " + getNacionalidad() + "\n";
            info += "Numero de Maletas: " + to_string(getNumMaletas()) + "\n";

            return info;

        }
};