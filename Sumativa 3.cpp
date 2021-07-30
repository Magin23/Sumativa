#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, D;
	
	printf("\nEcuacion de segundo grado\n\n");
	printf(" 2\n");
	printf("ax + bx + c = 0\n\n");
	printf("Introduce valor de a: ");
	scanf("%f", &a);
	printf("Introduce valor de b: ");
	scanf("%f", &b);
	printf("Introduce valor de c: ");
	scanf("%f", &c);
	
	D=b*b-(4*a*c);
	if (D==0)
	printf("Sol.: %.2f\n", -b/(2*a));
	else if (D>0) {	
	printf("Sol. 1: %.2f\n", (-b+sqrt(D))/(2*a));
	printf("Sol. 2: %.2f\n", (-b-sqrt(D))/(2*a));
	}
	else { /*D<0 */
	printf("Sol. 1: %.2f+%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));
	printf("Sol. 2: %.2f-%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));
	}
	return 0;
}
