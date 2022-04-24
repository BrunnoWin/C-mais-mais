#include<iostream>
using namespace std;

int main(){
   
    setlocale(LC_ALL,"Portuguese");
    
    string nome,email, matricula, cpf;
    int idade;
    
    
    
    
    
 	     std::cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
        std::cout<<"\t\t\t\tCADASTRO DE CLIENTES!"<<endl;
     std::cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
   
     std::cout<<"MATRICULA: ";
 	 cin>>matricula;
     
     std::cout<<"NOME: ";
     cin>>nome;
    
	 std::cout<<"CPF: ";
     cin>>cpf;
     
     std::cout<<"E-mail:";
     cin>>email;
    std::cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tDADOS ARMAZENADOS COM SUCESSO!!!"<<endl;
    std::cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    std::cout<<"MATRICULA: "<<matricula<<"| NOME: "<<nome<<"| CPF: "<<cpf<<"| Email:"<<email<<endl;
    std::cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
     
     
     std::cout<<"                               "<<endl;
     std::cout<<"\t\t\t     ENDEREÇO NA MEMORIA RAM"<<endl;
     std::cout<<"\t\t\t---------------------------------"<<endl;
     cout<<"\t\t\t|MATRICULA-Endereço Ram:"<<&matricula<<"|"<<endl;
     cout<<"\t\t\t|NOME------Endereço Ram:"<<&nome<<"|"<<endl;
     cout<<"\t\t\t|CPF-------Endereço Ram:"<<&nome<<"|"<<endl;
     cout<<"\t\t\t|Email-----Endereço Ram:"<<&email<<"|"<<endl;
     std::cout<<"\t\t\t---------------------------------"<<endl;
     
     
     std::cout<<"                               "<<endl;
     std::cout<<"\t\t\t\tNUMERO DE BYTES DE CADA VARIAVEL"<<endl;
     std::cout<<"\t\t\t\t---------------------------------"<<endl;
     cout<<"\t\t\t\t|MATRICULA-Numero:"<<sizeof(matricula)<<" Bytes\t|"<<endl;//sizeof(matricula)sizeof mostra quantos bytes tem a variavel
     cout<<"\t\t\t\t|NOME------Numero:"<<sizeof(nome)<<" Bytes\t|"<<endl;
     cout<<"\t\t\t\t|CPF-------Numero:"<<sizeof(cpf)<<" Bytes\t|"<<endl;
     cout<<"\t\t\t\t|Email-----Numero:"<<sizeof(email)<<" Bytes\t|"<<endl;
     std::cout<<"\t\t\t\t---------------------------------"<<endl;
     
     
     system("PAUSE");
     return 0;



}