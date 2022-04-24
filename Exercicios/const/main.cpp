#include<iostream>
//#define NUM_VIDAS = 10

int main() {

	setlocale(LC_ALL, "Portuguese");

	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = 10- 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout<< "Valor Constante NUM_VIDAS: "<< 10<< "\n";
	std::cout << "ENDEREÇO NUM_VIDAS NA MEMORIA RAM: " <<&NUM_VIDAS << "\n";
	system("PAUSE");


}

