/*
Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:
maiorAB=(a+b+abs(a-b))/2
Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo,
portanto � necess�rio para chegar no resultado esperado.
Entrada
O arquivo de entrada cont�m tr�s valores inteiros.
Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".
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
