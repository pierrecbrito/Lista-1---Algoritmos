#include<iostream>
using namespace std;

/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor. 

by @pierrecbrito
*/
int main() {
	cout << fixed;
    cout.precision(2);
    
	int porcDistribuidor, impostos;
	porcDistribuidor = 28;
	impostos = 45;
	
	cout << "Digite o custo de fabrica do veiculo:\n";
	float custoFabrica;
	cin >> custoFabrica;
	
	float custoConsumidor;
	custoConsumidor = custoFabrica + (porcDistribuidor * (custoFabrica/100)) + (impostos * (custoFabrica/100));
	
	cout << "Custo ao consumidor: R$";
	cout << custoConsumidor;
	return 0;
}
