#include <stdio.h>

int CalcularTermo(int n){

	int termo_atual, primeiro_termo = 0, segundo_termo = 1;

	for(int i = 1; i <= n; i++){

		if(n == 1 || i == 1){
			termo_atual = 0;

		} else if(n == 2 || i == 2){
			termo_atual = 1;

		} else {
			termo_atual = primeiro_termo + segundo_termo;
			primeiro_termo = segundo_termo;
			segundo_termo = termo_atual;
		}

	}

	return termo_atual;
}

int main(){

	int n;

	printf("Insira um valor: ");
	scanf("%d", &n);

	printf("%d", CalcularTermo(n));

}
