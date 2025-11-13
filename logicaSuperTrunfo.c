#include <stdio.h>

int main(){

    //mensagem de boas vindas e apresentação!

    printf("================================\n");
    printf("  *        SUPER TRUNFO       *   \n");
    printf("================================\n");
    
    printf("\nBem vindo ao Super Trufo\n");
    printf("Neste Jogo você irá criar 2 cartas diferentes\n");
    printf("Cada Carta possui atributos únicos que irão determinar elas\n");
    printf("\nPrepare-se para começar!\n");


    // Declaração das variáveis para a carta número 1
    char estado1[20], codigo1[10], cidade1[20];
    int populacao1, pontosturisticos1;
    float area1, pib1;
    float densidade1, pib_per_capita1; // << novos campos

    // Declaração das variáveis para a carta número 2
    char estado2[20], codigo2[10], cidade2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2;
    float densidade2, pib_per_capita2; // << novos campos


    //Cadastro primeira carta
    printf("\n===============================================\n");
    printf("  *        CADASTRO DA PRIMEIRA CARTA       *   \n");
    printf("===============================================\n");

    printf("\nDigite o estado (A-H): ");
    scanf("%19s", estado1);

    printf("Digite o Código da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Digite o nome da sua cidade: ");
    scanf("%19s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);


    // Cálculos da carta 1
    densidade1 = populacao1 / area1;                               // hab/km²
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;         // reais por habitante


    //Cadastro Segunda carta
    printf("===============================================\n");
    printf("  *        CADASTRO DA SEGUNDA CARTA       *   \n");
    printf("===============================================\n");

    printf("Digite o estado (A-H): ");
    scanf("%19s", estado2);

    printf("Digite o Código da carta (ex: A01): ");
    scanf("%9s", codigo2);

    printf("Digite o nome da sua cidade: ");
    scanf("%19s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    // Cálculos da carta 2
    densidade2 = populacao2 / area2;                               // hab/km²
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;         // reais por habitante


    // Exibição das informações da carta número 1
    printf("\n ======* CARTA 1 *======\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição das informações da carta número 2
    printf("\n ======* CARTA 2 *======\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    // ======================================
    //      COMPARAÇÃO ENTRE AS CARTAS
    // ======================================

    printf("\n===============================================\n");
    printf("        COMPARAÇÃO ENTRE AS CARTAS\n");
    printf("===============================================\n");

    // Foi usado IF e Else com operadores para personalizar o resultado final para o usuário

    int pontos_cidade1 = 0;
    int pontos_cidade2 = 0;

    // Comparar População
    if (populacao1 > populacao2) {
        printf("A cidade %s tem maior população.\n", cidade1);
        pontos_cidade1++;
    } else if (populacao1 < populacao2) {
        printf("A cidade %s tem maior população.\n", cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparar Área
    if (area1 > area2) {
        printf("A cidade %s tem maior área.\n", cidade1);
        pontos_cidade1++;
    } else if (area1 < area2) {
        printf("A cidade %s tem maior área.\n", cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparar PIB
    if (pib1 > pib2) {
        printf("A cidade %s tem maior PIB.\n", cidade1);
        pontos_cidade1++;
    } else if (pib1 < pib2) {
        printf("A cidade %s tem maior PIB.\n", cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Comparar Pontos Turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("A cidade %s possui mais pontos turísticos.\n", cidade1);
        pontos_cidade1++;
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("A cidade %s possui mais pontos turísticos.\n", cidade2);
        pontos_cidade2++;
    } else {
        printf("As duas cidades possuem a mesma quantidade de pontos turísticos.\n");
    }

    // Resultado final
    printf("===============================================\n");
    printf("Pontuação final:\n");
    printf("%s: %d pontos\n", cidade1, pontos_cidade1);
    printf("%s: %d pontos\n", cidade2, pontos_cidade2);

    if (pontos_cidade1 > pontos_cidade2) {
        printf("\nA cidade vencedora é: %s!\n", cidade1);
    } else if (pontos_cidade2 > pontos_cidade1) {
        printf("\nA cidade vencedora é: %s!\n", cidade2);
    } else {
        printf("\nEmpate entre %s e %s!\n", cidade1, cidade2);
    }

    printf("===============================================\n");
    printf("              FIM DA COMPARAÇÃO\n");
    printf("===============================================\n");

    return 0;
}
