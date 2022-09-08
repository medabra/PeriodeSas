#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah,cel;
    printf("pleas entre the temperature in fahrenheit: ");
    scanf("%f",&fah);

    cel=(fah-32)/1.8;

    printf("the temperture in celsius is:%.2f",cel);


    return 0;
}
