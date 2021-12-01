#include <iostream>   // librerias
#include <stdlib.h>

using namespace std;   // espacio de nombres

    class Animal{ // creamos clase animal
        public:
        string nombre;  // atrivutos
        int codigo;
       
        Animal (string , int);
        
        virtual void comer() ;
        virtual void dormir();
        
        ~Animal();

};
    class Mamifero : public Animal{ // creamos clase mamifero que deriva de la clase animal
        private :
        float  ponerhuevos;    // atributos
        public:
        Mamifero (string , int , float);
        void comer();     // funcion polimorfismo
        void dormir();

};
    class Oviparo : public Animal{ // creamos clase oviparo que deriva de la  clase animal
        private:     // dato o atrivuto
        float pieldura;
        public :
        Oviparo (string ,int ,float );
        void comer ();
        void dormir();
        };



    Animal::Animal(string _nombre,int _codigo){ //contructor animal

}
void Animal :: comer(){  // metodo comer
    
    cout << "Animal y clase :"   <<  endl;}

    void Animal :: dormir() { 
        cout<<"Duerme todo el dia "<<endl;

    }
    


    Mamifero :: Mamifero (string _nombre,int _codigo,float _ponerhuevos) : Animal(_nombre,_codigo){ // constructor mamifero
    ponerhuevos = _ponerhuevos;
    //cout <<  "Pone huevos?" << ponerhuevos <<  endl;

}

void Mamifero :: comer(){

     cout << " come como un mamifero" <<  endl ;
     }
void Mamifero :: dormir (){ 
    cout << " duerme acostado " <<  endl ;

}


     Oviparo :: Oviparo (string _nombre , int _codigo , float _pieldura ) : Animal( _nombre,_codigo){    // constructor oviparo
        pieldura =_pieldura;
     //cout <<  "Pone huevos?" << ponerhuevos <<  endl;

        }
void Oviparo :: comer()
      { // invocamos el metodo comer
           cout << "come como un oviparo" << endl;
         }

         void Oviparo :: dormir(){
             cout << " duerme en el rio " <<  endl ;
         }

Animal::~Animal(void) {

cout << "Se invoca al destructor de animal" << endl;

}


int main(){

    Animal *vector [6]; // el objeto animal pertenece al vector que es de a clase animal
        vector [0] = new  Mamifero(" Mamifero " , 1234,765) ; // cramos el primer objeto que deriva de la clase animal
        vector [1] = new  Mamifero ("Ballena Mamifero " , 234,432);
        vector [2] = new  Mamifero ("lobomar Mamifero ", 124,323);
        vector [3] = new  Oviparo ("cocodrilo Oviparo " , 3456,221 );
        vector [4] = new  Oviparo("ganzo Oviparo " , 123,543);
        vector [5] = new  Oviparo  ("pelicano Oviparo " , 345,645);

        vector [0] -> comer(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << "el Gato  \n";
        cout << "\n";
        vector [1] -> comer();
        cout << "la Ballena  \n";
        cout << "\n";
        vector [2] -> comer();
        cout << "el lobomar \n";
        cout << "\n";
        vector [3] -> comer();
        cout << "el cocodrilo  \n";
        cout << "\n";
        vector [4] -> comer();
        cout << "el ganzo \n";
        cout << "\n";
        vector [5] -> comer();
        cout << "el pelicano\n";
        cout << "\n";

        vector [0] ->dormir(); // mostramos usamos la flecha para el puntero , se guia por el numero de parametro o por a clase
        cout << "el Gato, su  codigo es  124-323  \n";
         cout << "\n";
        vector [1] ->dormir();
        cout << "la Ballena, su codigo es  234,432 \n";
         cout << "\n";
        vector [2] ->dormir();
        cout << "el lobomar, su codigo es 124,323 \n";
         cout << "\n";
        vector [3] ->dormir();
        cout << "el cocodrilo, su codigo es  3456,221\n";
         cout << "\n";
        vector [4] ->dormir();
        cout << "el ganzo, su codigo es 123,543\n";
         cout << "\n";
        vector [5] ->dormir();
        cout << "el pelicano, su codigo es 345,645 \n";
         cout << "\n";

        return 0;

}


