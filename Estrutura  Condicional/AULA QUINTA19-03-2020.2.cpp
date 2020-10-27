#include<iostream>
#include<locale.h> //INCLUIR ACENTUAÇÃO

using namespace std;
int main(){
	setlocale(LC_ALL,""); //NESTA LINHA ESTOU SETANDO A MINHA LOCALIZAÇÃO PARA ALGORITMO RECONHECER AS ACENTUAÇÕES.
 	int mes;
 	cout<<"informe o numero do mes:"<<endl;
 	cin>>mes;
 	switch(mes){
 		case 1:
 			cout<<"janeiro"<<endl;
 			break;
 		case 2:
 				cout<<"fevereiro"<<endl;
 				break;
 		default:
		 cout<<"mes nao existe"<<endl;
		 	
	 }






}


