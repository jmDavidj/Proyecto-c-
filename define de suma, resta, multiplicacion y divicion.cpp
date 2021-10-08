#define suma(a,b) a+b /
#define resta(a,b) a-b 
#define multiplicacion(a,b) a*b 
#define divicion(a,b) a/b 

#include <iostream>  
int suma,resta,multiplica,divide; 
using namespace std; 
int main(){  
	
int numero1, numero2; 

cout<<"Ingresa los numeros para realizar  una suma, resta, multiplicacion y divicion"<<endl; 

cout<<"Digita el primer numero"<<endl;  
cin>>numero1;  

cout<<"Digita el segundo numero"<<endl; 
cin>>numero2;  	
	
suma=numero1+numero2;
resta=numero1-numero2;
multiplica=numero1,numero2;	
divide=numero1,numero2; 

cout<<"	El resultado de la suma es:"<<suma<<endl; 
cout<<"	El resultado de la resta es:"<<resta<<endl;
cout<<"	El resultado de la multiplicacion es:"<<multiplica<<endl; 
cout<<"	El resultado de la division es:"<<divide<<endl; 

cin.get(); /* Aqui agregamos la funcion para que lee un caracter y para almacenar una variable*/

return 0; /* Aqui cerramos el codigo*/





}
