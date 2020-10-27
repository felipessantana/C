/*3 - Tendo como entrada a altura e o sexo (codificado	 da seguinte forma:	
1:feminino  2:masculino)	 de uma pessoa, construa um	programa que	calcule e	imprima	seu	peso ideal, utilizando as seguintes Fórmulas:	
- para homens: (72.7*Altura)– 58	
- para mulheres: (62.1*Altura)	– 44.7

*/
#include<iostream>
using namespace std;
main(){
		double pesohomem,pesomulher,altura,pesoidealh,pesoidealm,sexo;
	cout<<"DIGITE SEU GENERO 1 PARA FEMININO/ 2 PARA MASCULINO:"<<endl;
	cin>>sexo;
	cout<<"DIGITE SUA ALTURA"<<endl;
	cin>>altura;
		
	if(sexo==1){
		pesomulher=62.1*altura;
		pesoidealm=pesomulher-44.7;
		cout<<"PESO IDEAL:"<<" "<<pesoidealm<<endl;
	}
	else  {
		pesohomem=72.7*altura;
		pesoidealh=pesohomem-58;
		cout<<"PESO IDEAL:"<<" "<<pesoidealh<<endl;
	}
  
}
