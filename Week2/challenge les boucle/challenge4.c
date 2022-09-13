#include <stdio.h>
#include <stdlib.h>

int main(){
    int nmr = 1,s = 0,m = 0;

    while(0<nmr){
        printf("please write the number :");
        scanf("%d",&nmr);
        if(nmr > 100){
            continue;
        }else if(nmr <= 0){
            break;
        }else{
            s+=nmr;
            if(m < nmr){
                m = nmr;
            }
        }
    }
    printf("somme  :%d  \n max :%d",s,m);

    return 0;
}







