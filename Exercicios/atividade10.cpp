/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1,
 o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.
Entrada
O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores,
 respectivamente dois inteiros e um valor com 2 casas decimais.
Sa�da
A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa�o
 ap�s os dois pontos e um espa�o ap�s o "R$". O valor dever� ser apresentado com 2 casas ap�s o ponto.
*/

#include<iostream>
#include<iomanip>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int codigo_pecas_01,numero_de_pecas_01,codigo_pecas_02,numero_de_pecas_02;
	double valor_unitario_01,valor_unitario_02,total;
		cout<<"informe o codigo da Pe�as:"<<endl;
		cin>>codigo_pecas_01;
		cout<<"Informe a quantidade de Pe�as:"<<endl;
		cin>>numero_de_pecas_01;
		cout<<"informe o Valor:"<<endl;
		cin>>valor_unitario_01;
		cout<<"informe o codigo da Pe�as:"<<endl;
		cin>>codigo_pecas_02;
		cout<<"Informe a quantidade de Pe�as:"<<endl;
		cin>>numero_de_pecas_02;
		cout<<"informe o Valor:"<<endl;
		cin>>valor_unitario_02;
		total=(numero_de_pecas_01*valor_unitario_01)+(numero_de_pecas_02*valor_unitario_02);
		cout<<"VALOR A PAGAR:"<<" "<<"R$"<<" "<< std::fixed << std::setprecision(2)<<total<<endl;
	
}
