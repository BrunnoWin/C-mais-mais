#include<iostream>
#include<iomanip>
using namespace std;



int main() {

	setlocale(LC_ALL, "Portuguese");
	int Numero;
	float Numero2;
	double Numero3;

	Numero = 45;
	Numero2 = 55.56f;
	Numero3 = 45345.904555;


	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

	std::cout << "O valor de numero:    " << Numero << std::endl;
	std::cout << "Tamanho da variavel:  " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereço da variavel: " <<&Numero<< "\n";

	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;

	std::cout << "O valor da Numero2:   " << Numero2 << std::endl;
	std::cout << "Tamanho da variavel:  " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereço da variavel: " << &Numero2 << "\n";

	std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;


	std::cout << "O valor da Numero3:   " << setprecision(12)<<Numero3 << std::endl;
	std::cout << "Tamanho da variavel:  " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereço da variavel: " << &Numero3 << "\n";



	system("Pause");
	


}