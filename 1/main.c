#include <stdio.h>
#include <locale.h>

void Show(int n, int a, int b){
    for(int i = a; i <= b; i++){

        if(i % n == 0){
            printf("%d ", i);
        }
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int n, a, b;

    printf("Insira 3 números: ");
    scanf("%d %d %d", &n, &a, &b);

    Show(n,a,b);

}
