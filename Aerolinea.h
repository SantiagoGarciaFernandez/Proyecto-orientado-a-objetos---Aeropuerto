#include<iostream> // prints
#include <string>

using namespace std;
#include "Itinerario.h"
class Aerolinea{
private:
    string nombre;
    string origen;
    float ingresos;
    float comision;
    //flota Avion;
    Itinerario* vuelo;
public:
/*
    Aerolinea(){
        nombre="Aeromexico";
        origen="Mexicano";
        ingresos=0.00;
        comision=10000.00;
    }
*/
    Aerolinea(string _nombre,string _origen,float _ingresos/*float _comision*/){
        nombre=_nombre;
        origen=_origen;
        ingresos=_ingresos;
        //comision=_comision;
    }

    void AerolineaInformacion(){
            cout<<"\nIngrese nombre de la Aerolinea: ";
            cin>> nombre;

            cout<<"\nLugar de Origen: ";
            cin>>origen;

            cout<<"\nIngresa los ingresos promedios: \n";
            cin>>ingresos;

            //cout<<"Precio boleto: "<<Itinerario_toString();
    }
    //getVuelo()
    void calcula_comision(){
        comision = comision*0.10;
    }
    void setIngresos(float _ingresos){
        ingresos = _ingresos;
    }
     void setItinerario(Itinerario* _itinerario){
        vuelo = _itinerario;
    }

    string getNombre(){
        return nombre;
    }

    string getOrigen(){
        return origen;
    }
    float getIngresos(){
        return ingresos;
    }
    
    string Aerolinea_toString(){
            string info = "\nHora: " + getNombre() + "AM\n";
            info += "Fecha: " + getOrigen() + "\n";
            info+="Ingresos: " + to_string(getIngresos());
            return info;  
    }

    void muestraAerolinea(){
        cout<<endl<<"Informacion de la aerolinea"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Origen: "<<origen<<endl;
        cout<<"Ingresos: "<<ingresos<<endl;
        cout<<"Comision: "<<comision<<endl;
        cout<<"Ingresos: "<<ingresos+comision<<"\n";
    }


};



