#include <iostream>   // librerias
#include <stdlib.h>

using namespace std;   // espacio de nombres

   class Taller{

public:
    int max_vehiculos;
    int num_vehiculos;
public:
    Taller(int,int);
    virtual void meter();
    virtual void arreglarvehiculos();
    virtual void parar();
    virtual void arrancar(); 
    virtual void reposar();
    virtual void mostrar();
    virtual void mostrarmoto();

    ~Taller();

};
    class Vehiculo: public Taller{

public:
    string color;
    string marca;
public:
    Vehiculo(int,int,string,string);
    void arrancar()=0;
    void parar()=0;
    void reposar()=0;
  

};
    class coche:public Vehiculo{
private:
    int motor;
public:
    coche(int,int,string,string,int);
    void meter();
    void arreglarvehiculos();
    void arrancar();
    void parar();
    void reposar();
    void mostrar();



};

class moto:public Vehiculo{
    public:
    int cilindrada;
    public:
    moto(int,int,string,string,int);

    void meter();
    void arreglarvehiculos();
    void arrancar();
    void parar();
    void reposar();
    void mostrarmoto();

};


Taller::Taller(int m_vehiculos, int n_vehiculos){

    max_vehiculos = m_vehiculos;
    num_vehiculos = n_vehiculos;


}

void Taller::meter(){

    cout<<"Meter vehiculo para reparar"<<endl;


}


void Taller::parar(){

    cout<<"Si arreglaste el vehiculo se para"<<endl;


}
void Taller::arrancar(){

    cout<<"Si arranca avisamos al cliente"<<endl;


}


void Taller::arreglarvehiculos(){

    cout<<"Arreglar vehiculos"<<endl;
}

void Taller :: reposar(){
    cout<<"Arreglar vehiculos"<<endl;

}
void Taller::mostrar(){

    cout<<"Meter vehiculo para reparar"<<endl;


}

void Taller::mostrarmoto(){

    cout<<"Meter vehiculo para reparar"<<endl;


}



Vehiculo::Vehiculo(int m_vehiculos, int n_vehiculos, string _color, string _marca): Taller(m_vehiculos, n_vehiculos){
    color = _color;
    marca = _marca;


}


coche::coche(int m_vehiculos, int n_vehiculos, string _color, string _marca, int _motor):Vehiculo(m_vehiculos,n_vehiculos,_color,_marca){

    motor = _motor;

}

void coche::meter(){

    cout<<"Meter coche al taller"<<endl;

}

void coche::arreglarvehiculos(){
    cout<<"Areglar coche que no enciende "<<endl;

}

void coche::arrancar(){
    cout<<"Arrancar coche y probar su funcionamiento"<<endl;
}

void coche::parar(){
    cout<<"parar coche y llamar al cliente "<<endl;
}

void coche::reposar(){

    cout<<"Reposar coche , le faltaba la bateria "<<endl;
}

void coche::mostrar(){
    cout<<"maximo de vehiculos: "<<max_vehiculos<<endl;
        cout<<"Numero de vehiculos: "<<num_vehiculos<<endl;




}

moto::moto(int m_vehiculos, int n_vehiculos, string _color, string _marca, int _cilindrada):Vehiculo(m_vehiculos,n_vehiculos,_color,_marca){

cilindrada = _cilindrada;

}


void moto::meter(){
    cout<<"Meter moto al taller"<<endl;

}


void moto::arreglarvehiculos(){
    cout<<"Arreglar moto que le falta el freno"<<endl;
}

void moto::arrancar(){

    cout<<"Arrancar moto para probar su funcionamiento"<<endl;

}


void moto::parar(){

    cout<<"parar moto y llamar al cliente "<<endl;


}


void moto::reposar(){
    cout<<"Reposar moto habia que cambiar el disco "<<endl;
}


void moto::mostrarmoto(){

    cout<<"maximo de vehiculos: "<<max_vehiculos<<endl;
    cout<<"Numero de vehiculos: "<<num_vehiculos<<endl;



}

Taller::~Taller(void) {

    cout << "  " << endl;

}



int main(){

    Taller *vector [2]; // el objeto Taller pertenece al vector que es de a clase Taller
        vector [0] = new  coche (1,1,"Gris","Chevrolet astra",127000); // cramos el primer objeto que deriva de la clase Taller
        vector [1] = new  moto (1,1,"rojo ","Yamaha Crypton",110);

        vector [0] ->meter(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << "Coche marca chevrolet astra 2.0 color azul  \n";
        cout << "\n";
        vector [1] ->meter();
        cout << " Moto Marca Yamaha Crypton 110cc color roja \n";
        cout << "\n";
      
        vector [0] ->arreglarvehiculos(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << " \n";
        cout << "\n";
        vector [1] ->arreglarvehiculos();
        cout << "   \n";
        cout << "\n";

         vector [0] ->arrancar(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << " \n";
        cout << "\n";
        vector [1] ->arrancar();
        cout << "   \n";
        cout << "\n";

        vector [0] ->parar(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << " \n";
        cout << "\n";
        vector [1] ->parar();
        cout << "  \n";
        cout << "\n";

        vector [0] ->reposar(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << "Coche marca chevrolet astra 2.1 color azul \n";
        cout << "\n";
        vector [1] ->reposar();
        cout << "Moto Marca Yamaha Crypton 110cc color roja   \n";
        cout << "\n";
       

        {
        coche coche(1,1,"Gris","Chevrolet astra",127000);
        coche.mostrar();
        cout <<  endl;
        moto moto  (1,1,"rojo ","Yamaha Crypton",110);
        moto.mostrarmoto();
        cout << endl;        

        }

        
         

        system("pause");   // ejecute el pauseprograma
        return 0;

}


