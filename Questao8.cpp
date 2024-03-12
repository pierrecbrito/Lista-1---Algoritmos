#include<iostream>
using namespace std;

/*
Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. 

by @pierrecbrito
*/

int main() {
	float valor, dolar, reais;
	cout << "Digite o valor em dolares: ";
	cin >> valor;
	
	cout << "Digite o valor da cotação em dolar: ";
	cin >> dolar;
	
	cout << "Valor em reais: R$ " << (valor * dolar);
	return 0;
}
