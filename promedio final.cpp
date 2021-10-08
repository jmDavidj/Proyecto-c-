#include<iostream>
using namespace std;

float prom, prom1;
int main () {
	
	float cal1,cal2,cal3;
    
	cout<<"Por favor ingresa la primera calificacion"<<endl;
	cin>>cal1;
	
	cout<<"Por favor ingresa la segunda calificacion"<<endl;
	cin>>cal2;
	
	cout<<"Por favor ingresa la tercera calificacion"<<endl;
	cin>>cal3;
	

prom = (cal1+ cal2+ cal3) /3;

cout<<"El promedio final es "<<prom<<endl;
	
if(prom  >= 7){


cout<<"Tu calificacion es aprobatoria"<<endl;	


}
	
	else{
		
		cout<<"Tu calificacion no es aprobatoria"<<endl;
	}
	return 0;
}
