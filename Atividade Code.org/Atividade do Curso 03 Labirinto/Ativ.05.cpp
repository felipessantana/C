#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=0;
	while (cont<4){
		cout<<"Avance"<<endl;
		cont++;
	}
	cout<<"Vire á direita"<<endl;
	cont=0;
	while (cont<5){
		cout<<"Avance"<<endl;
		cont++;
	}
	
}
