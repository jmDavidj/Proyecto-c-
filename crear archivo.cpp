#include "iostream"
#include "fstream"
using namespace std;
string nombre, apellido1, apellido2;
int main(){
cout<<"\t\t\t por favor digita tu nombre: ";
getline(cin, nombre);
cout<<"\t\t\t por favor digita tu apellido parerno: ";
getline(cin, apellido1);
cout<<"\t\t\t por favor digita tu apeido materno: ";
getline(cin, apellido2);

cout<<"\t\t\t gracias por registrarte dentro del programa, se esta creando un archivo txt dentro de tu carpeta \n";

ofstream file;
file.open("archivo.txt");
file<<"tu nombre es:"<<nombre<<"\n";
file<<"tu apellido paterno es:"<<apellido1<<"\n";
file<<"tu apellido materno es:"<<apellido2<<"\n";

file.close();
return 0;




	
}   

