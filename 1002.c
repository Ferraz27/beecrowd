#include <stdio.h>

int main()
{
    double R, area;
    scanf("%lf",&R);
    area = ((R*R)*3.14159);
    printf("A=%.4lf\n",area);

    return 0;
}