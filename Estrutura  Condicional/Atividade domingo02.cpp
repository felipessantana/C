/*Escreva um programa que verifique a validade de	uma	senha fornecida pelo usu�rio.	 
A senha v�lida � o n�mero 1234. Devem ser impressas as seguintes mensagens:	
ACESSO	PERMITIDO caso a senha seja	v�lida.	
ACESSO	NEGADO	caso	a senha seja inv�lida.*/
#include<iostream>
using namespace std;
main(){
	int senha;
	cout<<"DIGITE SUA SENHA:"<<endl;
	cin>>senha;
	if(senha==1234){
		cout<<"ACESSO	PERMITIDO"<<endl;
	}
	else{
		cout<<"ACESSO	NEGADO"<<endl;
			}
}
