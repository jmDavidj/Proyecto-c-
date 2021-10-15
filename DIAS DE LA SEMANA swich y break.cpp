#include "iostream"
using namespace std;
int main(){
	int dia;
	cout<<"ingresa un numero del 1 al 7 para saber el dia de la semana\n";
	cin>>dia;
	switch(dia){
	case 1 :
	cout<<"el numero 1 pertenece al dia : domingo"<<endl;
	break;
	case 2 :
	cout<<"el numero 2 pertenece al dia : lunes"<<endl;
	break;
	case 3 :
	cout<<"el numero 3 pertenece al dia : martes"<<endl;
	break;
	case 4 :  
	cout<<"el numero 4 pertenece al dia :miercoles"<<endl;
	break;
	case 5 :
	cout<<"el numero 5 pertenece al dia : jueves"<<endl;
	break;
	case 6 :
	cout<<"el numero 6 pertenece al dia : viernes"<<endl;
	break;
	case 7 :
	cout<<"el numero 7 pertenece al dia : sabado"<<endl;
	break;
	cout<<"opcion no valida ya que solo son 7 dias de la semana\n";
	}
cin.get();
	return 0;
}
