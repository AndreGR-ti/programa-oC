#include <stdio.h>
int main(){

    int Carta_02;

    char Estado;
    char Codigo[(5)];
    char Cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_turisticos;

    printf("Digite o estado: \n");
    scanf("%s", &Estado);

    printf("Digite o codigo: \n");
    scanf("%s", &Codigo);

    printf("Digite a cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a area: \n");
    scanf("%f", &Area);

    printf("Digite o pib: \n");
    scanf("%f", &Pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);

    printf("Carta_02\n");
    printf("Estado: %s\n", &Estado);
    printf("Codigo: %s\n", &Codigo);
    printf("Cidade: %s\n", &Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %f\n", Area);
    printf("Pib: %f", Pib);
    printf("Pontos_turisticos: %d\n", Pontos_turisticos);


    return 0;



}
