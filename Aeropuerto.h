
#include<iostream> // prints
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Aeropuerto{
    private:
        int numeroHorarios; //Cantidad de horarios disponibles
        string disponibilidad[7]; 
        int num_gates;
        string lugar; // Lugar Aeropuerto
        string nombre; // Nombre Aeropuerto
        int numPistas;
        string codigosAeropuertos[6];
    
    public:
        // Constructor que toma el numero de gates y horario 
        Aeropuerto(string _nombre,string _lugar, int _pistas, int numGates){
            lugar = _lugar;
            nombre = _nombre;
            num_gates = numGates;
            numPistas = _pistas;
            disponibilidad[0] = "(1). 00:00-1:00 AM";
            disponibilidad[1] = "(2). 1:00-2:00 AM";
            disponibilidad[2] = "(3). 2:00-3:00 AM";
            disponibilidad[3] = "(4). 3:00-4:00 AM";
            disponibilidad[4] = "(5). 4:00-5:00 AM";
            disponibilidad[5] = "(6). 5:00-6:00 AM";
            disponibilidad[6] = "(7). 6:00-7:00 AM";
            
            // Pruebas de aeropuertos
            codigosAeropuertos[0] = "MEX Aeropuerto_Internacional_Benito_Juarez Ciudad_de_Mexico Mexico";
            codigosAeropuertos[1] = "MTY Aeropuerto_Internacional_Gral_Mariano_EScobedo Monterrey Mexico";
            codigosAeropuertos[2] = "GDL Aeropuerto_Internacional_Miguel_Hidalgo Guadalajara Mexico";
            codigosAeropuertos[3] = "CUN AEropuerto_Internacional_de_Cancun Cancun Mexico";
            codigosAeropuertos[4] = "ORD Aeropuerto_Internacional_O_Hare Chicago EUA";
            codigosAeropuertos[5] = "YUL Aeropuerto_Internacional_Pierre_Elliott_Trudeau Montreal Canada";
            codigosAeropuertos[6] = "CDG Aeropuerto_Internacional_de_Paris_Charles_de_Gaulle Paris Francia";

        }
        // Getter que encuentra el nombre que tiene el aeropuerto
        string getNombre(){
            return nombre;
        }
        // Setter que inicializa el valor del nombre del aeropuerto
        void setNombre(string _nombre){
            nombre = _nombre;
        }
        // Getter que encuentra lo localizacion del aeopuerto
        string getLocalidad(){
            return lugar;
        }
        // Setter que inicializa el valor de localidad  del aeropuerto
        void setLocalidad(string _lugar){
            lugar = _lugar;
        }

        // Getter que encuentra el numero de gates que tiene el aeropuerto
        int getNumGate(){
            return num_gates;
        }
        // Setter que inicializa el valor del numero de gates
        void setNumGates(int _numGates){
            num_gates= _numGates;
        }

         // Getter que encuentra el nombre que tiene el aeropuerto
        int getPistas(){
            return numPistas;
        }
        // Setter que inicializa el valor del nombre del aeropuerto
        void setNombre(int _pistas){
            numPistas = _pistas;
        }

        // Hace display la informacion del aeropuerto con su numero de gates y horarios disponibles
        string aeropuerto_toString(){
            numeroHorarios = 7;
            string info = "Nombre Aeropuerto: " + getNombre() + "\n";
            info += "Localizacion: " + getLocalidad() + "\n";
            info += "Numero de Gates: " + to_string(getNumGate()) + "\n";
            info += "Numero de pistas: " + to_string(getPistas()) + "\n";
            info += "Horarios Disponibles:\n";
            for (int i = 0; i < numeroHorarios; ++i){
                info += disponibilidad[i] + "\n";
            }
            

            //*** For loop to traverse each index in the array and print every value ***///
               for (int i = 0; i < 6; ++i){
                info += codigosAeropuertos[i] + "\n";
            }

            return info;
    }

        // Funcion pregunta al aerolinea que horario quiere ocupar 
        void escogerHorario(){
            int horario;
            cout<<"Escoger el numero del horario que desea utilizar: ";
            cin>>horario;

            // Serie de ifs para comparar la seleccion del usurio con el horario dispnible
            if(horario==1){
                cout<<"Su horario es: ";
                cout<<disponibilidad[0] + "\n";
                cout<<"\nHora de Aterrizaje: 00:00 AM \nHora de Despegue: 1:00 AM\n";
            }
            else if(horario==2){
                cout<<"Su horario es: ";
                cout<<disponibilidad[1] + "\n";
                cout<<"\nHora de Aterrizaje: 1:00 AM \nHora de Despegue: 2:00 AM\n";
            }
            else if(horario==3){
                cout<<"Su horario es: ";
                cout<<disponibilidad[2] + "\n";
                cout<<"\nHora de Aterrizaje: 2:00 AM \nHora de Despegue: 3:00 AM";
            }
            else if(horario==4){
                cout<<"Su horario es: ";
                cout<<disponibilidad[3] + "\n";
                cout<<"\nHora de Aterrizaje: 3:00 AM \nHora de Despegue: 4:00 AM\n";
            }
            else if(horario==5){
                cout<<"Su horario es: ";
                cout<<disponibilidad[4] + "\n";
                cout<<"\nHora de Aterrizaje: 4:00 AM \nHora de Despegue: 5:00 AM\n";
            }
            else if(horario==6){
                cout<<"Su horario es: ";
                cout<<disponibilidad[5] + "\n";
                cout<<"\nHora de Aterrizaje: 5:00 AM \nHora de Despegue: 6:00 AM\n";
            }
            else if(horario==7){
                cout<<"Su horario es: ";
                cout<<disponibilidad[6] + "\n";
                cout<<"\nHora de Aterrizaje: 6:00 AM \nHora de Despegue: 7:00 AM\n";
            }
            else{
                cout<<"No hay mas disponibilidad";
            }
            // Imprime el horario seleccionado
        }
              
};
