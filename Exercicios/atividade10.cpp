/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
 o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores,
 respectivamente dois inteiros e um valor com 2 casas decimais.
Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço
 após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include<iostream>
#include<iomanip>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int codigo_pecas_01,numero_de_pecas_01,codigo_pecas_02,numero_de_pecas_02;
	double valor_unitario_01,valor_unitario_02,total;
		cout<<"informe o codigo da Peças:"<<endl;
		cin>>codigo_pecas_01;
		cout<<"Informe a quantidade de Peças:"<<endl;
		cin>>numero_de_pecas_01;
		cout<<"informe o Valor:"<<endl;
		cin>>valor_unitario_01;
		cout<<"informe o codigo da Peças:"<<endl;
		cin>>codigo_pecas_02;
		cout<<"Informe a quantidade de Peças:"<<endl;
		cin>>numero_de_pecas_02;
		cout<<"informe o Valor:"<<endl;
		cin>>valor_unitario_02;
		total=(numero_de_pecas_01*valor_unitario_01)+(numero_de_pecas_02*valor_unitario_02);
		cout<<"VALOR A PAGAR:"<<" "<<"R$"<<" "<< std::fixed << std::setprecision(2)<<total<<endl;
	
}
