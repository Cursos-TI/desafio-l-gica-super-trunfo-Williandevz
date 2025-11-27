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

    // Carta 1
    char estado1[20], codigo1[10], cidade1[50];
    unsigned long int populacao1;   // agora unsigned long int
    int pontosturisticos1;
    float area1, pib1;              // PIB em bilhões
    float densidade1, pib_per_capita1, super_poder1;

    // Carta 2
    char estado2[20], codigo2[10], cidade2[50];
    unsigned long int populacao2;   // agora unsigned long int
    int pontosturisticos2;
    float area2, pib2;              // PIB em bilhões
    float densidade2, pib_per_capita2, super_poder2;

    // ===== Cadastro primeira carta =====
    printf("\n===============================================\n");
    printf("  *        CADASTRO DA PRIMEIRA CARTA       *   \n");
    printf("==================================================\n");

    printf("\nDigite o estado (A-H): ");
    scanf("%19s", estado1);

    printf("Digite o Código da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Digite o nome da sua cidade: ");
    scanf("%49s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1); // unsigned long int -> %lu

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cálculos carta 1
    densidade1 = (float)((double)populacao1 / (double)area1);                 // hab/km²
    pib_per_capita1 = (float)((double)pib1 * 1000000000.0 / (double)populacao1); // reais/hab
    super_poder1 = (float)(
          (double)populacao1
        + (double)area1
        + (double)pib1
        + (double)pontosturisticos1
        + (double)pib_per_capita1
        + (1.0 / (double)densidade1)   // inverso da densidade: menor densidade => maior poder
    );

    // ===== Cadastro segunda carta =====
    printf("===============================================\n");
    printf("  *        CADASTRO DA SEGUNDA CARTA       *   \n");
    printf("===============================================\n");

    printf("Digite o estado (A-H): ");
    scanf("%19s", estado2);

    printf("Digite o Código da carta (ex: B02): ");
    scanf("%9s", codigo2);

    printf("Digite o nome da sua cidade: ");
    scanf("%49s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2); // unsigned long int -> %lu

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos carta 2
    densidade2 = (float)((double)populacao2 / (double)area2);                 // hab/km²
    pib_per_capita2 = (float)((double)pib2 * 1000000000.0 / (double)populacao2); // reais/hab
    super_poder2 = (float)(
          (double)populacao2
        + (double)area2
        + (double)pib2
        + (double)pontosturisticos2
        + (double)pib_per_capita2
        + (1.0 / (double)densidade2)
    );

    // ===== Exibição das cartas =====
    printf("\n ======* CARTA 1 *======\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n ======* CARTA 2 *======\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // ===== Comparações nível mestre (1 = Carta 1 vence, 0 = Carta 2 vence) =====
    printf("\n===============================================\n");
    printf("           COMPARAÇÃO DE CARTAS\n");
    printf("===============================================\n");

    // Para cada atributo, calculamos um "booleano" inteiro: 1 se Carta 1 vence, 0 caso contrário.
    // Em caso de empate, exibimos "Empate (0)" para manter o formato 0/1.

    // População (maior vence)
    {
        int r = (populacao1 > populacao2) ? 1 : 0;
        if (populacao1 == populacao2)
            printf("População: Empate (0)\n");
        else
            printf("População: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // Área (maior vence)
    {
        int r = (area1 > area2) ? 1 : 0;
        if (area1 == area2)
            printf("Área: Empate (0)\n");
        else
            printf("Área: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // PIB (maior vence)
    {
        int r = (pib1 > pib2) ? 1 : 0;
        if (pib1 == pib2)
            printf("PIB: Empate (0)\n");
        else
            printf("PIB: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // Pontos Turísticos (maior vence)
    {
        int r = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
        if (pontosturisticos1 == pontosturisticos2)
            printf("Pontos Turísticos: Empate (0)\n");
        else
            printf("Pontos Turísticos: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // Densidade Populacional (MENOR vence)
    {
        int r = (densidade1 < densidade2) ? 1 : 0;
        if (densidade1 == densidade2)
            printf("Densidade Populacional: Empate (0)\n");
        else
            printf("Densidade Populacional: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // PIB per Capita (maior vence)
    {
        int r = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
        if (pib_per_capita1 == pib_per_capita2)
            printf("PIB per Capita: Empate (0)\n");
        else
            printf("PIB per Capita: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    // Super Poder (maior vence)
    {
        int r = (super_poder1 > super_poder2) ? 1 : 0;
        if (super_poder1 == super_poder2)
            printf("Super Poder: Empate (0)\n");
        else
            printf("Super Poder: Carta %d venceu (%d)\n", r ? 1 : 2, r);
    }

    printf("===============================================\n");
    printf("                 FIM\n");
    printf("===============================================\n");

    return 0;
}
