#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2;
    int m;
    printf("entre la valeur de x1:");
    scanf("%d",&x1);
    printf("entre le valeur de y1:");
    scanf("%d",&y1);
    printf("entre le valeur de x2:");
    scanf("%d",&x2);
    printf("entre le valeur de y2:");
    scanf("%d",&y2);
    m= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("m est:%d",m);

    return 0;
}
