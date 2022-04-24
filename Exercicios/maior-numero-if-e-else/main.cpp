#include<iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	double MaiorNumero, numero01, numero02;

	std:: cout << "Digite Primeiro Numero: ";
	std::cin >> numero01;


	std::cout << "Digite Segundo Numero: ";
	std::cin >> numero02;

	if (numero01 > numero02) {
		std::cout << "O maior e primeiro numero!!!";

	}

	else {
		std::cout << "O Segundo numero e o maior!!!";

	}




}