/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.
Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, 
sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 
3 dígitos após o ponto decimal.

 */



#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
  double a,b,c,pi=3.14159,circulo,triangulo,trapegio,quadrado,retangulo;
  cout<<"informe o Ponto Flutuante A:"<<endl;
  cin>>a;
  cout<<"informe o Ponto Flutuante B:"<<endl;
  cin>>b;
  cout<<"informe o Ponto Flutuante C:"<<endl;
  cin>>c;
  triangulo=(a*c)/2; 	  // calculo da area = ((base*altura)/2);
  circulo=(c*pi)*c; 	 // calculo da area = pi*raio ao quadrado
  trapegio=((a+b)*c)/2; // calculo da area = ((base maior+base menor)*altura)/2;
  quadrado=pow(b,2);   // calculo da area = lado*lado;
  retangulo=a*b;      // calculo da area = base*altura;
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<triangulo<<endl;
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<circulo<<endl;
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<trapegio<<endl;
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<quadrado<<endl;
  cout<<"VOLUME"<<" "<<"="<<" "<< std::fixed << std::setprecision(3)<<retangulo<<endl;
  
  
 
    return 0;
}
