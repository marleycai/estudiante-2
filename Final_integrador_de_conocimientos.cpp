#include<iostream>
#include<stdlib.h>

using namespace std;

    class Animal{
        public:
        string nombre;
        int codigo;
        public:
        Animal (string , int);
        virtual void comer() ;

};
    class Mamifero : public Animal{
        private :
        float  ponerhuevos;
        public:
        Mamifero (string , int , float);
        void comer();
        void dormir();

};
    class Oviparo : public Animal{
        private:
        float ponerhuevos;
        public :
        Oviparo (string ,int ,float );
        void comer ();
        void dormir();
        };



    Animal::Animal(string _nombre,int _codigo){
    nombre = _nombre;
    codigo = _codigo;
}
void :: Animal :: comer(){
    cout << "Zoo Park" << endl;
    cout << "Animal y clase :"   << nombre <<  endl;
    cout << "Su codigo es:" << codigo << endl;

}
    Mamifero :: Mamifero (string _nombre,int _codigo,float _ponerhuevos) : Animal(_nombre,_codigo){
    ponerhuevos = _ponerhuevos;
}

void Mamifero :: comer(){
     Animal :: comer ();
     cout << "Pone huevos?" << ponerhuevos <<  endl;
     }
    Oviparo :: Oviparo (string _nombre , int _codigo , float _nurse ) : Animal( _nombre,_codigo){

        }

      void Oviparo::comer(){
            Animal::comer();

            }


int main(){
    Animal *vector [6];
        vector [0] = new  Animal ("Gato Mamifero " , 1234);
        vector [1] = new  Animal ("Ballena Mamifero " , 234);
        vector [2] = new  Animal ("lobomar Mamifero ", 124);
        vector [3] = new  Animal ("cocodrilo Oviparo " , 3456);
        vector [4] = new  Animal ("ganzo Oviparo " , 123);
        vector [5] = new  Animal ("pelicano Oviparo " , 345);

        vector [0] -> comer();
        cout << "\n";
        vector [1] -> comer();
        cout << "\n";
        vector [2] -> comer();
        cout << "\n";
        vector [3] -> comer();
        cout << "\n";
        vector [4] -> comer();
        cout << "\n";
        vector [5] -> comer();
        cout << "\n";

        system("pause");
        return 0;

}

