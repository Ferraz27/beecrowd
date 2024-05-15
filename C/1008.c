#include <stdio.h>

int main() {

    int numero, horas ;
    float phora, salario;

    scanf("%d %d %f ", &numero, &horas, &phora);
    salario = horas * phora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numero,salario);
    

    return 0;
}