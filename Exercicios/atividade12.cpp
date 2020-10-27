/*
Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.
Entrada
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.
Sa�da
O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, 
sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor. O valor calculado deve ser apresentado com 
3 d�gitos ap�s o ponto decimal.

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
