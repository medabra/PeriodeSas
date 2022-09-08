#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, mile;
    printf("can you enter the distance in mile :");
    scanf("%f",&mile);

    km=mile*1.609;

    printf("the distance in km is:%.2f",km);



    return 0;
}
