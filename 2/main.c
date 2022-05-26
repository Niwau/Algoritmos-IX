#include <stdio.h>

float ConverterTemperatura(float temperatura){
    return (temperatura * 1.8) + 32;
}

int main(){

    float temperatura_celsius, temperatura_farenheit;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &temperatura_celsius);

    temperatura_farenheit = ConverterTemperatura(temperatura_celsius);

    printf("\nTemperatura em Farenheit: %.2f\n\n", temperatura_farenheit);
}
