#include "iostream"
using namespace std;
struct fechanacimiento{
	int dia,mes,an;
	char nombre[15];
};
int main(){
	fechanacimiento hoy, festeja;

	cout<<"ingresa la fecha de hoy"<<endl;
	cout<<"el dia de hoy: ";
	cin>>hoy.dia;
	cout<<"el mes actual es : ";
	cin>>hoy.mes;
	cout<<"el año actual es: ";
	cin>>hoy.an;
	cout<<"ingresa la fecha de tu  cumpleaños"<<endl;
	
	
	cout<<"el dia de hoy: ";
	cin>>festeja.dia;
	cout<<"el mes actual es : ";
	cin>>festeja.mes;
	cout<<"el año actual es: ";
	cin>>festeja.an;
	
	if(festeja.dia==hoy.dia){
	if(festeja.mes==hoy.mes){
	cout<<"felicidades hoy es tu cumpleaños!!"<<endl;
	}
	else{
	cout<<"tal ves hoy es el mimsmo dia pero no es el mismo mes"<<endl;
	cout<<"pero tu cumpleaños llegara pronto"<<endl;	
	}

	
	}
		else{
		cout<<"lo siento hoy no es tu cumpleaños"<<endl;
	}	
	
	

	
	return 0;
	cin.get();
	
	
}

