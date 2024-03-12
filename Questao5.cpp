#include<iostream>
using namespace std;
/*
Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos. 

by @pierrecbrito
*/
int main() {
	cout << "Entre com o total de segundos: \n";
	int segundos;
	cin >> segundos;
	
	int horas, minutos;
	minutos = segundos / 60;
	segundos = segundos % 60;
	
	horas = minutos / 60;
	minutos = minutos % 60;
	
	cout << horas;
	cout << "h\t";
	cout << minutos;
	cout << "m\t";
	cout << segundos;
	cout << "s";

	
	return 0;
}
