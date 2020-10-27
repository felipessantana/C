#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=0;
	cout<<"Avance"<<endl;
	cout<<"Vire á direita"<<endl;
	while (cont<3){
		cout<<"Avance"<<endl;
		cont++;
	}
	cout<<"Vire á esquerda"<<endl;
	cont=0;
	while (cont<2){
		cout<<"Avance"<<endl;
		cont++;
	}
	
}
