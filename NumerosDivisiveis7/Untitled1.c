#include <stdio.h>

int resultado(){

    int i, n=0;

    for(i=1; i<100; i++){
        if(i % 7 == 0){
            n++;
        }
    }
    return n;
}

int main (){

    printf("%d", resultado());

    return 0;
    }
