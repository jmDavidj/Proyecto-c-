#include"stdio.h"
#include"windows.h"
#include<cstdlib>
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<vector>
#include<fstream>


#define ENTER 13
#define BACKESPACE 8
using namespace std;
int main(){
	
int portada;
int segundos=2,opc,opc1,bien=0,mal=0;
float prom;
float cal1,cal2,cal3;

vector<string>usuarios;
vector<string>pass;

usuarios.push_back("Jesus");
usuarios.push_back("Angel");
usuarios.push_back("David");
usuarios.push_back("Evelin");
usuarios.push_back("Daniel");
usuarios.push_back("Wendy");
 
pass.push_back("12345");
pass.push_back("171220");
pass.push_back("2323672");
pass.push_back("822215");
pass.push_back("14045");
pass.push_back("128622");

string usuario, password;

int contador = 0;
bool ingresa = false;
 
	{
	system("cls");
	cout<<"\t\t\t PORTADA\n";
    cout<<"\t\t\t CONALEP NAUCALPAN 1"<<endl;
    cout<<"\t\t\t Integrantes"<<endl;
    cout<<"\t\t\t Lopez Antonio Wendy Jaqueline"<<endl;
    cout<<"\t\t\t Miranda Robledo Evelin Citlalli"<<endl;
    cout<<"\t\t\t Hernandez Cruz Alessandra Lizeht"<<endl;
    cout<<"\t\t\t Sanchez Reyes Daniel"<<endl;
    cout<<"\t\t\t Zuniga Gonzales Luis Angel"<<endl;
    cout<<"\t\t\t Lopez Miguel Jesus Antonio"<<endl;
    cout<<"\t\t\t Martinez Cabrera Jose David"<<endl;
    getch();
}

system("cls");
	for(int s=0; s<=20; s++)
	cout<<"";
	cout<<"\t\t\t\t Bienvenidos a un nuevo mundo de Ingenius Document\n";
	for(int s= 0; s<=90; s++)
	cout<<"";
	for(int s= 0; s<=100; s++){
		cout<<char(219);
		Sleep(segundos*1000/100);
	}

 do{
     system("cls");//Sirve para que limpie la pantalla
     cout<<" \t\t\t Bienvenido a este nuevo mundo de las enseñanzas y sabiduria"<<endl;
     cout<<"\t\t\t Buenos dias porfavor ingresa usuario y contraseña\n";
     cout<<"\t\t\t _____________________________"<<endl;
     cout<<"\n\t Usuario: ";
     getline(cin,usuario);
     char caracter;
     cout<<"\t Password: ";
     caracter = getch();
     password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();
     }
     for(int i = 0; i< pass.size(); i++){
     	 if(usuarios[i] == usuario && pass[i] == password){
           ingresa = true;
           break;
         }
 }

     if(!ingresa){
     	 cout<<"\n\n El usuario y/o nip no son correctos."<<endl;
         cout<<"\n Solo tiene 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++;
     }
}

while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
 else{
 	        system("cls");
 	        cout<<"\t\t ¿Como quieres tu examen en;"<<endl;
            cout<<"\t\t 1.- Ingles"<<endl;
            cout<<"\t\t 2.- Español"<<endl;
            cout<<"\t\t Selecciona una opción: "<<endl;
            cin>>opc;
 
 
     do{
         system("cls");
         cout<<"\n";
         cout<<"\t\t\t Bienvenido a Ingenius Documents  "<<endl;
         cout<<"\t\t\t __________________________________"<<endl;
         cout<<"\t\t\t 1.-Word "<<endl;
         cout<<"\t\t\t 2.-Power point"<<endl;
         cout<<"\t\t\t 3.-Excel"<<endl;
         cout<<"\n";
         cout<<"\t\t\t Selecciona una opción: ";
         cin>>opc;
            switch (opc){
                case 1:
                system("cls");
				char r1,r2,r3;
				cout<<"\t\t\t Seleccionaste el tema tipo de datos:"<<endl;
			    cout<<"\t\t\t Porfavor selecciona la respuesta correcta:\n";
			    cout<<"\t\t\t ¿Que es Word\n";
				cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";	
				cout<<"\t\t\t b) Es un software de ofimatica para realizar presentacion de diapositivas\n";
				cout<<"\t\t\t c) Es una hoja de calculo desarrollada por micrososft para Windows\n";
				cin>>r1;
				if(r1 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
				
				}
				system("cls");
				cout<<"\t\t\t ¿A que nos ayuda Word\n";
				cout<<"\t\t\t a) Diapositivas,Animaciones,Transiciones\n";
				cout<<"\t\t\t b) Hojas de calculo,formulas,Graficas\n";
				cout<<"\t\t\t c) Elalobrar,leer,editar y guardar\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					
				}
				
				system("cls");
			    cout<<"\t\t\t ¿Cuales son las funciones de Word\n";
		 		cout<<"\t\t\t a) Archivos,Inicio,Insertar,Diseño,Animaciones,Tranciones,,Referencias,Vista\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Diseño,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;
				if(r3 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
			
				break;
               
                case 2:
                system("cls");
                cout<<"\t\t\t¿Que es PowerPoint\n";
				cout<<"\t\t\t a)  Es una hoja de calculo desarrollada por micrososft para Windows\n";	
				cout<<"\t\t\t b)  Es un software de ofimatica para realizar presentacion de diapositivas\n";
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";
				cin>>r1;
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
				
				}
				system("cls");
				cout<<"\t\t\t ¿Como agrego una diapositiva?\n";
				cout<<"\t\t\t a) Menu archivo,Nueva diapositiva\n";
				cout<<"\t\t\t b) Insertar,Portada\n";
				cout<<"\t\t\t c) Archvo,Diseño\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"\t\t\t ¿Cuales son las Funciones de Powepoint?\n";
				cout<<"\t\t\t a) Archivos,Inicio,Insertar,Diseño,Animaciones,Tranciones,,Referencias,Vista\n";
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Diseño,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
				
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
                break;
                case 3:
                system("cls");
                cout<<"\t\t\t¿Que es Excel\n";
                cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";
				cout<<"\t\t\t b) Es una hoja de calculo desarrollada por micrososft para Windows\n";
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";
				cin>>r1;//almacena
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
			}
				system("cls");
				cout<<"\t\t\t ¿Como se maneja la informacion en Excel?\n";
				cout<<"\t\t\t a) Paginas de texto\n";
				cout<<"\t\t\t b) Diapositivas\n";
				cout<<"\t\t\t c) La maneja en celdas\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"\t\t\t ¿Porque es importante en el Formato de los documentos en Excel?\n";
				cout<<"\t\t\t a) Para darle claridad sobre el tipo de informacion que se esta manejando\n";
				cout<<"\t\t\t b) Para dar un mejor color\n";
				cout<<"\t\t\t c) Para dar un mejor margen\n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"Tu promedio es:"<<endl;
				cout<<"Por favor ingresa la primera calificacion"<<endl;
                cin>>cal1;
                cout<<"Por favor ingresa la segunda calificacion"<<endl;
                cin>>cal2;
                cout<<"Por favor ingresa la tercera calificacion"<<endl;
                cin>>cal3;

                prom = (cal1+ cal2+ cal3) /3;

                cout<<"El promedio final es "<<prom<<endl;
                if(prom >= 7){
                cout<<"Tu calificacion es aprobatoria"<<endl;
                }
                else{
                cout<<"Tu calificacion no es aprobatoria"<<endl;
                }
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:\n";
				}
                  break;
        }

            
            cout<<"\t\t ¿Deceas seguir dentro del sistema?"<<endl;
            cout<<"\t\t 1.- SI"<<endl;
            cout<<"\t\t 2.- NO"<<endl;
            cout<<"\t\t Selecciona una opción: "<<endl;
            cin>>opc1;
            
            
            
            ofstream file;
            file.open("Alumno.txt");
            file<<"Tu Nombre es:"<<usuario<<endl;
            file<<"Respuetas Correctas:"<<bien<<endl;
            file<<"Respuestas Incorrectas:"<<mal<<endl;
            file<<"Promedio Final:"<<prom<<endl;
            if(bien>=2){
					file<<" Felicidades estas aprobado\n";
				}
			else{
					file<<" Lo siento sigue estudiando\n";
				}
                file.close();
    
	

do{
    system("cls");
     cout<<" \t\t\t Bienvenido a Ingenius Documents "<<endl;
     cout<<"\t\t\t _____________________________"<<endl;
     cout<<"\n\t Register: ";
     getline(cin,usuario);
     char caracter;
     cout<<"\t Password:";
     caracter = getch();
     password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();
     }
     for(int i = 0; i< pass.size(); i++){
     	 if(usuarios[i] == usuario && pass[i] == password){
           ingresa = true;
           break;
         }
 }

     if(!ingresa){
     	 cout<<"\n\n El usuario y/o nip no son correctos."<<endl;
         cout<<"\n Solo tiene 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++;
     }
}

while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
else{

	     switch (opc){
         system("cls");
         cout<<"\n";
         cout<<"\t\t\t  Welcome to the new future Ingenius Document: "<<usuario<<endl;
         cout<<"\t\t\t _______________________________"<<endl;
		 cout<<"\t\t\t 1.-Word\n";
		 cout<<"\t\t\t 2.-Power point\n";
		 cout<<"\t\t\t 3.-Excel\n";
         cout<<"\t\t\t Select an option: ";
         cin>>opc;
            switch (opc){
                case 4:
                system("cls");
				char r1,r2,r3;
				cout<<"\t\t\t You selected the topic data type:"<<endl;
			    cout<<"\t\t\t Please select the correct answer:\n";
			    cout<<"\t\t\t what is  Word? \n";
				cout<<"\t\t\t a) A computer program oriented to word processing \n";	
				cout<<"\t\t\t b) It is an office automation software to make slideshows \n";
				cout<<"\t\t\t c) Es una hoja de cálculo desarrollada por microsoft para Windows \n";
				cin>>r1;
				if(r1 == 'a'){
					cout<<"\t\t\t Correct very good keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is a\n";
					mal=mal+1;
				
				}
				cout<<"\t\t\t What does Word help us with? \n";
				cout<<"\t\t\t a) Slides, Animations, Transitions \n";
				cout<<"\t\t\t b) Spreadsheets, formulas, graphs \n";
				cout<<"\t\t\t c) Open, read, edit and save \n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correct very good keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is b\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t What are the functions of Word? \n";
				cout<<"\t\t\t a) Files, Home, Insert, Layout, Animations, Transitions,, References, View \n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Files, Home, Insert, Draw, Design, Layout, Reference, Correspondence, Review, View and Help \n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Home, Insert, Page Layout, Formulas, Data, Review, View, Scheduler, Help \n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;
				if(r3 == 'b'){
					cout<<"\t\t\t Correct very good keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is b\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t Correct answers:"<<bien<<endl;
				cout<<"\t\t\t Incorrect Answers:"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Congratulations you are approved: \n";
				}
				else{
					cout<<"\t\t\t Sorry, keep studying:";
				}
			
				break;
               
                case 5:
                system("cls");
                cout<<"\t\t\t What is PowerPoint? \n";
				cout<<"\t\t\t a) It is a spreadsheet developed by microsoft for Windows \n";	
				cout<<"\t\t\t b) It is an office automation software to make slideshows \n";
				cout<<"\t\t\t c) A computer program oriented to word processing \n";
				cin>>r1;
				if(r1 == 'b'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is b\n";
					mal=mal+1;
				
				}
				cout<<"\t\t\t How do I add a slide? \n";
				cout<<"\t\t\t a) File menu, New slide \n";
				cout<<"\t\t\t b) Insert, Cover \n";
				cout<<"\t\t\t c) Archive, Design \n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is c\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t What are the functions of Powerpoint? \n";
				cout<<"\t\t\t a) Files, Home, Insert, Layout, Animations, Transitions, References, View \n";
				cout<<"\t\t\t b) Files, Home, Insert, Draw, Design, Layout, Reference, Correspondence, Review, View and Help \n";
				cout<<"\t\t\t c) Home, Insert, Page Layout, Formulas, Data, Review, View, Scheduler, Help \n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is  a\n";
					mal=mal+1;
				
				}
				cout<<"\t\t\t Correct Answers:"<<bien<<endl;
				cout<<"\t\t\t Incorrect Answers"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Congratulations you are approved:\n";
				}
				else{
					cout<<"\t\t\t Sorry, keep studying:";
				}
                break;
        }
                case 6:
                char r1,r2,r3;
                system("cls");	
                cout<<"\t\t\t What is Excel? \n";   
                cout<<"\t\t\t a) A computer program oriented to word processing \n";
				cout<<"\t\t\t b) It is a spreadsheet developed by Microsoft for Windows \n";
				cout<<"\t\t\t c)  A computer program oriented to word processing \n";
				cin>>r1;
				if(r1 == 'b'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is b\n";
					mal=mal+1;
				
				cout<<"\t\t\t How is information handled in Excel? \n";
				cout<<"\t\t\t a) Text Pages \n";
				cout<<"\t\t\t b) slideshow \n";
				cout<<"\t\t\t c) He handles her in cells \n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is c\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t Why is it important in the Format of documents in Excel? \n";
				cout<<"\t\t\t a) To give you clarity on the type of information that is being handled \n";
				cout<<"\t\t\t b) To give a better color \n";
				cout<<"\t\t\t c) To give a better margin \n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Right, very good, keep it up \n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrect the answer is a\n";
					mal=mal+1;
					cout<<"feedback \n";
					cout<<"the correct answer is:\n";
					cout<<"To give you clarity about the type of information that is being handled \n";
				}
				system("cls");
				cout<<"Your average is:"<<endl;
				cout<<"Please enter the first rating"<<endl;
                cin>>cal1;
                cout<<"Please enter the second grade"<<endl;
                cin>>cal2;
                cout<<"Please enter the third grade"<<endl;
                cin>>cal3;

                prom = (cal1+ cal2+ cal3) /3;

                cout<<"The final average is "<<prom<<endl;
                if(prom >= 7){
                cout<<"Your grade is passing"<<endl;
                }
                else{
                cout<<"Your grade is not passing"<<endl;
                }
				cout<<"\t\t\t Correct answers:"<<bien<<endl;
				cout<<"\t\t\t Incorrect Answers"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Congratulations you are approved:\n";
				}
				else{
					cout<<"\t\t\t Sorry, keep studying:\n";
				}
                  break;
            } 
    }
            cout<<"\t\t\t Do you want to stay in the system?"<<endl;
            cout<<"\t\t\t 1.- YES"<<endl;
            cout<<"\t\t\t 2.- NOT"<<endl;
            cout<<"\t\t\t Select an option: "<<endl;
            cin>>opc1;
     }
     
}
  

 while(opc1 != 1);
}

  cin.get();
  return 0;
  }
