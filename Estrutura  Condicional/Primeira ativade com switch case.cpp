/*Desenvolva um algoritmo que ir� solicitar do usu�rio uma opera��o matematica (+,-,*,/)
em seguida o usu�rio ir� informar dois n�meros e o algoritmo tera que 
imprimir o resultado da opera��o para o usu�rio. Utilize Switch - Case
+
2
3
Resultado = 5 */
#include<iostream>
#include<locale.h>
using namespace std;

main()
{
	setlocale(LC_ALL,"");
	int num1,num2,op;
	double op1,op2,op3,op4;
	cout<<"DIGITE A OPERACAO = 1 adi��o, 2 subtra��o, 3 multiplica��a, 4 divis�o:"<<endl;
	cin>>op;
	cout<<"DIGITE PRIMEIRO NUMERO:"<<endl;
	cin>>num1;
	cout<<"DIGITE SEGUNDO NUMERO:"<<endl;
	cin>>num2;
	op1 = (num1+num2);
	op2 = (num1-num2);
	op3 = (num1*num2);
	op4 = (num1/num2);
		
		switch (op){
		case 1 :
			cout<<op1<<endl;
			break;
		case 2 :
			cout<<op2<<endl;
			break;
		case 3 :
			cout<<op3<<endl;
			break;
		case 4:
			cout<<op4<<endl;		
			break;
		default :
			cout<<"VALOR INVALIDO"<<endl;
	
		}
	
}
