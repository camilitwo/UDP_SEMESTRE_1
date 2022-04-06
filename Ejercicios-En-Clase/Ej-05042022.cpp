#include <iostream>
using namespace std;

bool esPar(int n){
    bool par = false;
    if (n % 2 == 0){

        par = true;
    } 

    return par;
}

bool esParEuclides(int n){
    bool par = false;
    int s = n/2;
    if(n-s*2==0)
        par = true;
    

    return par;
}

int main(){

    int numero;
    cout<<"Ingrese un numero\n";
    cin >> numero;

    if(esPar(numero))
        cout << "El numero es par" << endl;
    else
        cout << "El numero no es par" << endl;
    
     if(esParEuclides(numero))
        cout << "El numero es par E" << endl;
    else
        cout << "El numero no es par E" << endl;

    cin.ignore();
    cin.get();

    return 0;
}