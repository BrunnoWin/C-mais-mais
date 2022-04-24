#include<iostream>
using namespace std;
#include<iomanip>

int main() {

	setlocale(LC_ALL, "Portuguese");


	std::cout << "char tamanho: " << sizeof(char) << " Bytes" << endl;
	std::cout << "int tamanho: " << sizeof(int) << " Bytes" << endl;
	std::cout << "short int tamanho: " << sizeof(short int) << " Bytes" << endl;
	std::cout << "long int tamanho: " << sizeof(long int) << " Bytes" << endl;
	std::cout << "long long int tamanho: " << sizeof(long long int) << " Bytes" << endl;
	std::cout << "float  tamanho: " << sizeof(float) << " Bytes" << endl;
	std::cout << "double  tamanho: " << sizeof(double) << " Bytes" << endl;
	std::cout << "long double tamanho: " << sizeof(long double) << " Bytes" << endl;
	std::cout << "wchar_t tamanho: " << sizeof(wchar_t) << " Bytes" << endl;






	system("PAUSE");
	return 0;

}