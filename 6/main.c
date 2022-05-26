#include <stdio.h>

int PrintarSequencia(int N){

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(i != j){
                printf("(%d,%d) ", i, j );
            }
        }
    }
}

int main(){

    int N;
    printf("Insira um valor: ");
    scanf("%d", &N);

    PrintarSequencia(N);
}
