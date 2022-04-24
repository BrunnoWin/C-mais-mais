#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int soma = 0; //variavel acumuladora

	//1 < 100 num++ incrementa ou seja de 1 ate 100
	for (int num = 1; num <= 100; num++){

		soma = soma + num;

	}
	std::cout << "A soma de dos numeros de 1 ate 100: " << soma<<"\n";
	
	system("PAUSE");
	return 0;
}