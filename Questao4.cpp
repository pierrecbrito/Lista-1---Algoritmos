#include<iostream>
using namespace std;

/*
Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número. 

by @pierrecbrito
*/
int main() {
	cout << "Entre com um número e o percentual dele que voce quer descobrir:\n";
	int numero;
	float percentual;
	cin >> numero >> percentual;
	
	float parcelaDoNumero;
	parcelaDoNumero = (numero / 100) * percentual;
	cout << "Seu resultado: ";
	cout << parcelaDoNumero;
	return 0;
}
