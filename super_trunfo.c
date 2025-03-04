#include <stdio.h>

int main (){
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;

    //início do primeiro estado
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da cidade (Ex: A01, A02): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Agora digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos1);

    printf("Seu estado é: %s\n", estado1);
    printf("Seu código é: %s\n", codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("A populção é de: %d\n", populacao1);
    printf("Sua cidade tem uma área de: %f\n", area1);
    printf("O PIB é de: %f\n", PIB1);
    printf("A quantidade de pontos turísticos é: %d\n", pontos1);

             

    //Fim do primeiro estado

    //Início do segundo estado

    printf("Digite o nome do segundo estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da cidade (Ex: A01, A02): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Agora digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

    printf("Seu estado é: %s\n", estado2);
    printf("Seu código é: %s\n", codigo2);
    printf("Sua cidade é: %s\n", cidade2);
    printf("A populção é de: %d\n", populacao2);
    printf("Sua cidade tem uma área de: %f\n", area2);
    printf("O PIB é de: %f\n", PIB2);
    printf("A quantidade de pontos turísticos é: %d\n", pontos2);

    //Fim do segundo estado

    return 0;
}