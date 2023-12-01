#include <iostream>
using namespace std;

class Avion{
private:
    string modelo;
    string fabricante;
    int capacidad;
public:
    Avion(){
    modelo="Boeing 375";
    capacidad=250;
    fabricante="Boeing";
    }

    Avion(string _modelo,string _fabricante,int _capacidad){
        modelo=_modelo;
        fabricante=_fabricante;
        capacidad=_capacidad;
    }
    
    void calculaCapacidad(){
        
    }
    void muestraAvion(){
        cout<<endl<<"Informacion sobre el avion "<<endl;
        cout<<"     Modelo: "<<modelo<<endl;
        cout<<"     Fabricante: "<<fabricante<<endl;
        cout<<"     Capacidad de pasajeros: "<<capacidad<<endl;
    }

   

};
