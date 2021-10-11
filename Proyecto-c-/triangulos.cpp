#include "iostream"
 using namespace std;
int lado1, lado2, lado3;
int main(){
cout<< "ingresa el primer lado del triángulo a evaluar \n";
cin>>lado1;
cout<<"ingresa el segundo lado del triángulo a evaluar \n";
cin>>lado2;
cout<<"ingresa el tercer lado del triángulo a evaluar \n";
cin>>lado3;
 if(lado1 == lado2 && lado2 == lado3){
 cout<<"tu triángulo es : equilátero"<<endl;	
  } 
 else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
 cout<<"tu triangulo es: isósceles"<<endl;	
}
else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
cout<<"tu triángulo es : escaleno";	
else{
cout<<"tu figura no es un triángulo"<<endl;
}

return 0;
cin.get ();
}



