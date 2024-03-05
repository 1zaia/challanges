#include <iostream>

using namespace std;

int main (){

    int num1, num2;

    cout << "Dime 2 numeros (separados con un espacio): ";
    cin >> num1 >> num2;

    if(num1 > num2){
        cout << num1 << " es mayor que " << num2 << endl;
    }else{
        cout << num2 << " es mayor que " << num1 << endl;
    }

    return 0;
}