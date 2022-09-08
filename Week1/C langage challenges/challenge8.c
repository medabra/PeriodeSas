#include <stdio.h>
#include <stdlib.h>

int main() {
         float a,b,c,somme,moyenne;
         printf("write a,b,c:");
         scanf("%f%f%f",&a,&b,&c);
         somme = (a+b+c);
         moyenne=somme/3;
         printf("la somme:%f",somme);
         printf("la moyenne:%f",moyenne);

	return 0;
}
