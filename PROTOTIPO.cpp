#include<iostream>
#include<stdio.h>
using namespace std;
string username , pass, user = "JMCABRERA", passw = "2004";
char menu, opc1, opc2, opc3, opc4, opc5,opc6,opc7,opc8,letra;
int a,b,c,d, resp;
 
int main(){
    cout<<"Bienvenido a nuestro aplicativo por favor identificate \n";
    cout<<"Ingresa tu usuario: ";
    cin>>username;
    cout<<"Ingresa tu Password: ";
    cin>>pass;
       if(username == user && pass == passw){
          
            cout<<"Porfavor selecciona alguna opción del menu "<<username<<"\n";
            cout<<"a) Programa de sumas \n";
            cout<<"b) Programa de restas \n";
            cout<<"c) Estudia las tablas de multiplicar \n";
            cout<<"d) Vocal o consonante \n";
            cout<<"e) programa de divisiones \n";
            cout<<"f) Quieres saber los años, meses, dias, manutos y segundos \n";
            
            cin>>menu;
}
        else{
             cout<<"Usuario no indentifcado por favor contacta a soporte"<<endl;
             }     
            
            	switch(menu){
		
		case 'a': 
	             	do{
                      cout<<"Bienvenido al programa de sumas: \n";
                      cout<<"Ingresa el primer numero a sumar: ";
                      cin>>a;
                      cout<<"Ingresa el segundo numero a sumar: ";
                      cin>>b;
                      cout<<"Ingresa el tercer numero a sumar: ";
                      cin>>c;
                      cout<<"Ingresa el cuarto numero a sumar: ";
                      cin>>d;
                      resp = a+b+c+d;
                      cout<<"La respuesta de la suma de: "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<resp<<endl;
                      cout<<"¿Quieres sumar de nuevo(s/n)? ";
                      cin>>opc2;
                      }
                   while(opc2!='n');
                   break;
                   
        case 'b':
		             do{
                      cout<<"Bienvenido al programa de restas: \n";
                      cout<<"Ingresa el primer numero a restar: ";
                      cin>>a;
                      cout<<"Ingresa el segundo numero a restar: ";
                      cin>>b;
                      cout<<"Ingresa el tercer numero a restar: ";
                      cin>>c;
                      cout<<"Ingresa el cuarto numero a restar: ";
                      cin>>d;
                      resp = a-b-c-d;
                      cout<<"La respuesta de la suma de: "<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<resp<<endl;
                      cout<<"¿Quieres restar de nuevo(s/n)? ";
                      cin>>opc3;
                    }
                    while(opc3!='n');
                    break;
                    
        case 'c':
		             int multiplica, numero, i;  
                 do{
                  cout<<"Bienvenido a las tablas de multiplicar \n";
                  cout<<"Por favor ingresa el numero de la tabla a generar: ";
                  cin>>numero;
                  for(int i = 1; i<= 10; i++ ){
                      multiplica = i * numero;
                      cout<<numero<<" x "<<i<<" = "<<multiplica<<endl;
                     } 
                     cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
                     fflush(stdin);
                     cin>>opc4; 
                 }  
                 while(opc4!='n');     
                 break;
                 
    
        case 'd':   
		         	do{
					
                	cout<<"Por favor digita una letra a validar:";
                    cin>>letra;
                    
                if(letra=='a'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
	cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
    cin>>opc5;
}	
	
else if(letra=='e'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
	cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
    cin>>opc5;
}		
	
else if(letra=='i'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
	cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
    cin>>opc5;
}

else if(letra=='o'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;
    cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
    cin>>opc5;
}

else if(letra=='u'){
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una vocal "<<endl;

     cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
     cin>>opc5;              
                    
    }
    
    else{
	cout<<"La letra seleccionada es:"<<letra<<"\n La cual es una consonante \n  "<<endl; 
	cout<<"¿Quieres volver a digitar otra letra(s/n)? ";
     cin>>opc5;        
}
                	
                    
              }
                while(opc5!='n');
            
			break;  
			
	    case 'e':
		  	do{
			  
          	cout<<"Bienvenido al programa de divisiones: \n";
          	cout<<"Ingresa el primer numero a dividir: ";
                      cin>>a;
                      cout<<"Ingresa el segundo numero a dividir: ";
                      cin>>b;
                      cout<<"Ingresa el tercer numero a dividir: ";
                      cin>>c;
                      cout<<"Ingresa el cuarto numero a dividir: ";
                      cin>>d;
                      resp = a/b/c/d;  
                      cout<<"La respuesta de la division de: "<<a<<"/"<<b<<"/"<<c<<"/"<<d<<"="<<resp<<endl;
                      cout<<"¿Quieres dividir de nuevo(s/n)? ";
                      cin>>opc6;  
                      } 
		              while(opc6!= 'n');
		              break;
		              
		case 'f':
		 int	tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;
		  do{
		  	cout<<" Es un gusto saludarte: "<<username<<" Por favor ingresa el año en el que naciste ejemplo 1990: \n";
            cout<<"Para poder indicarte tus años, meses, dias, horas, minutos y segundos de vida:";
            cin>>an;
            
            atotales = tope - an;
            mes = an * meses;
            dias = mes * dia;
            hrs = dias * horas;
            minutos = hrs * min;
            segundos = minutos * seg;
   
    cout<<" Genial "<<username<<" Tu edad actual es de: "<<atotales<< " Años"<<endl;
    cout<<" Los meses equivalentes a tus "<<atotales<<" años son: "<<mes<< " meses "<<endl;
    cout<<" Los dias equivalentes a tus "<<mes<<" meses son: "<<dias<< " dias "<<endl;
    cout<<" Las horas equivalentes a tus "<<dias<<" dias son: "<<hrs<< " horas "<<endl;
    cout<<" Los minutos equivalentes a tus "<<hrs<<" horas son: "<<minutos<< " Minutos "<<endl;
    cout<<" Los segundo equivalentes a tus "<<minutos<<" horas son: "<<segundos<< " segundos "<<endl;
    cout<<"¿Quieres volver a digitar una edad de nuevo(s/n)? ";
    cin>>opc7;
		  
		             
		   
	    }
			while(opc7!='n');
			break;            
    
                  
			
			cout<<"Opcion invalida saldremos del sistema\n";
                }		  
	    
	   
	   
	}
