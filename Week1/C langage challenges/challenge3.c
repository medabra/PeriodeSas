#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float mile,km;
    printf("can you please enter the distance in km:");
    scanf("%f",&km);

    mile=km/1.609;

    printf("the resault in mile is:%.2f\n",mile );


    return 0;
}
