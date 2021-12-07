#include "iostream"
#include "fstream"
using namespace std;
int main(){
char cadena[138];

ifstream	fe ("archivo.txt");
while(!fe.eof()){
	fe>> cadena;
	cout<< cadena<<endl;
}
fe.close();

system("pause");
return 0;	
}
