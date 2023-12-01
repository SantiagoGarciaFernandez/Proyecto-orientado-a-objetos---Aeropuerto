
#include<iostream> // prints
#include <string>
using namespace std;

#include "Aeropuerto.h"
#include "Aerolinea.h"
//#include "Pasajero.h"
int main(){
    
    // Abrir archivo de aeropuertos y datos de vuelos
    string line;
    ifstream myfile ("aeropuertos.txt");{
        if (myfile.is_open())
        {
            while(getline(myfile, line)) {
            cout << line << endl;
            }
            myfile.close();
        }
    } 

    string line1;
    ifstream myfile ("datosVuelos.txt");{
        if (myfile.is_open())
        {
            while(getline(myfile, line1)) {
            cout << line1 << endl;
            }
            myfile.close();
        }
    } 

    Pasajero pasajero("Sergio Perez", 33, "Mexico", 1);
    Aeropuerto cdmx("Benito Juarez", "Ciudad de Mexio", 2, 20);
    Aerolinea aerolinea1("British Airways", "Reino Unido", 1000.00);
    Aerolinea aerolinea2("","",10.0);
    
    Itinerario vuelo("","","","",10.0, pasajero);
    cout<<"\nBienvenido al Aeropuerto Internacional de la Ciudad de Mexico\n";
    //! Dos opciones pasajero o aerolinea
    int ingresar;
    
    cout<<"Si eres aerolinea nueva ingresa 1 para ingresar al sistema y agendar tu horario \n";
    cout<<"Si eres pasajero ingresa 2 para ingresar al sistema y agendar tu vuelo \n";
    cin>>ingresar;
    
    if(ingresar == 1){
        cout<<"\n"+cdmx.aeropuerto_toString() + "\n"; 
        aerolinea1.Aerolinea_toString();
        aerolinea2.AerolineaInformacion();
        aerolinea2.Aerolinea_toString();
        aerolinea2.muestraAerolinea();
        cdmx.escogerHorario();
    }
    else if(ingresar ==2){
        cout<<"Su informacion de pasajero es la siguiente\n" +  pasajero.Pasajero_toString() ;
       
        vuelo.buscarVuelo();
        
        //vuelo.setItinerario(&vuelo);
        cout<<"Su vuelo esta agendado y este es el resumen:\n";
        
        cout<< vuelo.Itinerario_toString();
    }
   
    //TODO Incorporar Clase Aerolinea
    return 0;
}