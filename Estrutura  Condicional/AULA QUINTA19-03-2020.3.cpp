/*DESENVOLVA UM ALGORITO QU SOLICITE SUA IDADE, SEXO E NOME, EM SEGUIA O AGORITOMO IRA VERIFICAR SE O USUARIO É MAIOR 
DE IDEDAE SE É DO SEXO MASCULINO SENDO Maior de idade do sexo masculino, o algoritmo ira indormar o usario e do sexo masculino e maior de idade
*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	string nome, sexo;
	int idade;
	cout<<"DIGITE SEU NOME:"<<endl;
	cin>>nome;
	cout<<"DIGITE SUA SEXO:"<<endl;
	cin>>sexo;
	cout<<"DIGITE SEU IDADE:"<<endl;
	cin>>idade;
	if((sexo=="Masculino")&&(idade>=18)){
		cout<<"PARABÉNS VOCÊ É MAIOR DE IDADE:"<<endl;
				
	}
	else{
		cout<<"menor de idade:"<<endl;
			}
}
