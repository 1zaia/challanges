#include <iostream>
#include <string>

using namespace std;

int main(){

    string animal;

    cout << "Dime el nombre de un animal: ";
    cin >> animal;

    if(animal == "tortuga" || animal == "TORTUGA" || animal == "Tortuga"){

        cout << "A mi tambien me gustan las tortugas" << endl; 
    }else{

        cout << "Ese animal es genial, pero prefiero las tortugas" << endl;
    }

    
    return 0;
}