#include<iostream>
using namespace std;

/*
Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o
valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter. 

by @pierrecbrito
*/

int main() {
	float valor, dolar, reais;
	cout << "Digite o valor em dolares: ";
	cin >> valor;
	
	cout << "Digite o valor da cota��o em dolar: ";
	cin >> dolar;
	
	cout << "Valor em reais: R$ " << (valor * dolar);
	return 0;
}
