#include <iostream>
using namespace std;

/**
 * Camilo González
 * 19-04-2022
 * Solución primer control
**/

int main(){

    cout << "\tVida Entera Estudio Cardiovascular\n" << endl;
    cout << "Ingrese su edad" << endl;
    short edad = 0;
    cin >> edad;
    if(edad < 28){
        cout << "Este estudio no considera personas menores a 28 años." << endl;
        return -1;
    }
    bool mayor = false;
    short sexo = 0;
    if(edad > 58){
        mayor = true;
        cout << "Ingrese su sexo" << endl;
        cout << "[1] Hombre" << endl;
        cout << "[2] Mujer" << endl;
        
        cin >> sexo;
        if(sexo != 2 && sexo != 1 ){
            cout << "El sexo ingresado no es válido" << endl;
            return -1;
        }
    }
    cout << "Ingrese su peso" << endl;
    float peso = 0;
    cin >> peso;
    if(peso<1){
        cout << "Debe ingresar un peso válido" << endl;
        return -1;
    }
    double probabilidad = 0;
    if(mayor){
        if(sexo == 2){
            probabilidad = (edad * 3 + peso) / 1000;
        }else{
            probabilidad = ((edad * 3) + (peso * 3)) / 1000;
        }
    }else if(edad > 44){
        probabilidad = ((edad * 3) + (peso * 2)) / 1000;
    }else if(edad >= 28){
        probabilidad = (edad * 2 + peso) / 1000;
    }

    cout << "La probabilidad de sufrir un accidente cardiovascular (ACV) es de: "<<probabilidad << endl;

    return 0;
}