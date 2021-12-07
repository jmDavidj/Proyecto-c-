#include "David.h"
using namespace std;
char paterno[11], materno[11], nombre[15], rcf[15], an[7];
int main(){
	cout<<"\t\t\t ingresa tu apellido Paterno:"; 
	cin>>paterno;
	cout<<"\t\t\t ingresa tu apellido materno:";
	cin>>materno;
	cout<<"\t\t\t ingresa tu nombre:";
	cin>>nombre;
	cout<<"\t\t\t ingresa tu fecha de nacimiento aa/mm/dd:";
	cin>>an;
	strupr(paterno);
	strupr(materno);
	strupr(nombre);
	rcf[0]= paterno[0];
	rcf[1]= paterno[1];
	rcf[2]= materno[2];
	rcf[3]= nombre[3];
	strcat(rcf,an);
	cout<<"\n",
	cout<<"\t\t su nombre es:"<<nombre<<paterno<<materno;
	cout<<"\t\t fecha de nacimiento:"<<an;
	cout<<"\t\t tu rcf:"<<rcf;
	getch();
	return 0;
	
}

