/* crie um programa para ler e 3 notas em mostre a media delas*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	double nota,totalnotas,media;
	int cont=1;
		while(cont<=3);{
			cout<<"informe sua nota"<<endl;
			cin>>nota;
			totalnotas=totalnotas+nota;
			cont++;
				}
		media=totalnotas/3;
		cout<<"media:"<<media<<endl;
}
