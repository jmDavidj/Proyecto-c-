#include<stdio.h>
int main(){
  float cal1 , cal2 , cal3 , prom;
  printf("Por favor digita la primera evaluacion : \n");
  scanf("%f",&cal1);
  printf("Por favor digita la segunda evaluacion : \n");
  scanf("%f",&cal2);
  printf("Por favor digita la tercera evaluacion : \n");
  scanf("%f",&cal3);
  prom = (cal1 + cal2 + cal3) / 3;
  printf("Tu promedio es de : %f \n" , prom);
  return 0;
}
