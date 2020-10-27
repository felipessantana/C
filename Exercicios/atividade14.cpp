/*
Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).
Entrada
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), 
e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
Saída
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
  double km,litro,k_u;
  cout<<"informe a km:"<<endl;
  cin>>km;
  cout<<"informe o litro:"<<endl;
  cin>>litro;
  k_u=km/litro;
  cout<<std::fixed << std::setprecision(3)<<k_u<<" "<<"km/l"<<endl;
  
 
    return 0;
}
