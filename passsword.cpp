#include "iostream"
#include "string"
#include "stdlib.h"
using namespace std;
int main(){
string password = "";
cout<<"ingresa tu password por favor";
cin>>password;
if(password == "1234567"){
cout<<"password correcto bienvenido"<<endl;
}
else {
cout<<"password incorrecto no eres usuario"<<endl;	
}
return 0;
}


