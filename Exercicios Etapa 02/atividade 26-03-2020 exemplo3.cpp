/*Desenvolva um algoritmo que imprima para o usuario os numeros pares de 1 ate 50
no final impra o resultado e somatoro dos pares */
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int cont=0;
	int somapares=0;
	while(cont<=50){
	cout<<cont<<endl;
	somapares=somapares+cont; //somar os pares 
	cont=cont--;
	
	}
	cout<<somapares<<endl; // imprimir o resultado da soma dos numeros pares de 1 a 50;
}
