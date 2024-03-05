#include <iostream>

using namespace std;

int main(){

    int edad;
    bool EDAD = false;

    while(!EDAD){

        cout << "Dime tu edad: ";
        cin >> edad;

        if (edad > 0 && edad < 100){
            if(edad < 18){
                cout << "ERES SUPER JOVEN QUE BIEN QUE QUIERES APRENDER A PROGRAMAR" << endl;

            }else if (edad > 18 && edad < 30)
            {
                cout << "ESTAS EN LA EDAD DE EMPEZAR A ORDENAR A TU VIDA QUE BUENO QUE QUIERES APRENDER A PROGRAMAR" << endl;
            }else 
            {
                cout << "NUNCA ES TARDE PARA APRENDER A PROGRAMAR QUE BIEN QUE HAS EMPEZADO" << endl;
            }
            
            EDAD = true;
            
        }else{
            cout << "SISI Y YO SOY EL BATMAN, HAZLO OTRA VEZ GILIPOLLAS" << endl;
            EDAD = false;
        }

    }
    
    return 0;
}