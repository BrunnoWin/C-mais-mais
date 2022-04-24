#include<iostream>
using namespace std;

//O QUE A FUNÇAO VAI RETORNA?
//tipo de retorno da funçao

int SomaAUmNumero(int numero, int NumeroASerSomado) {

	return  numero + NumeroASerSomado;

}

int main() {

	int numero, NumeroASerSomado;

	std::cout << "Digite um numero:";
	std::cin >> numero;

	std::cout << "Digite um numero a ser somado: ";
	std::cin >> NumeroASerSomado;

	std::cout << "A soma desse numero: " <<numero<<" Com o numero: "<<NumeroASerSomado<<" e igual a: "<<SomaAUmNumero(numero,NumeroASerSomado)<<"\n";
	


	system("PAUSE");
	return 0;



}