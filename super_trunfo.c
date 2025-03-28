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
    int opcaoMenu, opcaoMenu2, opcaoMenu3;

    printf("###SUPERTRUNFO###: \n");
    printf("###MENU DO JOGO###: \n");
    printf("1.Iniciar Jogo\n");
    printf("2.Ver regras\n");
    printf("3.Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        break;
    
    case 2:
        printf("###REGRAS DO JOGO###\n");
        printf("1. O jogo é composto por 2 jogadores.\n");
        printf("2. Cada jogador recebe uma carta com informações sobre um estado.\n");
        printf("3. Cada carta possui 6 atributos: população, área, PIB, pontos turísticos, densidade populacional e PIB per capita.\n");
        printf("4. Cada jogador escolhe um atributo da sua carta para comparar com o atributo do adversário.\n");
        printf("5. O jogador que tiver o atributo maior, ganha a rodada e fica com a carta do adversário.\n");
        printf("6. O jogo termina quando um dos jogadores ficar sem cartas.\n");
        break;

        case 3: 
        printf("Saindo do jogo...\n");
        break;

    default: 
        printf("Opção inválida!\n");
        break;
    }

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

     //Início do jogo
     printf("###INÍCIO DO JOGO###\n");
     printf("###ESCOLHA O ATRIBUTO PARA COMPARAR###\n");
     printf("1.População\n");
     printf("2.Área\n");
     printf("3.Superpoder\n");
     printf("Digite o atributo desejado: \n");
     scanf("%d", &opcaoMenu2);1

    switch (opcaoMenu2)
    {
    case 1:
        printf("Você escolheu o atributo população!\n");
       resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo superpoder!\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }        

    printf("Escolha o segundo atributo para comparar: \n");
    printf("O atributo deve ser diferente do anterior!\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.Superpoder\n");
    scanf("%d", &opcaoMenu3);

    if (opcaoMenu3 == opcaoMenu2)
        {
            printf("VocÊ escolheu o mesmo atributo\n");
        }
        else {
            switch (opcaoMenu3)
            {
                case 1 :
                    printf("Você escolheu o atributo população!\n");
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                    break;
                case 2:
                    printf("Você escolheu o atributo área!\n");
                    resultado2 = area1 > area2 ? 1 : 0;
                    break;
                case 3:
                    printf("Você escolheu o atributo superpoder!\n");
                    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
        }
      
        if (resultado1 && resultado2)
     {
        printf("Você ganhou a rodada!\n");
     }
     else if (resultado1 != resultado2)
     {
        printf("Empatou!\n");
     }
        else
        {
            printf("Você perdeu a rodada!\n");
        }
    }
    return 0;

}