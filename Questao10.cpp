#include<iostream>
using namespace std;

/*
Leia dois valores inteiros para as vari�veis A e B e efetue as opera��es de adi��o, subtra��o,
multiplica��o e divis�o de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores l�gicos C e D e efetue as opera��es de nega��o (de cada um dos valores), conjun��o
(E) e disjun��o (OU), apresentando ao final os resultados obtidos. 

by @pierrecbrito
*/

int main() {
	int a, b;
	bool c, d;
	
	cout << "Digite os valores inteiros A e B:\n";
	cin >> a >> b;
	
	cout << "Soma: " << (a+b) << " Subtracao: " << (a-b) << " Multiplicacao: " << (a*b) << " Divisao: " << (a/b);
	
	cout << "\nDigite os valores possiveis (0 ou 1) para C e E:\n";
	cin >> c >> d;
	
	cout << "Negacao: C = " << !c << " E = " << !d << " Conjuncao: " << (c && d) << " Disjuncao: " << (c || d);
	
	return 0;
}
