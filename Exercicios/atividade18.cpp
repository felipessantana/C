/*
Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual o valor pode ser decomposto. 
As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a rela��o de notas necess�rias.
Entrada
O arquivo de entrada cont�m um valor inteiro N (0 < N < 1000000).
Sa�da
Imprima o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias, conforme o exemplo fornecido. 
N�o esque�a de imprimir o fim de linha ap�s cada linha, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	float horas,vm,litros;
	cout<<"informe o tempo gasto na viagem:"<<endl;
	cin>>horas;
	cout<<"informe a velocidade media:"<<endl;
	cin>>vm;
	litros=((horas*vm)/12.0);
	cout<< std::fixed << std::setprecision(3)<<litros<<endl;

}
