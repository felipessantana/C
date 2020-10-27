/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
Distancia =raiz(x2-x1)^2+(y2-y1)^2;
Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a 
segunda linha contém dois valores de ponto flutuante x2 y2.
Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
  double dst,x1,x2,y1,y2;
  cout<<"informe o valor do x1:"<<endl;
  cin>>x1;
  cout<<"informe o valor do y1:"<<endl;
  cin>>y1;
  cout<<"informe o valor do x2:"<<endl;
  cin>>x2;
  cout<<"informe o valor do y2:"<<endl;
  cin>>y2;
  dst= pow((x1-x2)*(x1-x2) +(y1-y2)*(y1-y2), 0.5);
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(4)<<dst<<endl;
  
 
    return 0;
}
