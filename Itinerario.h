
#include<iostream> // prints
#include <string>

using namespace std;
#include "Pasajero.h"

class Itinerario{
    private:
        string hora;
        string fecha;
        string destino;
        string gate;
        float precio;
        Pasajero asiento;
        string horarios[18]; 

    public:
        //Constructor de Itinerario
        Itinerario(string _hora, string _fecha, string _destino, string _gate, float _precio, Pasajero _asiento){
            hora = _hora;
            fecha = _fecha;
            destino = _destino;
            gate = _gate;
            precio = 102.55;
            asiento = _asiento;

            horarios[0] = "AMX1234 MTY AeroMexico 112 7 32";
            horarios[1] = "VOI0377 GDL Volaris 96 8 5";
            horarios[2] = "AMX0556 MEX AeroMexico 65 8 25";
            horarios[3] = "VB0012 CUN VivaAerobus 103 9 21";
            horarios[4] = "VB1122 MTY VivaAerobus 76 11 10";
            horarios[5] = "AMX1144 ORD AeroMexico 123 13 45";
            horarios[6] = "VB4568 CUN VivaAerobus 99 15 32";
            horarios[7] = "VOI3899 MEX Volaris 135 17 23";
            horarios[8] = "VOI1124 GDL Volaris 78 18 11";
            horarios[9] = "AMX0025 CUN AeroMexico 145 20 5";
            horarios[10] = "AMX0120 MTY Aeromexico 98 21 55";
            horarios[11] = "ACA0145 YUL AirCanada 151 10 30",
            horarios[12] = "ACA1105 YUL AirCanada 127 12 45";
            horarios[13] = "AFR0088 CDG AirFrance 134 13 10";
            horarios[14] = "AFR0077 CDG AirFrance 111 14 21";
            horarios[15] = "UAL0023 ORD UnitedAirLines 120 14 50";
            horarios[16] = "UAL0124 YUL UnitedAirLines 123 17 46";
            horarios[17] = "DAL9988 ORD DeltaAirLines 111 23 33";
            horarios[18] = "DAL7766 ORD DeltaAirLines 122 23 59";
        }

        // Constructor por default
        Itinerario(){
            hora = "12:00 AM";
            fecha = "20/07/23";
            destino = "Madrid";
            gate = "A2";
           // asiento = "";
        }

        // Getter que encuentra la hora que tiene el vuelo
        string getHora(){
            return hora;
        }
        // Setter que inicializa el valor de hora del vuelo
        void setHora(string _hora){
            hora = _hora;
        }
        // Getter que encuentra la fecha del vuelo
        string getFecha(){
            return fecha;
        }
        // Setter que inicializa el valor de fecha  del vuelo
        void setLocalidad(string _fecha){
            fecha = _fecha;
        }

        // Getter que encuentra el destino 
        string getDestino(){
            return destino;
        }
        // Setter que inicializa el valor del destino 
        void setDestino(string _destino){
            destino= _destino;
        }

         // Getter que encuentra el numero de gate que tiene el vuelo
        string getGate(){
            return gate;
        }
        // Setter que inicializa el valor del gate del vuelo
        void setGate(string _gate){
            gate = _gate;
        }

        float getPrecio(){
            return precio;
        }
        void setPrecio(float _precio){
            precio = _precio;
        }

        Pasajero getAsiento(){
            return asiento;
        }
        //Le pide al usuario buscar un vuelo
        void buscarVuelo(){
            cout<<"\nIngresa la Hora: ";
            cin>> hora;

            cout<<"\nIngresa la fecha: ";
            cin>>fecha;

            cout<<"\nIngresa el destino: ";
            cin>>destino;

            //cout<<"\n Gate Numero: A2";
        }

        string Itinerario_toString(){
            string info = "\nHora: " + getHora() + "AM\n";
            info += "Fecha: " + getFecha() + "\n";
            info += "Destino: " + getDestino()+"\n";
            info += "Gate: A2\n";
            info += "Precio Boleto: " + to_string(getPrecio())+"\n";
            info += "Informacion Personal:\n" + asiento.Pasajero_toString();
            info+= "\nRecuerde estar al menos tres horas antes en la terminal\n";
            info += "Buen Viaje!\n";
            cout<<"";

            //*** For loop to traverse each index in the array and print every value ***///
              for (int i = 0; i < 18; ++i){
                info += horarios[i] + "\n";
            }
            return info;  
        }
};