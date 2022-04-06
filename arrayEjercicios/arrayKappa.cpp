#include <iostream>
#include <vector>
using namespace std;

vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
        resultArray.insert(resultArray.begin(), x%10);
        x /= 10;
        if(x == 0)
            return resultArray;
    }
}

bool esPar(int n){
    bool par = false;
    if (n % 2 == 0){
        cout << "Par\n";
        par = true;
    } else{
       cout << "Impar\n"; 
    }

    return par;
}

int main()
{
    int number = 0;
    bool par = false;
    bool aux = false;
    int auxInt = 0;
    cout << "Ingrese un numero " << endl;
    cin >> number;
    vector <int> temp = integerToArray(number);
    for (auto const &element : temp){
        if(auxInt == 0){
            par = esPar(element);
            aux = par;
        }else{
            par = esPar(element);
            if(par == aux){
                cout << "El numero: " << number<< " No es numero kappa"<<endl;
                auxInt = 9999;
                break;
            }
            aux = par;
        }
        auxInt++;
    }

    if(auxInt < 9999){
        cout << "El numero: " << number<< " Si es numero kappa"<<endl;
    }
    return 0;
}