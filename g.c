#include<stdio.h>

int main(){

    int A, B, C, D;
    int S1, S2, S3, S4, S5, S6;
    int M1, M2, M3, M4, M5, M6;

    printf("Digite um valor para A: \n");
    scanf("%d", &A);

    printf("Digite um valor para B: \n");
    scanf("%d", &B);

    printf("Digite um valor para C: \n");
    scanf("%d", &C);

    printf("Digite um valor para D: \n");
    scanf("%d", &D);
    printf("\n");

    S1 = A+B;
    S2 = A+C;
    S3 = A+D;
    S4 = B+C;
    S5 = B+D;
    S6 = C+D;

    M1 = A*B;
    M2 = A*C;
    M3 = A*D;
    M4 = B*C;
    M5 = B*D;
    M6 = C*D;

    printf("O resultado da S1 é de: %d. \n", S1);
    printf("O resultado da S2 é de: %d. \n", S2);
    printf("O resultado da S3 é de: %d. \n", S3);
    printf("O resultado da S4 é de: %d. \n", S4);
    printf("O resultado da S5 é de: %d. \n", S5);
    printf("O resultado da S6 é de: %d. \n \n", S6);

    printf("O resultada da M1 é de: %d. \n", M1);
    printf("O resultada da M2 é de: %d. \n", M2);
    printf("O resultada da M3 é de: %d. \n", M3);
    printf("O resultada da M4 é de: %d. \n", M4);
    printf("O resultada da M5 é de: %d. \n", M5);
    printf("O resultada da M6 é de: %d. \n", M6);
}