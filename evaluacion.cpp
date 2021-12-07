#include"iostream"
#include"stdio.h"
using namespace std;
int opc,opc1,bien=0,mal=0;
float promedio;
string nombre;
int main(){
do{
cout<<"\t\t\t Por favor ingres tu nombre:\n"<<endl;
getline(cin,nombre);
cout<<"\t\t\t Bienvenido al Test de Programacion Basica:\n"<<nombre<<endl;
cout<<"\t\t\t Porfavor selecciona alguna de las opciones a temas\n"<<endl;
cout<<"\t\t\t 1.-Tipos de datos\n";
cout<<"\t\t\t 2.-Tipos de ciclos\n";
cout<<"\t\t\t 3.-Tipos de sentencias de flujo\n";
cin>>opc;
switch(opc){
case 1:
system("cls");
char r1,r2,r3;
cout<<"\t\t\t Seleccionaste el tema tipo de datos:"<<endl;
cout<<"\t\t\t Porfavor selecciona la respuesta correcta:\n";
cout<<"\t\t\t¿Cual es la instruccion o comando para almacenar los datos en c++\n";
cout<<"\t\t\t a) cout\n";
cout<<"\t\t\t b) cin\n";
cout<<"\t\t\t c) getline\n";
cin>>r1;
if(r1 == 'b'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿Cual es la forma correcta de declarar una variable tipo bolian?\n";
cout<<"\t\t\t a) bol\n";
cout<<"\t\t\t b) dooble\n";
cout<<"\t\t\t c) bool\n";
cin>>r2;
if(r2 == 'c'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿El lenguaje de programacion C++ es debil tipeo?\n";
cout<<"\t\t\t a) Falso\n";
cout<<"\t\t\t b) Verdadero\n";
cout<<"\t\t\t c) No corresponde\n";
cin>>r3;
if(r3 == 'b'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"Tu promedio es:"<<promedio<<endl;
cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
if(bien>=2){
cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
}
else{
cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
}



break;
case 2:
system("cls");
cout<<"\t\t\t¿Cual son los tipos de ciclos\n";
cout<<"\t\t\t a) for\n";
cout<<"\t\t\t b) cin\n";
cout<<"\t\t\t c) if\n";
cin>>r1;
if(r1 == 'a'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿Cuantos tipos de ciclos hay en c++?\n";
cout<<"\t\t\t a) 6\n";
cout<<"\t\t\t b) 9\n";
cout<<"\t\t\t c) 3\n";
cin>>r2;
if(r2 == 'c'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿El ciclo es una serie de casos?\n";
cout<<"\t\t\t a) Falso\n";
cout<<"\t\t\t b) Verdadero\n";
cout<<"\t\t\t c) No corresponde\n";
cin>>r3;
if(r3 == 'b'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"Tu promedio es:"<<promedio<<endl;
cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
if(bien>=2){
cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
}
else{
cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
}



break;



case 3:
system("cls");
cout<<"\t\t\t¿Cual es la setencia de flujos\n";
cout<<"\t\t\t a) for\n";
cout<<"\t\t\t b) break\n";
cout<<"\t\t\t c) if\n";
cin>>r1;
if(r1 == 'c'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿Cuales son tipos de sentencias flujo ?\n";
cout<<"\t\t\t a) else,if,else if,switch\n";
cout<<"\t\t\t b) cout,cin\n";
cout<<"\t\t\t c) break,do,while\n";
cin>>r2;
if(r2 == 'a'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"\t\t\t ¿La sentencias de flujo se pueden utilizar en cualquier programa?\n";
cout<<"\t\t\t a) Falso\n";
cout<<"\t\t\t b) Verdadero\n";
cout<<"\t\t\t c) No corresponde\n";
cin>>r3;
if(r3 == 'b'){
cout<<"\t\t\t Correcto muy bien sigue asi\n";
bien=bien+1;
}
else{
cout<<"\t\t\t Incorrecto la respuesta es b\n";
mal=mal+1;
}
cout<<"Tu promedio es:"<<promedio<<endl;
cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
if(bien>=2){
cout<<"\t\t\t Felicidades estas aprobado:\n"<<nombre;
}
else{
cout<<"\t\t\t Lo siento sigue estudiando:"<<nombre;
}



break;
}
cout<<"\t\t\tQuieres salir de la aplicacion:"<<endl;
cout<<"\t\t\t 1=si\n";
cout<<"\t\t\t 2=no\n";
cin>>opc1;



}while(opc1 !=2);
cin.get();
return 0;
}
