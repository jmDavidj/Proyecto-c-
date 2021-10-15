#include "iostream"
using namespace std;
int main(){
char vocal;
	cout<<"ingresa una letra para saber si es una vocal o consonante";
	cin>>vocal;
switch(vocal){
	case'a':
    case'e':
    case'i':
	case'o':
	case'u':
	cout<<"la letra digitada es: una voval \n";
	break;
	default:
	cout<<"la letra digitada es una consonante \n";	
}
cin.get();
return 0;

}
