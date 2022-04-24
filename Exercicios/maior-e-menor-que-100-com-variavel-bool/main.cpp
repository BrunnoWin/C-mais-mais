#include<iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	double numero;
	bool maiorque100;

	std::cout << "Digite um numero" << "\n";
	std::cin >> numero;
	std::cout << "===============================" << "\n";
	std::cout << "====(True = 1 e False = 0)=====" << "\n";
	std::cout << "===============================" << "\n";
	//a variavel booleana maiorque100 ira receber
	//o valor logico da comparaçao(numero > 100)
	// numero e maior que cem?

	maiorque100 = (numero > 100);
	std::cout << "Resultado logico que verifica se o numero digitado e maior que 100 e:" << maiorque100 <<endl;


}
