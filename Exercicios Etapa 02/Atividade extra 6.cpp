/* Fa�a um algoritmo para ler duas vari�veis inteiras A e B e garantir que A e B fiquem em ordem crescente, ou seja,
a vari�vel dever� armazenar o menor valor fornecido e a vari�vel B o maior.
*/

#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"DIGITE PRIMEIRO NUMERO:"<<endl;
	cin>>a;
	cout<<"DIGITE SEGUNDO NUMERO:"<<endl;
	cin>>b;
	if (a<b){
		cout<<"a ordem e:"<<"letra A"<<" "<<a<<" "<<"letra B"<<" "<<b<<endl;
	}
	
	else{
       cout<<"a ordem e:"<<"letra B"<<" "<<b<<" "<<"letra A"<<" "<<a<<endl;	
	   }
}
