/*
Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro).
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, 
com duas casas decimais.
Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas casas decimais, representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.
Sa�da
Imprima o total que o funcion�rio dever� receber, conforme exemplo fornecido.
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  char vendedor[60];
  double salario_fixo,total_vendas,total,valor_percentual_vendas;
  cout<<"informe o nome do vendedor:"<<endl;
  cin>>vendedor;
  cout<<"informe o Salario Fixo:"<<endl;
  cin>>salario_fixo;
  cout<<"informe o total de vendas:"<<endl;
  cin>>total_vendas;
  valor_percentual_vendas=((total_vendas*15)/100);
  total=valor_percentual_vendas+salario_fixo;
  cout<<"TOTAL"<<" "<<"="<<" "<<"R$"<<" "<< std::fixed << std::setprecision(2)<<total<<endl;
  
 
    return 0;
}
