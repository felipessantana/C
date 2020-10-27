/* crie um programa para ler e 3 notas em mostre a media delas*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	double nota,totalnotas,media,maior,menor;
	int cont=1;
		do{
		cout<<"informe sua nota"<<endl;
		cin>>nota;
		totalnotas=totalnotas+nota;
		cont++;
		
		}while(cont<=3);{
		if(cont==1){
			maior=nota;
			menor=nota;
		}else {
			if(maior>nota)
			maior=nota;
		}
		}
		media=totalnotas/3;
		cout<<"media:"<<media<<endl;
}

