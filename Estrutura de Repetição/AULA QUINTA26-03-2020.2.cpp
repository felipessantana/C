#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=1;
	while(cont<=100){
		cout<<cont<<endl;
		cont++;
	}
}
