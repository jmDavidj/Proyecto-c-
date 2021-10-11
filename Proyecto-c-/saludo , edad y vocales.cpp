#include "iostream"
using namespace std;
string usuario, password, user = "JMCABRERA", pass = "315" , saludo = "hola que tal que tengas exelente dia";
int main(){    
 
char opc , letra;
int tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;
cout<<"por favor ingresa tu usuario";
cin>>usuario;
cout<<"por favor infresa tu password";
cin>>password;
 
if(user == usuario && pass == password){
cout<<"bienvenido al sistema:"<<usuario<<endl;
cout<<"seleciona seleciona una de las opciones para ejecutar  \n";
cout<<"1-¿quieres que el programa te salude?  \n";
cout<<"2-¿quieres saber tu edad , meses , horas y minutos de vida?   \n ";
cout<<"3-¿quieres saber si la letra que digitas es vocal o consonante?  \n ";
cin>>opc;
 
if(opc == '1'){
cout<<saludo<< " " <<usuario<<"\n";
}
else if(opc == '2'){
 

cout<<" Por favor ingresa el año en el que naciste ejemplo 1990"<<endl;
    cout<<"Para poder indicarte tus años, meses, dias, horas, minutos y segundos de vida"<<endl;
    cin>>an;
    atotales = tope - an;
    mes = an * meses;
    dias = mes * dia;
    hrs = dias * horas;
    minutos = hrs * min;
    segundos = minutos * seg;
    cout<<" Los meses equivalentes a tus "<<atotales<<" años son: "<<mes<< " meses "<<endl;
    cout<<" Los dias equivalentes a tus "<<mes<<" meses son: "<<dias<< " dias "<<endl;
    cout<<" Las horas equivalentes a tus "<<dias<<" dias son: "<<hrs<< " horas "<<endl;
    cout<<" Los minutos equivalentes a tus "<<hrs<<" horas son: "<<minutos<< " Minutos "<<endl;
    cout<<" Los segundo equivalentes a tus "<<minutos<<" horas son: "<<segundos<< " segundos "<<endl;

}
     else if(opc =='3'){
        cout<<"Digita un letra a validar:";
        cin>>letra;
    }
 
         if(letra =='a'){
        cout<<" la letra seleccionada es"<<letra<<"Cual es una vocal\n";
    }
 
     else if(letra =='e'){
         cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
 
    }
 
    else if(letra =='i'){
        cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
    }
 
    else if(letra =='0'){
        cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
    }
 
    else if(letra =='u'){
        cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
    }
 
    else{
        cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
    }
 
}
    else{
        cout<<"No es una opcion valida\n";
}
    return 0;
    cin.get();
}
