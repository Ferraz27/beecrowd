#include <stdio.h>

int main() {

    char nome[100];
    
    double quantia, salario, total;

    scanf("%s %lf %lf ", nome, &salario, &quantia);
    total = salario + quantia*0.15;
    printf("TOTAL = R$ %.2lf\n",total);
    

    return 0;
}