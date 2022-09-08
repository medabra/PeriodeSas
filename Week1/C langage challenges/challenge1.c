#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[15],prenom[15],sexe[15],tel[15];
    int age[15];
      printf("can you please enter your first name:");
    scanf("%s",&prenom);
      printf("can you please enter your last name:");
    scanf("%s",&nom);
    printf("can you please enter your age:");
    scanf("%d",&age);
      printf("can you please enter your sexe:");
    scanf("%s",&sexe);
      printf("can you please enter your phone number:");
    scanf("%s",&tel);
      printf("__________________________________________________\n");
      printf("your first name is:%s\n",prenom);
      printf("your last name is:%s\n",nom);
      printf("your age is:%d\n",age);
      printf("your sexe is:%s\n",sexe);
      printf("your phone number is:%s\n",tel);

}
