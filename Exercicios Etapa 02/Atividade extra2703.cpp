/*Elabore um algoritmo que leia dois valores do usuário e a
 operação que ele deseja executar (Operações: soma, subtração, divisão, multiplicação). 
Execute a operação desejada e imprima na tela. */

#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
 	int num1,num2,resul,op;
 	cout<<"DIGITE UM NUMERO:"<<endl;
 	cin>>num1;
 	cout<<"DIGITE UM NUMERO:"<<endl;
 	cin>>num2;
 	cout<<"DIGITE 1 SOMA, 2 SUBTRAÇÃO, 3 MULTIPLICACAO, 4 DIVISAO:"<<endl;
	cin>>op;
	switch(op){
		case 1: 
			cout<<"Resultado"<<" "<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
			break;
		case 2:
			cout<<"Resultado"<<" "<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Resultado"<<" "<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;
			break;
		case 4: 
			cout<<"Resultado"<<" "<<num1<<"/"<<num2<<" = "<<num1/num2<<endl;
			break;
			default:
				cout<<"OPERACAO INCORRETA"<<endl;
		
		
	}	
	
	
	
}
