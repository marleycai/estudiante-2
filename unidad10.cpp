    #include <iostream>
    #include<string>

    using namespace std;

class figura {

    public:
    figura();

    virtual void dibujar ();
     virtual void borrar();
     virtual void rotar();
     virtual void mover();
     ~figura(void);
};

class circulo :public  figura {

    public:
    circulo();
    void dibujar();
    void borrar();
};

class rectangulo : public figura {

    public:
    rectangulo();
    void dibujar();
    void borrar();

};


class triangulo :public  figura {

        public:
        triangulo();
        void dibujar();
        void borrar();
};

    figura::figura(){ cout <<"Figuras Geometricas:"<< endl;
}
void figura::dibujar()
   {
}
void figura::borrar(){
}
void figura::rotar(){
}
void figura::mover(){
}
    circulo::circulo(){             // como  hago para que la clase dibujo este con la clase circulo... ?
                   
}
void circulo::dibujar()
   {cout <<"Dibjando circulos" << endl;
}
void circulo::borrar(){cout <<"Borrarndo circulos" << endl;
}


    rectangulo::rectangulo() {
                        

}

void rectangulo::dibujar(){cout <<"Dibjando rectangulos" << endl;
}
void rectangulo::borrar(){cout <<"Borrando  rectangulos" << endl;
}

    triangulo::triangulo(){
                           
}
void triangulo::dibujar(){cout <<"Dibjando triangulos " << endl;
}
void triangulo::borrar(){cout <<"Borrar triangulos " << endl;
}


figura::~figura(void) {

cout << "el  destructor " << endl;

}
int main ()
{
   figura *Figura[3];

   Figura [0]= new circulo() ;

   Figura [0]-> dibujar ();
   Figura [0]-> borrar();

   cout << endl;

   Figura [1]= new triangulo ();

   Figura [1]->dibujar();
   Figura [1]->borrar();

   cout<<endl;

   Figura [2]=new rectangulo();

   Figura [2]->dibujar();
   Figura [2]->borrar();

}



