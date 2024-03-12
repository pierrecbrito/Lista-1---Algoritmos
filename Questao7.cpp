#include<iostream>
using namespace std;

/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius. 

by @pierrecbrito
*/

int main() {
	float tempCelsius, tempFahrenheit;
	cout << "Digite a temperatura em graus C:\n";
	cin >> tempCelsius;
	
	tempFahrenheit = (9*tempCelsius + 160) / 5;
	cout << tempFahrenheit << " graus F";
	return 0;
}


