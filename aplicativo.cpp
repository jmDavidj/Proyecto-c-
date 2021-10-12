#include "iostream"
#include "stdio.h"
using namespace std;
string username , pass , usser = "david" , passw = "1234";
char menu , opc1 , opc2 , opc3 , opc4;
int main(){
	cout<<"bienvenido a nuestro aplicativo por favor identificate \n";
	cout<<"infresa tu usuario";
	cin>>username;
	cout<<"ingresa tu pasword";
	cin>>pass
	if(username == usser && pass == passw ){
do{
	
	cout<<"por favor selecciona alguna opcion del menu"<<username;
	cout<<"a) programa de suma \n";
	cout<<"b) programa de resta \n";
	cout<<"c) estudia las tablas de multiplicar \n";
	cout<<"d) vocal o consonante \n";
cin>> menu;
}
if(menu == 'a'){
cout<<"suma";	
	
}
else if(menu== 'b'){
	
cout<<"resta";
}
else if(menu == 'c'){
	cout<<"tablas";
	
}
else if (menu == 'd'){
	cout<<"vocal";
	
}
else{
	cout<<"opcion no valida ¿quieres regrsar al menu s/n? \n";
}

	while(menu!= 'n');	
	}
	
	
	return 0;
	cin.get();
	
}
