#include <stdio.h>
#include <string.h>


int main() {
	char guess[1];
	int x;
	int intento;
	
	
	for(int i; i<4; i++){
		
		
 printf("Adivina la palabra: ");
    scanf("%s",&guess);
    
    
if (strncmp(guess, "perro", 1) == 0) {
printf("Encontraste la palabra.\n");
break;
}  

else {
printf("No adivinaste nada!");
x++;
intento=3-x;
printf("Te quedan %d intentos\n",intento);
}

}
}
