#include<iostream>
using namespace std;
/*
Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10. 

by @pierrecbrito
*/
int main() {
	int val1, val2, aux;
	cout << "Digite o valor 1 e 2 na sequencia:\n";
	cin >> val1 >> val2;
	
	aux = val1;
	val1 = val2;
	val2 = aux;
	cout << "Valor1 = " << val1 << "\tValor2 = " << val2;
	return 0;
}
