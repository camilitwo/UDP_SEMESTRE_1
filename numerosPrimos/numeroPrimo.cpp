# include <iostream>

using namespace std;
#define input(a) cin>>a;

int main()
{
    uint64_t x, primos = 0;
	cout<<"Ingrese el numero para comprobar si es primo: "<<endl;
	input(x);
	if (x > 1){
	
	for(int i = 1;i <= x; ++i){
		if (x%i == 0 )
			++primos;
		
	}
	if (primos == 2)
		std::cout<<x<<" es un numero primo.";
	else
		std::cout<<x<< " no es un numero primo.";
	} else
		std::cout<<"El numero debe ser mayor que 1!";

    cout << "\n";
	return 0;
}
