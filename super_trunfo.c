#include <stdio.h>

int main (){
    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibper1, pibper2;
    float densidadeinvert1, densidadeinvert2;
    float superpoder1, superpoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    //início do primeiro estado
    printf("Digite o nome do primeiro estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da cidade (Ex: A01, A02): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Agora digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1; //calcula a densidade demográfica;

    pibper1 = PIB1 / populacao1; //calcula PIB per capita;

    densidadeinvert1 = 1 / densidade1; /*Inverte a densidade populacional da primeira carta para usar na soma para
    o favorecimento de menores densidades*/

    superpoder1 = (float) populacao1 + area1 + PIB1 + densidadeinvert1 + pibper1 + pontos1; /*soma as propriedades
    da primeira carta*/

    printf("Seu estado é: %s\n", estado1);
    printf("Seu código é: %s\n", codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("A populção é de: %lu\n", populacao1);
    printf("Sua cidade tem uma área de: %.4f\n", area1);
    printf("O PIB é de: %f\n", PIB1);
    printf("A quantidade de pontos turísticos é: %d\n", pontos1);
    printf("A densidade populacional é: %.4f\n", densidade1);
    printf("O PIB per capita é: %.4f\n", pibper1);


    //Fim do primeiro estado

    //Início do segundo estado

    printf("Digite o nome do segundo estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da cidade (Ex: A01, A02): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Agora digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2; //calcula a densidade demográfica;

    pibper2 = PIB2 / populacao2;  //calcula o PIB per capita;

    densidadeinvert2 = 1 / densidade2; /*Inverte a densidade populacional da primeira carta para usar na soma para
    o favorecimento de menores densidades*/

    superpoder2 = (float) populacao2 + area2 + PIB2 + densidadeinvert2 + pibper2 + pontos2; /*soma as propriedades
    da primeira carta*/

    printf("Seu estado é: %s\n", estado2);
    printf("Seu código é: %s\n", codigo2);
    printf("Sua cidade é: %s\n", cidade2);
    printf("A populção é de: %lu\n", populacao2);
    printf("Sua cidade tem uma área de: %.4f\n", area2);
    printf("O PIB é de: %f\n", PIB2);
    printf("A quantidade de pontos turísticos é: %d\n", pontos2);
    printf("A densidade populacional é: %.4f\n", densidade2);
    printf("O PIB per capita é: %.4f\n", pibper2);

    //Fim do segundo estado

    //Início da comparação das cartas

    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = pontos1 > pontos2;
    resultado5 = densidade1 > densidade2;
    resultado6 = pibper1 > pibper2;
    resultado7 = superpoder1 > superpoder2;

    printf("População Carta 1 vs Carta 2 é: %d\n", resultado1);
    printf("Área Carta 1 vs Carta 2 é: %d\n", resultado2);
    printf("PIB Carta 1 vs Carta 2 é: %d\n", resultado3);
    printf("Pontos Turísticos 1 vs Carta 2 é: %d\n", resultado4);
    printf("Densidade 1 vs Carta 2 é: %d\n", resultado5);
    printf("PIB per capita 1 vs Carta 2 é: %d\n", resultado6);
    printf("Super poder Carta 1 vs Carta 2 é: %d\n", resultado7);
    
    return 0;


}