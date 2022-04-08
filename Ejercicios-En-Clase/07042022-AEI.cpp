#include <iostream>
using namespace std;

int main(){

    float valorHora;
    float cantHora;
    cout<<"\tAutomatización Pago Semanal\t\n";
    cout << "Ingrese el valor hora del trabajador\n" << endl;
    cin >> valorHora;
    cout << "Ingrese la cantidad de horas trabajadas\n" << endl;
    cin >> cantHora;

    float hhee = 0;
    float hheeMax = 0;

    if(cantHora>40){
        hhee = cantHora - 40;

        if(hhee>8){
            hheeMax = hhee - 8;
            hhee = hhee - hheeMax;
        }
    }

    if(hheeMax>18){
        cout << "\nLas Horas extras exceden las 18 horas semanales en: " << hheeMax-18<< " Hrs."<<endl;
    }else{
        float valorHHNormales =  (cantHora-hhee-hheeMax) * valorHora;
        float valorHHExtras =  (hhee) * (valorHora * 1.60);
        float valorExtraMax = hheeMax * (valorHora * 2);
        cout << "\nEl pago semanal en horas normales es: $"<<valorHHNormales<< endl;
        cout << "\nEl pago semanal en horas extras es: $"<<valorHHExtras << endl;
        cout << "\nEl pago semanal en horas extras exceso es: $"<<valorExtraMax<< endl;

        cout << "\nEl pago total semanal es: $"<<valorExtraMax+valorHHNormales+valorHHExtras<< endl;

    }


    cin.ignore();
    cin.get();

    return 0;
}