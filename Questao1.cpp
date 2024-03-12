#include<iostream>
using namespace std;

/* 
Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.

by @pierrecbrito
*/

int main() {
	int anos, meses, dias;
	
	cout << "Ola, digite os anos, meses e dias seguidamente para calcularmos sua idade em dias:\n";
	cin >> anos >> meses >> dias;
	
	int idadeEmDias;
	idadeEmDias = (anos * 12 * 30) + (meses * 30) + dias;
	
	cout << "Idade em dias: " << idadeEmDias;
	return 0;
}
