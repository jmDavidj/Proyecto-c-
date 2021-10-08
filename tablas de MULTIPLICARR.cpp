#include"iostream"
#include "stdio.h"
using namespace std;
int main(){
	string user, pass, usuario = "David", password = "jmcabrera";
	char seguir;
	int multiplica, numero, i;
	cout<<"bienvenido por favor ingresa al sistema: \n";
	cout<<"ingrsa tu usuario:"<<endl;
	cin>>user;
	cout<<"ingresa tu password:"<<endl;
	cin>>pass;
	if(user==usuario && pass == password){

	do{
	cout<<"por favor ingresa el numero de la tabla de multiplicar a generar:";
	cin>>numero;
	for(int i= 1; i<=10; i++){
multiplica = i* numero;
cout<<numero<<"x"<<i<<"="<<multiplica<<endl;		
	}	
cout<<"¿quieres generar otra tabla de multiplicar(s/n)?";
fflush(stdin);
		
	}
	
	while(seguir!='n');

	cin.get();
	return 0;
	
}
}
