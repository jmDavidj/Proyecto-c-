#include "stdio.h"
#include "windows.h"
#include "iostream"
using namespace std;
int main(){
int segundos = 10;	
for(int i =0; i<=21; i++){
cout<<"\n";
cout<<"cargando\n";

}
for(int i=0; 1<=79; i++){
cout<<"_"<<endl;	
}
for(int i=0; 1<=79; i++){
	cout<<char(219);
	Sleep (segundos*1000/80);
}

cout<<"\n completado \n";
return 0;


}
