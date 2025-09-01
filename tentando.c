#include <stdio.h>

int main() {
    int a, b, soma, mult, sub, div;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    soma = a + b;
    mult = a * b;
    sub = a - b;
    div = a / b;
    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", mult);
    printf("Subtracao: %d\n", sub);
    printf("Divisao: %d\n", div);
    
    return 0;
}
