#include <stdio.h>
#define TAMANHO 5

int main () {

    /* entrada de dados */
    char nomes [TAMANHO][20];
    float notas[TAMANHO],media;
    float soma = 0;


    for(int i = 0; i < TAMANHO; i++) {
        printf("digite o nome %d:", i + 1);
        printf("\n digite as nota %d:", i + 1);
        scanf("%19s", nomes[i]);
        scanf("%f", &notas[i]); 
        soma = soma + notas[i];
    } 
    /* media e exibição*/
    media = soma / TAMANHO;
    printf("%.2f\n", media);
    printf("\nEstes alunos alcancaram uma media superior aos demais aulos:");

    for(int i = 0; i < TAMANHO; i++) {
        if(notas[i] > media) {
            printf("%s\n", nomes[i]);
        } 

    }
    return 0;
}
