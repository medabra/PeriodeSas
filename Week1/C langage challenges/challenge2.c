#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;

    printf("can you please wite the fahrenheit temperature:");
    scanf("%f",&f);

      c=(f-32)*5/9;

      printf("the celsius temperature is:%.2f",c);


    return 0;
}
