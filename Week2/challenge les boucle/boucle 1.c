#include <stdio.h>
#include <stdlib.h>


int main()
{   int M,S ;

    printf("please write the number:");
    scanf("%d",&S);
    for(M=0;M<=10;M++){
        printf("%d*%d=%d\n",M,S,M*S);
        }
    return 0;
}

