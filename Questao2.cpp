#include<iostream>
#include<cmath>
using namespace std;

/*
Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de
uma carteira. 

by @pierrecbrito
*/

int main() {
	cout << "Entre com o tempo de fumante em anos, cigarros/dia e preco da sua carteira:\n";
	int anos, cigarrosPorDia;
	float precoDaCarteira;
	cin >> anos >> cigarrosPorDia >> precoDaCarteira;
	
	int quantidadeDeCarteirasPorDia;
	
	int cigarrosFumadosAteHoje;
	cigarrosFumadosAteHoje = anos * 365 * cigarrosPorDia;
	
	float carteirasFumadasAteHoje; //20 cigarros / carteira
	carteirasFumadasAteHoje = round(cigarrosFumadosAteHoje / 20); 
	
	float dinheiroGasto;
	dinheiroGasto = carteirasFumadasAteHoje * precoDaCarteira;

	cout << "Dinheiro gasto: R$";
	cout << dinheiroGasto;	
	return 0;
}


