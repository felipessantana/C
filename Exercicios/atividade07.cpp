/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do 
produto de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).
Entrada
O arquivo de entrada cont�m 4 valores inteiros.
Sa�da
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, 
com um espa�o em branco antes e depois da igualdade.
*/
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  int A,B,C,D,DIFERENCA;
  cout<<"informe 1 Valor:"<<endl;
  cin>>A;
  cout<<"informe 2 Valor:"<<endl;
  cin>>B;
  cout<<"informe 3 Valor:"<<endl;
  cin>>C;
  cout<<"informe 4 Valor:"<<endl;
  cin>>D;
  DIFERENCA=(A*B-C*D);
  cout<<"DIFERENCA"<<" "<<"="<<" "<< DIFERENCA<<endl;
  
 
    return 0;
}
