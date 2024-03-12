#include<iostream>
using namespace std;

/*
Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
(E) e disjunção (OU), apresentando ao final os resultados obtidos. 

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
