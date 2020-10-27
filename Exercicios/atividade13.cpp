/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
maiorAB=(a+b+abs(a-b))/2
Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo,
portanto é necessário para chegar no resultado esperado.
Entrada
O arquivo de entrada contém três valores inteiros.
Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/



#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
  double a,b,s,formula;
  cout<<"informe o  A:"<<endl;
  cin>>a;
  cout<<"informe o  B:"<<endl;
  cin>>b;
  cout<<"informe o Ponto Flutuante C:"<<endl;
  cin>>s;
  formula=(((a+b+(a*b*s))*(a-b)))/2;
   cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<formula<<endl;
  
  
 
    return 0;
}
