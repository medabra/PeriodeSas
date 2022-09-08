#include <stdio.h>
#include <stdlib.h>

int main()
{
  float cir,longueur,largeur;
  printf("entrer la longueur:");
  scanf("%f",&longueur);
  printf("entrer la largeur:");
  scanf("%f",&largeur);
  cir=2*(longueur + largeur);
  printf("la circonference est:%.2f",cir);
    return 0;
}
