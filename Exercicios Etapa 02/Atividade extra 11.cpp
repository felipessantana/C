/*Fa�a um algoritmo para ler o nome, as tr�s notas e o n�mero de faltas de um aluno e escrever qual a sua situa��o final: Aprovado,
 Reprovado por Falta ou Reprovado por M�dia. A m�dia para aprova��o � 7,0 e o limite de faltas � 25% do total de aulas.
 O n�mero de aulas ministradas no semestre foi de 80. A reprova��o por falta sobrep�e a reprova��o por M�dia.*/
 
#include<iostream>
using namespace std;
main(){
	char nome[60];
	float nota1,nota2,nota3,media;
	int faltas,limitefalta;
	cout<<"DIGITE NOME DO ALUNO:"<<endl;
	cin>>nome;
	cout<<"DIGITE NOTA DA PRIMEIRA UNIDADE:"<<endl;
	cin>>nota1;
	cout<<"DIGITE NOTA DA SEGUNDA UNIDADE:"<<endl;
	cin>>nota2;
	cout<<"DIGITE NOTA DA TERCEIRA UNIDADE:"<<endl;
	cin>>nota3;
	cout<<"DIGITE O NUMERO DE FALTAS:"<<endl;
	cin>>faltas;
	media = (nota1+nota2+nota3) / 3;
	limitefalta = 80 * 0.25;
	
	if(media >= 7 && faltas <= limitefalta)
		{
			
	cout<<"voce esta aprovado:"<<endl;
	}
	
	else if(media >= 7 && faltas > limitefalta)
{
	cout<<"Reprovado por falta"<<endl;
}
else {
	cout<<"Reprovado por media e falta"<<endl;
}
} 
