#include <iostream>
using namespace std;
int main(){
	int N;
	cout <<"ingrese un numero N (N >= 1): ";
	cin >> N;
	if(N < 1){
		cout<< "el numero debe ser mayor 0 igaul a 1." << endl;
		return 0;
	}
	int sumaPar= 0;
	int sumaImpar= 0;
	
	cout <<"Pares: ";
	for (int i = 1;i <= N; i++) {
		int par = 2 * i;
		sumaPar += par;
		cout << par;
		if (i < N) cout << " + ";
	}
	cout << "=" << sumaPar << endl;
	
	cout <<"Impares: ";
	for (int i = 1;i <= N; i++) {
		int impar = 2 * i - 1;
		sumaImpar += impar;
		cout << impar;
		if (i < N) cout << " + ";
	}
	cout << "=" << sumaImpar << endl;
	
	return 0;
	
}
