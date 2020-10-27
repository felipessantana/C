#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cont=0;
	while(cont<3){
		cout<<"Avance"<<endl;
		cont++;
	}
}
