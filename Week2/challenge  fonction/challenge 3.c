#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool premier(int n){
   int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }
    return true;

}

int main()
{
    int n;
    printf("entrer un nombre");
    scanf("%d",&n);
    if(premier(n)){
        printf("le nombre est premier");
    }else{
        printf("le nombre ne est premier");
    }



    return 0;
}

