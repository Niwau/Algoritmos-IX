#include <stdio.h>

int divisores(int n, int a, int b){

    int divisores = 0;
    int divisores_termo_atual = 0;

    for(int i = a; i <= b; i++){

        for(int j = 2; j <= b && divisores_termo_atual == 0; j++){

            if(i % j == 0 && n % j == 0){
                divisores++;
                divisores_termo_atual = 1;
            }
        }

        divisores_termo_atual = 0;
    }

    return divisores;

}

int main(){

    int n, a, b;

    printf("Insira 3 valores: (N, A, B)\n");
    scanf("%d %d %d", &n, &a, &b);

    printf("\nRESULTADO: %d\n", divisores(n,a,b));

}
