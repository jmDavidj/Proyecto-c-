#include "iostream"
 using namespace std;
int lado1, lado2, lado3;
int main(){
cout<< "ingresa el primer lado del tri�ngulo a evaluar \n";
cin>>lado1;
cout<<"ingresa el segundo lado del tri�ngulo a evaluar \n";
cin>>lado2;
cout<<"ingresa el tercer lado del tri�ngulo a evaluar \n";
cin>>lado3;
 if(lado1 == lado2 && lado2 == lado3){
 cout<<"tu tri�ngulo es : equil�tero"<<endl;	
  } 
 else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
 cout<<"tu triangulo es: is�sceles"<<endl;	
}
else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
cout<<"tu tri�ngulo es : escaleno";	
else{
cout<<"tu figura no es un tri�ngulo"<<endl;
}

return 0;
cin.get ();
}



