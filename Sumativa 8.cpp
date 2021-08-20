#include <stdio.h>
#include <string.h>


int main() {
		int x;
		int resul;
	printf("Introducir un valor numérico entero positivo: ");
    scanf("%d",&x);
    for(int cont;cont <= 12;cont++){
    	resul= cont * x;
    	printf("%d x %d = %d \n",x,cont,resul);
    	 }
  }
