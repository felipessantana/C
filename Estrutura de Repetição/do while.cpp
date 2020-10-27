#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=20;
	do{
		cout<<cont<<endl;
		cont--;
	}while(cont==21);
	
}
