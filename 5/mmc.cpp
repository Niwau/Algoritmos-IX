#include <stdio.h>

int CalcularMMC(int n1, int n2){

	int maior, menor, maior_copia, menor_copia;

	if(n1 > n2){
		maior = n1;
		menor = n2;

	} else if(n2 > n1){
		maior = n2;
		menor = n1;
	}

	maior_copia = maior;
	menor_copia = menor;

	for(maior; maior != menor; maior += maior_copia){
		for(menor; menor <= maior ; menor += menor_copia){
			if(menor == maior){
				return menor;
			}
		}
	}
}

int main(){

	int n1, n2;

	printf("Insira dois valores: ");
	scanf("%d %d", &n1, &n2);

	printf("\nMMC(%d,%d): %d\n", n1, n2, CalcularMMC(n1, n2));
}
