#include "function.h"
#include <stdio.h>
int main(){
    
    int w[50];
    for(int i=0;i<50;i++){
        scanf("%d", &w[i]);
    }
    insertion_sort(w,50);
    for(int i=0;i<50;i++){
        printf("%d",w[i]);
        if(i!=49)
        printf(",");

    }
     printf("\n");
    
}