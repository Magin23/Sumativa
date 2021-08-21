#include <stdio.h>
#include <stdlib.h>
int main() {
int i, j,x;

int **pnumbers;


pnumbers = (int **) malloc(6 *sizeof(int *));


printf("Introducir el numero: ");
	scanf("%d",&x);
pnumbers[0] = (int *) malloc(1 * sizeof(int));
pnumbers[1] = (int *) malloc(2 * sizeof(int));
pnumbers[2] = (int *) malloc(3 * sizeof(int));
pnumbers[3] = (int *) malloc(4 * sizeof(int));
pnumbers[4] = (int *) malloc(5 * sizeof(int));
pnumbers[5] = (int *) malloc(6 * sizeof(int));
pnumbers[0][0] = 1;
pnumbers[1][0] = 0;
pnumbers[1][1] = 2*x;
pnumbers[2][0] = 0;
pnumbers[2][1] = 0;
pnumbers[2][2] = (4*x*x)-2;
pnumbers[3][0] = 0;
pnumbers[3][1] = 0;
pnumbers[3][2] = 0;
pnumbers[3][3] = (8*x*x*x)-(12*x);
pnumbers[4][0] = 0;
pnumbers[4][1] = 0;
pnumbers[4][2] = 0;
pnumbers[4][3] = 0;
pnumbers[4][4] = (16*x*x*x*x)-(48*x*x)+12;
pnumbers[5][0] = 0;
pnumbers[5][1] = 0;
pnumbers[5][2] = 0;
pnumbers[5][3] = 0;
pnumbers[5][4] = 0;
pnumbers[5][5] = (32*x*x*x*x*x)+(120*x)-(160*x*x*x);
for (i = 0; i < 6; i++) {
for (j = 0; j <= i; j++) {
printf("%d", pnumbers[i][j]);
}
printf("\n");
}
for (i = 0; i < 6; i++) {
free(pnumbers[i]);
}
free(pnumbers);
return 0;
}
