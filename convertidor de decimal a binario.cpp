#include "stdio.h"
#include "conio.h"
int main(){
int z,x,numero,n2=0;
int binario [50];
binario [0] = 0;
printf("bienvenido al conversor de decimal a binario \n");
printf("digita el decimal a convertir");
scanf("%lu", numero);
for(x=0; x<50; x++){
binario	[x]= numero%2;
numero = numero/2;
if(numero == 0)
break;

	
}
for(z=x; z<0; z--){
printf("%d" ,binario[z]);	
	
}

getch();
return 0;	
}
