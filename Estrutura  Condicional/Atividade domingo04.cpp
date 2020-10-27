/* 4 - Escreva um programa para ler o número de lados	de um polígono regular	e a medida do	lado	(em	cm).	Calcular	e imprimir o seguinte:	
- Se	o número de lados	for igual a 3 escrever TRIÂNGULO e o valor da área
- Se	o número de lados	for igual a 4 escrever QUADRADO	e o valor da sua área.	
- Se	o número de lados	for igual a 5 escrever PENTÁGONO*/

#include<iostream>
using namespace std;
main(){
	double numl,cm,areat,areaq,areap,ap;
	cout<<"DIGITE O NUMERO DO LADOS DO POLIGONO:"<<endl;
	cin>>numl;
	cout<<"DIGITE A MEDIDA DO LADO:"<<endl;
	cin>>cm;
	
	if (numl==3){
		areat=(cm*cm)/2;
		cout<<"O TRIANGULO TEM AREA DE:"<<" "<<areat<<"cm"<<endl;
			}
			else if(numl==4){
				areaq=cm*cm;
				cout<<"O QUADRADO TEM AREA DE:"<<" "<<areaq<<"cm"<<endl;
			}
			else if(numl==5){
				cout<<"DIGITE APOTEMA DO POLIGONO:"<<endl;
				cin>>ap;
				areap=(cm*cm)*ap/2;
				cout<<"O PENTAGONO TEM AREA DE:"<<" "<<areaq<<"cm"<<endl;
				
					}
	else {
		cout<<"POLIGONO DE NUMERO INFORMADO NAO CONSTA NA BASE DE DADOS:"<<endl;
	}
	
}
