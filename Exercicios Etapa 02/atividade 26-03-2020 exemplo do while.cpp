/*desenvolva um algoritmo que imprima os valores menores que 50 na tela para o usuario.*/
#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=1;
	do{
		cout<<cont<<endl;
		cont--;
	}while(cont<50);
		
	
}
