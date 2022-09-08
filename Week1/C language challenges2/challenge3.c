#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v1,v2;
   printf("please write the first value:");
   scanf("%f",&v1);
   printf("please write the first value:");
   scanf("%f",&v2);
   v1=v2;
   v2=v1;
   if(v1<v2){
    printf("v1=%f v2=%f",v2,v1);
   }else{
     printf("indentifer");
   }



    return 0;
}
