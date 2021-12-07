#include "iostream"
using namespace std;
void division(int dividendo, int divisor );
int main(){
int dividendo, divisor;	

cout<<"\t\t\t ingresa por favor el dividendo ";
cin>>dividendo;

cout<<"\t\t\t ingresa el divisor ";
cin>>divisor;

division(dividendo,divisor );
return 0;
	
}
void division(int dividendo, int divisor){
	int cociente;
	while (dividendo>=divisor){
	dividendo -= divisor;
	cociente++;
		
	}
cout<<"el resultado es:"<<cociente<<endl;
cout<<"el cociente es :"<<dividendo<<endl;	
}



