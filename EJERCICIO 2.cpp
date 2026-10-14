#include <iostream>
using namespace std;
int main(){
	
	float tasa, euros , total;
	int continuar = 1;
	
	cout <<"ingresa la tasa del euro (BCV):";
	cin >> euros;
	
	while (continuar == 1){
	cout << "Ingrese el valor en euro:";	
	total = euros * tasa;
	cout << "resultado:" << euros << "euros * " << tasa << "Bs =" << total << "bs\n";
	
	cout <<"Desea hacer otra conversion? (1 para Si, 2 para No)";
	cin >> continuar;
	}
	
  return 0;	
}

