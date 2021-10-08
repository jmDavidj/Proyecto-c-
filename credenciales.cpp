#include"iostream"
using namespace std;
string usuario = "" , pass = "" , user = "Daniel14045" , password = "315";
int numero1, numero2, numero3, resultado;
int main(){
	
	char opc;
	
	cout<<"Bienvenido por favor ingresa tus credenciales:"<<endl;
	cout<<"Por favor ingresa tu usuario:"<<endl;
	cin>>usuario;
	cout<<"Digita tu password:"<<endl;
	cin>>pass;
	
	if(usuario == user && pass == password){
		
		cout<<"Bienvenido :"<<usuario<<"al sistema por favor selecciona una opcion"<<endl;
		cout<<"1.- suma"<<endl;
		cout<<"2.- resta"<<endl;
		cout<<"3.- multiplicacion"<<endl;
		cin>>opc;
		
		
	}
	
	if(opc == '1'){
		
	cout<<"Bienvenido a la Suma";
	cout<<"Por favor ingresa 3 numeros enteros a sumar"<<endl;
	cout<<"Ingresa el primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el tercer numero"<<endl;
	cin>>numero3;
	
	resultado = numero1 + numero2 + numero3;
	cout<<"El resultado de tu suma es:"<<resultado;
	
		
	}
	
	
	else if(opc == '2'){
		
	cout<<"Bienvenido a la resta";
	cout<<"Por favor ingresa 3 numeros enteros a restar"<<endl;
	cout<<"Ingresa el primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el tercer numero"<<endl;
	cin>>numero3;
	
	resultado = numero1 - numero2 - numero3;
	cout<<"El resultado de tu resta es:"<<resultado;
		
	}
	
	else if(opc == '3'){
		
	cout<<"Bienvenido a la multiplicacion";
	cout<<"Por favor ingresa 3 numeros enteros a multiplicar"<<endl;
	cout<<"Ingresa el primer numero"<<endl;
	cin>>numero1;
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>numero2;
	cout<<"Ingresa el tercer numero"<<endl;
	cin>>numero3;
	
	resultado = (numero1 * numero2)* numero3;
	cout<<"El resultado de tu multiplicacion es:"<<resultado;
		
	}
	
	
	
	else{
		
		cout<<"No es una funcion permitida";
		
	}
	
	
return 0;
cin.get();	
	
	
	
	
}
