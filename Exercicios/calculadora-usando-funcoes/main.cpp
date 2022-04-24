#include<iostream>
using namespace std;


//PROTÒTIPOS DAS FUNCOES

float Soma(float n1, float n2) {
        return n1 + n2;
}

float Subtracao(float n1, float n2) {
        return n1 - n2;
}


float Multiplicacao(float n1, float n2) {
	return n1 * n2;
}





float Divisao(float n1, float n2) {
	return n1 / n2;
}







int main() {

	setlocale(LC_ALL, "Portuguese");

	float n1, n2;


	std::cout << "Digite primeiro numero: ";
	std::cin >> n1;

    std::cout << "Digite segundo numero: ";
	std::cin >> n2;

	//*******************************Operaçoes*******************************
	std::cout << "\n***** Resultado das operacoes*****\n";
	std::cout << "Soma " << n1 << " + " << n2 << " = " << Soma(n1, n2)<<endl;
	std::cout << "Subtracao " << n1 << " - " << n2 << " = " << Subtracao(n1, n2) << endl;
	std::cout << "Multiplicacao " << n1 << " * " << n2 << " = " << Multiplicacao(n1, n2) << endl;
	std::cout << "Divisao " << n1 << " / " << n2 << " = " << Divisao(n1, n2) << endl;
	std::cout << "***********************************\n";



	system("PAUSE");
	return 0;
	

}
