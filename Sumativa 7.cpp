#include <stdio.h>

#define NUMELEMENTOS 10

int main(void) {
  int maximo;
  int minimo;
  int serie[NUMELEMENTOS] = {100, 5, 1, 28, -10, 7, 100, 91, 100, 84};
  int cont;
 int contador=0;
 
 
  maximo = serie[0];
  minimo = serie[0];

  for(cont=0;cont < NUMELEMENTOS;cont++){
    if(serie[cont] > maximo){
      maximo = serie[cont];
    }
  }

  printf("El maximo entero de la serie es: %d \n", maximo);

 for (int i=0; i<10; i++){
		if (maximo == serie[i]){
			contador++;
		}
	}
	printf("El elemento %d, se repite %d",maximo,contador);
	return 0;
}
