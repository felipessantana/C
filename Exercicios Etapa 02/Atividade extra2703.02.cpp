/* Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto 
para clientes vips. Fa�a um programa que calcule o valor total a ser pago
 por uma pessoa. O programa dever� ler o valor total da compra efetuada e um 
 c�digo que identifique se o 
comprador � um cliente comum (1), funcion�rio (2) ou vip (3).*/


#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int cli;
	double cam,cal,sap,cue,mole,totalcompras,desvip,desf;
		cout<<"1 - CAMISA:"<<endl;
		cin>>cam;
		cout<<"2 - CAL�A:"<<endl;
		cin>>cal;
		cout<<"3 - SAPATOS:"<<endl;
		cin>>sap;
		cout<<"4 - CUECAS:"<<endl;
		cin>>cue;
		cout<<"5 - MOLETON:"<<endl;
		cin>>mole;
		totalcompras=totalcompras+cue+sap+cal+cam+mole;
		desf=desf+(((totalcompras*10)/100)-totalcompras);
		desvip=desvip+(((totalcompras*5)/100)-totalcompras);
		cout<<"INFORME 1 CLIENTE COMUM, 2 FUNCIONARIO, 3 CLIENTE VIP:"<<endl;
	    cin>>cli;
			
	switch(cli){
		case 1: 
			cout<<"Cliente 01:"<<" = "<<totalcompras<<endl;
			break;
		case 2: 
			cout<<"FUNCIONARIO 02:"<<" = "<<desf<<endl;
			break;
		case 3:
		 	cout<<"CLIENTE  03:"<<" = "<<desvip<<endl;
			break;			
		default: 
		  	cout<<"Codigo inexistente:"<<endl;
		  	break;
	}

	
	
	
}
