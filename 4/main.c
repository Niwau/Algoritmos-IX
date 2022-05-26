#include <stdio.h>
#include <locale.h>

int mmc(int n1, int n2){

    int mdc, menor;

    menor = (n1 > n2) ? n2 : n1;

    for(int i = 1; i <= menor; i++){

        if(n1 % i == 0 && n2 % i == 0){
            mdc = i;
        }
    }

    return mdc;
}

int main(){

    int n1, n2;

    printf("Insira dois valores: ");
    scanf("%d %d", &n1, &n2);

    printf("\nMMC(%d,%d): %d\n", n1, n2, mmc(n1,n2));
}
