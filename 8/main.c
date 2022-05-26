#include <stdio.h>

int primos(int n){

    int count = 0;

    for(int i = 2; i < n; i++){

        for(int j = 1; j <= i; j++){

            if(i % j == 0){
                count++;
            }
        }

        if(count == 2){
            printf("%d ", i);
        }

        count = 0;
    }

}

int main(){

    int n;

    printf("Insira um valor: ");
    scanf("%d", &n);

    primos(n);

}
