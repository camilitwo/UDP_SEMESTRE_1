#include <iostream>
using namespace std;

int validarRepunit(long long n){
    int dg = 0, opt = 0;
    long long aux = 0;
    bool val = true;
    aux = n;
    while(n>0){
        dg = n%10;
        if(dg != 1){
            std::cout << "\nEl número: "<<aux<<" No corresponde a Repunit" << std::endl;
            n = 0;
            val = false;
        }
        n = n/10;
    }

    if(val)
        std::cout << "\nEl número: "<<aux<<" corresponde a un Repunit" << std::endl;

    std::cout << "\n¿Desea evaluar otro numero?" << std::endl;
    std::cout << "[1] SI" << std::endl;
    std::cout << "[2] NO" << std::endl;
    cin >> opt;

    
    return opt;
}

int main(){

    
    bool band = true;
    int retorno = 0;
    do{
        system("clear");
        cout << "\t REPUNIT";
        cout << "\n Ingrese un numero entero\n";
        long long n =0;
        cin >> n;
        band = true;
        if( n < 1){
            system("clear");
            std::cout << "---------------------------"<<endl;
            std::cout << "Ingrese un numero válido" << std::endl;
            std::cout << "---------------------------" << std::endl;
            band = false;
            std::cout << "Presione enter para continuar" << std::endl;
            cin.ignore();
            cin.get();
        }else{
            retorno = validarRepunit(n);
        }
    }while(!band || retorno == 1);



    return 0;
}