# include <stdio.h>

# include <stdlib.h>

int main (void)

{

int num, conta=0,i,j;

for(j=1; j<=100;j++) {

if(primo(j)) {



    printf(" %d e primo\n", j);

}

}

return 0;

}

void primo(int num, int conta)

{

    int i;

    conta=0;

    for(i=1; i<=num; i++) {

        if(num%i==0)  conta++;

    }if(conta==2) {

  printf(" %d\n", num);

    }

}
