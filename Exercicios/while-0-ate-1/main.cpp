#include<iostream>
using namespace std;

int main(){
    
   setlocale(LC_ALL,"Portuguese");
   
  
   
   int numero = 0; //informei que o valor de numero seria 0
   
   //se o numero for menor ou igual a 10 ele vai repitir dentro do while
   while(numero <=10){
       
       
    std::cout<<"Numero:"<<numero++<<"\n";

   }
    
    system("PAUSE");
    return 0;
    
    
}
