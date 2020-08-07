#include <stdio.h>
#include <stdlib.h>

    int mult_por_soma(int a, int b){
        int resultado = 0;
        while(a > 0){
            resultado = resultado+b;
            a--;
        }
            return resultado;
        }

int main() {
int a = 4, b = 5, resultado;

    resultado = mult_por_soma(a, b);

    printf("%d", resultado);

    }
