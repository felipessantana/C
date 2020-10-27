#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=20;
	
	while(cont==21){
		cout<<cont<<endl;
		cont--;
	}
	
}
