#include "iostream"
using namespace std;
struct humano{
char nombre[15];
char apellidos[25];
int edad;
char genero[15];
int telefono;
char estatus[25];	
};
int main(){
humano persona[5];
for(int i = 0; i < 5; i++){
	cout<<"escriba el  nombre del humano"<<i+1<<":\n";
	cin>>persona[i].nombre;
	cout<<"escribe los apellidos del humano: "<<i+1<<":\n";
	cin>> persona [i].apellidos; 
	cout<<"digita la edad que tendra el humano"<<i+1<<":\n";
	cin>>persona [i].edad;
	cout<<"escribe el genero que tendra el humano"<<i+1<<":\n";
	cin>>persona [i].genero;
	cout<<"digita el numero telefonico que tendra el humano"<<i+1<<":\n";
	cin>>persona [i].telefono;
	cout<<"digita el estatus que tendra la persona"<<i+1<<":\n";
	cin>>persona [i].estatus;
	cout<<endl;
}
cout<<"el registro de los humanos son "<<endl;
for(int i= 0; 1<5; i++){
	cout<<"\t\t"<<persona[i].nombre;
	cout<<"\t\t"<<persona[i].apellidos;
	cout<<"\t\t"<<persona[i].edad;
	cout<<"\t\t"<<persona[i].genero;
	cout<<"\t\t"<<persona[i].telefono;
	cout<<"\t\t"<<persona[i].estatus;			
}
return 0;
cin.get();
}


