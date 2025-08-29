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

    // Declaração da variável para o menu de escolha do atributo
    int menu_atributo;
    
    // Cabeçalho do jogo
    printf("\n\n<<<<<<<<<<>>>>>>>>>> Super Trunfo <<<<<<<<<<>>>>>>>>>>\n\n");
    printf(">>> Faça o cadastro de duas cartas para começar <<<\n\n");
    
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
    
    /* CÓDIGO DESATIVADO

    // Exibe os dados da carta 1
    printf("\n--- Atributos da Carta 1 ---\n");
    printf("Cidade: %s\n", cidade_c1);
    printf("População: %u\n", populacao_c1);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c1);
    printf("Super Poder: %.2f\n\n", super_poder_c1);

    // Exibe os dados da carta 2
    printf("\n--- Atributos da Carta 2 ---\n");
    printf("Cidade: %s\n", cidade_c2);
    printf("População: %u\n", populacao_c2);
    printf("Área da Cidade: %.2f km²\n", area_cidade_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_c2);
    printf("Super Poder: %.2f\n", super_poder_c2);

    CÓDIGO DESATIVADO */
    
    // Declaração das variáveis de comparação
    int compara_populacao = populacao_c1 > populacao_c2;
    int compara_pontos_turisticos = numero_pontos_turisticos_c1 > numero_pontos_turisticos_c2;
    int compara_area = area_cidade_c1 > area_cidade_c2;
    int compara_pib = pib_c1 > pib_c2;
    int compara_densidade_populacional = densidade_populacional_c1 < densidade_populacional_c2;
    int compara_pib_per_capita = pib_per_capita_c1 > pib_per_capita_c2;
    int compara_super_poder = super_poder_c1 > super_poder_c2;
      
    printf("\n>>> Vamos jogar! <<<\n\n");

    // Exibe o menu de escolha do atributo
    printf("Escolha um atributo para começar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &menu_atributo);

    switch (menu_atributo) {
        case 1:

            printf("--- Você escolheu o atributo >População<. Vamos Ver o resultado! ---\n");

            if (compara_populacao) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("População: %u\n", populacao_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("População: %u\n", populacao_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 1 VENCE! <<<<<\n");

            } else if (populacao_c1 == populacao_c2) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("População: %u\n", populacao_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("População: %u\n", populacao_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> EMPATE! <<<<<\n");

            } else {
                
                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("População: %u\n", populacao_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("População: %u\n", populacao_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 2 VENCE! <<<<<\n");
            }
        break;

        case 2:

            printf("--- Você escolheu o atributo >Área<. Vamos Ver o resultado! ---\n");

            if (compara_area) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Área: %u\n", area_cidade_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Área: %u\n", area_cidade_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 1 VENCE! <<<<<\n");

            } else if (area_cidade_c1 == area_cidade_c2) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Área: %u\n", area_cidade_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Área: %u\n", area_cidade_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> EMPATE! <<<<<\n");

            } else {
                
                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Área: %u\n", area_cidade_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Área: %u\n", area_cidade_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 2 VENCE! <<<<<\n");
            }
        break;

        case 3:

            printf("--- Você escolheu o atributo >PIB<. Vamos Ver o resultado! ---\n");

            if (compara_pib) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("PIB: %u\n", pib_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("PIB: %u\n", pib_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 1 VENCE! <<<<<\n");

            } else if (pib_c1 == pib_c2) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("PIB: %u\n", pib_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("PIB: %u\n", pib_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> EMPATE! <<<<<\n");

            } else {
                
                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("PIB: %u\n", pib_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("PIB: %u\n", pib_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 2 VENCE! <<<<<\n");
            }
        break;

        case 4:

            printf("--- Você escolheu o atributo >Número de pontos turísticos<. Vamos Ver o resultado! ---\n");

            if (compara_pontos_turisticos) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 1 VENCE! <<<<<\n");

            } else if (numero_pontos_turisticos_c1 == numero_pontos_turisticos_c2) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> EMPATE! <<<<<\n");

            } else {
                
                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Número de pontos turísticos: %u\n", numero_pontos_turisticos_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 2 VENCE! <<<<<\n");
            }
        break;

        case 5:

            printf("--- Você escolheu o atributo >Densidade populacional<. Vamos Ver o resultado! ---\n");

            if (compara_densidade_populacional) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Densidade populacional: %u\n", densidade_populacional_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Densidade populacional: %u\n", densidade_populacional_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 1 VENCE! <<<<<\n");

            } else if (densidade_populacional_c1 == densidade_populacional_c2) {

                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Densidade populacional: %u\n", densidade_populacional_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Densidade populacional: %u\n", densidade_populacional_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> EMPATE! <<<<<\n");

            } else {
                
                // Exibe os atributos da carta 1
                printf("\n--- Carta 1 ---\n");
                printf("Cidade: %s\n", cidade_c1);
                printf("Densidade populacional: %u\n", densidade_populacional_c1);

                // Exibe os atributos da carta 2
                printf("\n--- Carta 2 ---\n");
                printf("Cidade: %s\n", cidade_c2);
                printf("Densidade populacional: %u\n", densidade_populacional_c2);

                // Exibe a mensagem de resultado
                printf("\n>>>>> CARTA 2 VENCE! <<<<<\n");
            }
        break;

        default:
            printf("Opção inválida! Tente novamente.\n");

    }
    
    return 0;

}