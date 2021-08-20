#include <stdio.h>
int main() {
	int x;
	printf("Ingresa el numero: ");
    scanf("%d",&x);
    
    int cifras=1;
    while(x>=10){
    	x= x/10;
    	cifras++;
     	 }
     printf("Cantidad de cifras: %d ",cifras);	 
   	 }
  
