#include <stdio.h>
#include <string.h>


int main() {
	char uno[50];
	char dos[50];
	char tres[50];
	char cuatro[50];
	char cinco[50];
	int a,b,c,d,e;
		
 printf("ingresa el primer: ");

   scanf("%s",uno);
	a=strlen(uno);

printf("ingresa el segundo: ");
    scanf("%s",&dos);
    	b=strlen(dos);
    printf("ingresa el tercero: ");
    scanf("%s",&tres);
    	c=strlen(tres);
    printf("ingresa el cuarto: ");
    scanf("%s",&cuatro);
    d=strlen(tres);
    printf("ingresa el quinto: ");
    scanf("%s",&cinco);
    e=strlen(tres);

 if (a<b && a<c && a<d && a<e){
printf("%s es el mas corto.\n", uno);
}

else if (b<a && b<c && b<d && b<e){
printf("%s es el mas corto.\n", dos);
}

else if (c<a && c<b && c<d && c<e){
printf("%s es el mas corto.\n", tres);
}

else if (d<a && d<b && d<c && d<e){
printf("%s es el mas corto.\n", cuatro);
}

else if (e<a && e<b && e<c && e<d){
printf("%s es el mas corto.\n", cinco);
}

}
