#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int valor;
	cout<<"digite um valor"<<endl;
	cin>>valor;
	for(int cont=valor; cont<=10; cont++){
		cout<<cont<<endl;
	}
	
}
