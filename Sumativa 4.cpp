#include <stdio.h>
int main() {
int ventas[3][5];
float average;
int i;
int j;
int colum;


printf("\n Ingrese la venta 1 del vendedor 1  ");
	scanf("%d",&ventas[0][0]);;
printf("\n Ingrese la venta 2  del vendedor 1  ");
	scanf("%d",&ventas[0][1]);
printf("\n Ingrese la venta 3  del vendedor 1  ");
	scanf("%d",&ventas[0][2]);
printf("\n Ingrese la venta 4  del vendedor 1  ");
	scanf("%d",&ventas[0][3]);
printf("\n Ingrese la venta 5  del vendedor 1  ");
	scanf("%d",&ventas[0][4]);

printf("\n Ingrese la venta 1 del vendedor 2  ");
	scanf("%d",&ventas[1][0]);;
printf("\n Ingrese la venta 2  del vendedor 2  ");
	scanf("%d",&ventas[1][1]);
printf("\n Ingrese la venta 3  del vendedor 2  ");
	scanf("%d",&ventas[1][2]);
printf("\n Ingrese la venta 4  del vendedor 2  ");
	scanf("%d",&ventas[1][3]);
printf("\n Ingrese la venta 5  del vendedor 2  ");
	scanf("%d",&ventas[1][4]);
	
printf("\n Ingrese la venta 1 del vendedor 3 ");
	scanf("%d",&ventas[2][0]);;
printf("\n Ingrese la venta 2  del vendedor 3  ");
	scanf("%d",&ventas[2][1]);
printf("\n Ingrese la venta 3  del vendedor 3  ");
	scanf("%d",&ventas[2][2]);
printf("\n Ingrese la venta 4  del vendedor 3  ");
	scanf("%d",&ventas[2][3]);
printf("\n Ingrese la venta 5  del vendedor 3  ");
	scanf("%d",&ventas[2][4]);
	
for (i = 0; i < 3; i++) {
average = 0;
for (j = 0; j < 5; j++) {
average += ventas[i][j];
}
average /= 5.0;
printf("El promedio de las ventas diarias son %d is: %.2f\n", i,
average);
}

return 0;
}
