#include"iostream"
using namespace std;
string user="Daniel14045",pass="14045",usuario,password,saludo="Hola Bienvenido",nombre="Daniel",edad="16",grupo="315";
int main(){

    int opc; 

        cout<<"Bienvenido al sistema digita tu usuario y password ";
        cout<<"usuario:\n";
        cin>>usuario;
        cout<<"Password:\n";
        cin>>password;
 
        
        if(usuario == user && password== pass){

            cout<<saludo<<""<<usuario<<endl;
            cout<<"por favor selecciona una opcion"<<endl;
            
}

        do{

            cout<<"1.-Registra usuario\n";
            cout<<"2.-Ver perfil\n";
            cout<<"3.-Salir\n";
            cin>>opc;

            if(opc== 1){
                cout<<"registra un usuario\n";
                cout<<"Ingresa tu nombre:\n";
                cin>>nombre;
                cout<<"Ingresa tu edad:\n";
                cin>>edad;
                cout<<"Pon tu grupo:\n";
                cin>>grupo;
            }
        else if(opc == 2){
            cout<<"Verificar perfil\n";
            cout<<nombre<<"\n"<<endl;
            cout<<edad<<"\n"<<endl;
            cout<<grupo<<"\n"<<endl;
        }
        else if(opc==3){
            
        }
        else{
            cout<<"Ese no es tu usuario valido\n";
    }

        }    while(opc !=3);


        return 0;
        cin.get();
    }

