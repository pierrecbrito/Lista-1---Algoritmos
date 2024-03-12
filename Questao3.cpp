#include<iostream>
using namespace std;

/*
Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.

by @pierrecbrito
*/
int main() {
	cout << fixed;
    cout.precision(2);

	cout << "SEJA BEM VINDO A SUA MELHOR COMPRA\N";
	cout << "Digite o valor da compra:\n";
	float valor;
	cin >> valor;
	
	cout << "\nValor a vista: R$";
	cout << valor;
	
	int parcelas;
	
	cout << "\nPossiblidadeS de parcelamento: (SEM JUROS) \n";
	for(parcelas=1; parcelas <= 10 ; parcelas++){
        cout <<  parcelas;
        cout << "x de R$";
        cout << (valor / parcelas);
        cout << "\n";
    }

	
	return 0;
}
