#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    string user,pass,usuario="david",password= "315";
    char seguir;
    int multiplica,numero,i;
    cout<<"Bienvenido por favor ingresa al sistema\n";
    cout<<"Ingresa tu usuario:";
    cin>>user;
    cout<<"Ingresa tu password:";
    cin>>password;

    if(user== usuario && pass==password){
}
    do{
        cout<<"Por favor ingresa el numero de la tabla de multiplicar a genarar";
        cin>>numero;
        for(int i=1; i<=10; i++){
            multiplica =i* numero;
            cout<<numero<<"x"<<i<<"="<<multiplica<<endl;
        }
        cout<<"¿quieres generrar otra tabla multiplica (s/n)?\n";
        fflush(stdin);
        cin>>seguir;

    }    while(seguir!= 'n');
 
return 0;
cin.get();
}
