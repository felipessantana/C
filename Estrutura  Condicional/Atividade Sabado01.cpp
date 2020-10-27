#include<iostream>
using namespace std;
main(){
	char nome[20];
    int idade;
	cout<<"DIGITE SEU NOME:"<<endl;
	cin>>nome;
	cout<<"DIGITE SUA IDADE:"<<endl;
	cin>>idade;
	if(idade >= 18){
		
		cout<<nome<<" "<<idade<<" "<<"ANOS E MAIOR DE IDADE"<<endl;
	}
	
    	else {
		cout<<nome<<" "<<idade<<" "<<"ANOS E MENOR DE IDADE"<<endl;
	 }
}
