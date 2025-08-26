#include <stdio.h>

int main() {

    // Declaração das variáveis para armazenar os dados da carta 1
    char estado_c1[1], codigo_carta_c1[10], cidade_c1[30];
    unsigned long int populacao_c1;
    int numero_pontos_turisticos_c1;
    float area_cidade_c1, pib_c1;

    // Declaração das variáveis para armazenar os dados da carta 2
    char estado_c2[1], codigo_carta_c2[10], cidade_c2[30];
    unsigned long int populacao_c2;
    int numero_pontos_turisticos_c2;
    float area_cidade_c2, pib_c2;

    // Solicita os dados da carta 1 ao usuário
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: \n");
    scanf("%s", &estado_c1);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_c1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade_c1);
    printf("Digite a população: \n");
    scanf("%u", &populacao_c1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area_cidade_c1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos_c1);

    // Solicita os dados da carta 2 ao usuário
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: \n");
    scanf("%s", &estado_c2);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_carta_c2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade_c2);
    printf("Digite a população: \n");
    scanf("%u", &populacao_c2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area_cidade_c2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_c2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_pontos_turisticos_c2);

    // Declaração das variáveis para calcular a densidade populacional
    float densidade_populacional_c1 = (float)(populacao_c1 / area_cidade_c1);
    float densidade_populacional_c2 = (float)(populacao_c2 / area_cidade_c2);

    // Declaração das variáveis para calcular o PIB per capita
    float pib_per_capita_c1 = (float)((pib_c1 * 1000000000) / populacao_c1);
    float pib_per_capita_c2 = (float)((pib_c2 * 1000000000) / populacao_c2);
    
    // Declaração das variáveis para calcular o super poder
    double super_poder_c1 = (float)((populacao_c1 + area_cidade_c1 + pib_c1 + numero_pontos_turisticos_c1 + pib_per_capita_c1) / densidade_populacional_c1);
    double super_poder_c2 = (float)((populacao_c2 + area_cidade_c2 + pib_c2 + numero_pontos_turisticos_c2 + pib_per_capita_c2) / densidade_populacional_c2);
    
    // Declaração das variáveis de comparação
    int compara_populacao = populacao_c1 > populacao_c2;
    int compara_pontos_turisticos = numero_pontos_turisticos_c1 > numero_pontos_turisticos_c2;
    int compara_area = area_cidade_c1 > area_cidade_c2;
    int compara_pib = pib_c1 > pib_c2;
    int compara_densidade_populacional = densidade_populacional_c1 < densidade_populacional_c2;
    int compara_pib_per_capita = pib_per_capita_c1 > pib_per_capita_c2;
    int compara_super_poder = super_poder_c1 > super_poder_c2;
    
    // Exibe os dados informados da carta 1
    printf("\n--- Dados Informados da Carta 1 ---\n");
    printf("Estado: %s\n", estado_c1);
    printf("Código da Carta: %s\n", codigo_carta_c1);
    printf("Cidade: %s\n", cidade_c1);
    printf("População: %u\n", populacao_c1);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c1);

    // Exibe a densidade populacional e o PIB per capita da carta 1
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c1);

    // Exibe o super poder da carta 1    
    printf("Super Poder: %.2f\n", super_poder_c1);

    // Exibe os dados informados da carta 2
    printf("\n--- Dados Informados da Carta 2 ---\n");
    printf("Estado: %s\n", estado_c2);
    printf("Código da Carta: %s\n", codigo_carta_c2);
    printf("Cidade: %s\n", cidade_c2);
    printf("População: %u\n", populacao_c2);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c2);

    // Exibe a densidade populacional e o PIB per capita da carta 2
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c2);

    // Exibe o super poder da carta 2
    printf("Super Poder: %.2f\n", super_poder_c2);

    // Testa e exibe os resultados da comparação do atributo "população"
    printf("\n--- Resultados das Comparações ---\n");
    if (compara_populacao) {
        printf("A população da Carta 1 é maior\n");
    } else {
        printf("A população da Carta 2 é maior\n");
    }

    // Exibe as informações da carta/cidade vencedora
    if (compara_populacao) {
        printf("Portanto, a cidade vencedora é: %s\n\n", cidade_c1);
    } else {
        printf("Portanto, a cidade vencedora é: %s\n\n", cidade_c2);
    }

    return 0;

}