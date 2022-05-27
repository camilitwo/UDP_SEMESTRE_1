#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void mostrarResult(const string& original, const string& mje) {
    cout<<"\nMensaje Invertido: ";
    cout << original;
    cout<<"\nMensaje Cifrado: ";
    cout << mje;
}

void encriptar(const string& palabra, string clave1, string clave2) {

    string mjeEncriptado;

    for(char i : palabra) {
        int j=0;
        while(j<11){

            if ( toupper(i)==toupper(clave1[j])){
                mjeEncriptado +=clave2[j];
                break;
            }
            j++;

        }
        if (j==11)
            mjeEncriptado+=i;
    }

    mostrarResult(palabra, mjeEncriptado);


}

int main() {
    cout << "\t\n ENCRIPTACION AGRICULTOE" << endl;
    string clave1 = "AGRICULTOE ";
    string clave2 = "9876543210&";
    int opt = 0;
    while(opt!=2) {
        cin.clear();
        fflush(stdin);
        int opt2 = 0;
        string palabra;
        while (opt2!=1) {
            cout << "\nIngrese una palabra maximo 1000 caracteres" << endl;
            getline(cin, palabra);
            opt2 = 1;
            if (palabra.length()>1000){
                cout << "La palabra debe ser maximo 1000 caracteres" << endl;
                opt2 = 0;
            }
        }
        cout << "Mensaje Original: "<< palabra;
        reverse(palabra.begin(), palabra.end());
        encriptar(palabra, clave1, clave2);


        cout << "\n\nDesea evaluar otra palabra" << endl;
        cout << "[1]SI - [2]NO" << endl;
        cin >> opt;
        while(opt!=1 && opt !=2) {
            cout << "Ingrese valor correcto" << endl;
            cin >> opt;
        }
    }
    return 0;
}
