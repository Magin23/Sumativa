#include <stdio.h>
#include <string.h>


int main() {
	int x;
	int z;
	printf("Introducir el numero: ");
	scanf("%d",&x);
	if(x==15){
		printf("quince: ");
	}
	else{
		z=x*x*x;
		printf("potencial al cubo %d \n",z);
	}
}
