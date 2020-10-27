/*
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem correspondente.   
Entrada

O arquivo de entrada contém 2 valores inteiros.
Saída

Imprima a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

*/
#include <iostream>
 
using namespace std;
 
int main() {
 int PROD,X,Y;
  cout<<"informe um numero:"<<endl;
  cin>>X;
  cout<<"informe um numero:"<<endl;
  cin>>Y;
  PROD=X*Y;
  cout<<"PROD"<<" "<<"="<<" "<<PROD<<endl;
  
 
    return 0;
}

