#include<iostream>
using namespace std;
main(){
	char nome[60],sobrenome[60],mae[60],pai[60],datanas[60],gen[60],prof[60];
	double salb,inss,vale,tick,sali;
	
	cout<<"DIGITE SEU NOME:"<<endl;
	cin>>nome;
	cout<<"DIGITE SEU SOBRENOME:"<<endl;
	cin>>sobrenome;
	cout<<"DIGITE SUA DATA DE NASCIMENTO:"<<endl;
	cin>>datanas;
	cout<<"DIGITE O NOME DO MAE:"<<endl;
	cin>>mae;
	cout<<"DIGITE O NOME DO PAI:"<<endl;
	cin>>pai;
	cout<<"NOME:"<<nome<<" "<<sobrenome<<"\n"<<"DATA DE NASCIMENTO:"<<" "<<datanas<<"\n"<<"NOME DA MAE:"<<" "<<mae<<"\n"<<"NOME DO PAI:"<<" "<<pai<<endl;
	cout<<"INFORME SEU GENERO:"<<endl;
	cin>>gen;
	cout<<"QUAL SUA PROFISSAO:"<<endl;
	cin>>prof;
	cout<<"QUAL SEU SALARIO BRUTO:"<<endl;
	cin>>salb;
	inss=(salb*11)/100;
	vale=(salb*6)/100;
	tick=(salb*11)/100;
	sali=salb-(inss+vale+tick);
	cout<<"FUNCIONARIO:"<<nome<<" "<<sobrenome<<"\n"<<"CARGO:"<<" "<<prof<<"\n"<<"SALARIO LIQUIDO:"<<" "<<sali<<endl;
	
}
