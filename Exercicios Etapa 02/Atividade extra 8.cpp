/* Elabore um algoritmo para testar se uma senha digita � igual a �batatafrita�. Se a senha estiver correta escreva �Acesso permitido�,
 do contrario emita a mensagem �Voc� n�o tem acesso ao sistema�. */
 
#include<iostream>
using namespace std;
main(){
	char senha[60],acesso[60]=batatafrita;
	cout<<"DIGITE SUA SENHA:"<<endl;
	cin>>senha;
		if(senha==acesso){
		cout<<"ACESSO PERMITIDO:"<<endl;
	}
	else{
		cout<<"VOCE NAO TEM ACESSO AO SISTEMA"<<endl;
	}
	
	
}
