//Faça um algoritmo para ler um número inteiro e informar se o número é par ou ímpar. 

#include<iostream>
using namespace std;
main(){
	int num1=3;
	cout<<"INFORMER UM NUMERO:"<<endl;
	cin>>num1;
	if((num1 % 2)==0){
		cout<<"O NUMERO E PAR:"<<num1<<endl;
		
	}
	else{
		cout<<"O NUMERO E IMPAR:"<<num1<<endl;
			}
	
}
