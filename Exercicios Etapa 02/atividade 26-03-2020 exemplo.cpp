/*desenvolva um algoritmo que imprima os valores menores que 50 na tela para o usuario.*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=0;
	int somapares=0;
	while(cont<50){
		cout<<cont<<endl;
		somapares=somapares+cont; //somar ao final todos os numeros
		cont--;
	}
	cout<<somapares<<endl;
}
