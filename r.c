#include<stdio.h>

int main(){

    float A, B, C, N, VB;
    int NTE;
    float PVV, PA, PB, PC, PN, PVB;

    printf("Digite o total de votos do canditado A: \n");
    scanf("%f", &A);

    printf("Digite o total de votos do canditado B: \n");
    scanf("%f", &B);

    printf("Digite o total de votos do canditado C: \n");
    scanf("%f", &C);

    printf("Digite o total de votos NULOS: \n");
    scanf("%f", &N);

    printf("Digite o total de votos EM BRANCO: \n");
    scanf("%f", &VB);

    NTE = A+B+C+N+VB;
    PVV = ((A+B+C)/NTE)*100;
    PA = (A/NTE)*100;
    PB = (B/NTE)*100;
    PC = (C/NTE)*100;
    PN = (N/NTE)*100;
    PVB = (VB/NTE)*100;

    printf("\n");
    printf("Os dados obtidos foram: \n");
    printf("O total de eleitores presentes foi de: %d2. \n", NTE);
    printf("O percentual de votos válidos foi de: %.2f%%. \n", PVV);
    printf("O percentual de votos do candito A foi de: %.2f%%. \n", PA);
    printf("O percentual de votos do candito B foi de: %.2f%%. \n", PB);
    printf("O percentual de votos do candito C foi de: %.2f%%. \n", PC);
    printf("O percentual de votos NULOS foi de: %.2f%%. \n", PN);
    printf("O percentual de votos EM BRANCO foi de: %.2f%%. \n", PVB);
}