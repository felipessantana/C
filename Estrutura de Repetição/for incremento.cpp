#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	for(int cont=1; cont<=10; cont++){
		cout<<cont<<endl;
	}
	
}
