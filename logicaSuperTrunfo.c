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
    int menu_atributo1, menu_atributo2;

    // Declaração da variável para armazenar o resultado da comparação
    int resultado1, resultado2;
    float soma_c1_a1, soma_c2_a1, soma_c1_a2, soma_c2_a2, resultado_final_c1, resultado_final_c2;
    
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
 
    // Declaração das variáveis de comparação
    int compara_populacao = populacao_c1 > populacao_c2;
    int compara_pontos_turisticos = numero_pontos_turisticos_c1 > numero_pontos_turisticos_c2;
    int compara_area = area_cidade_c1 > area_cidade_c2;
    int compara_pib = pib_c1 > pib_c2;
    int compara_densidade_populacional = densidade_populacional_c1 < densidade_populacional_c2;
    int compara_pib_per_capita = pib_per_capita_c1 > pib_per_capita_c2;
    int compara_super_poder = super_poder_c1 > super_poder_c2;
    
    CÓDIGO DESATIVADO */
    
    printf("\n>>> Vamos jogar! <<<\n\n");

    // Exibe o menu de escolha do atributo 1
    printf("Escolha o primeiro atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &menu_atributo1);

    switch (menu_atributo1) {
        case 1:
            printf("--- Você escolheu o atributo >População<. ---\n");
            resultado1 = populacao_c1 > populacao_c2 ? 1 : 0;
            soma_c1_a1 = populacao_c1;
            soma_c2_a1 = populacao_c2;
            break;
        
        case 2:
            printf("--- Você escolheu o atributo >Área<. ---\n");
            resultado1 = area_cidade_c1 > area_cidade_c2 ? 1 : 0;
            soma_c1_a1 = area_cidade_c1;
            soma_c2_a1 = area_cidade_c2;
            break;
        
        case 3:
            printf("--- Você escolheu o atributo >PIB<. ---\n");
            resultado1 = pib_c1 > pib_c2 ? 1 : 0;
            soma_c1_a1 = pib_c1;
            soma_c2_a1 = pib_c2;
            break;
        
        case 4:
            printf("--- Você escolheu o atributo >Número de pontos turísticos<. ---\n");
            resultado1 = numero_pontos_turisticos_c1 > numero_pontos_turisticos_c2 ? 1 : 0;
            soma_c1_a1 = numero_pontos_turisticos_c1;
            soma_c2_a1 = numero_pontos_turisticos_c2;
            break;
        
        case 5:
            printf("--- Você escolheu o atributo >Densidade populacional<. ---\n");
            resultado1 = densidade_populacional_c1 < densidade_populacional_c2 ? 1 : 0;
            soma_c1_a1 = densidade_populacional_c1;
            soma_c2_a1 = densidade_populacional_c2;
            break;
        
        case 6:
            printf("--- Você escolheu o atributo >PIB per capita<. ---\n");
            resultado1 = pib_per_capita_c1 > pib_per_capita_c2 ? 1 : 0;
            soma_c1_a1 = pib_per_capita_c1;
            soma_c2_a1 = pib_per_capita_c2;
            break;
        
        case 7:
            printf("--- Você escolheu o atributo >Super poder<. ---\n");
            resultado1 = super_poder_c1 > super_poder_c2 ? 1 : 0;
            soma_c1_a1 = super_poder_c1;
            soma_c2_a1 = super_poder_c2;
            break;
        
        default:
            printf("Opção inválida! Tente novamente.\n");   
    }

    // Exibe o menu de escolha do atributo 2
    printf("Escolha o segundo atributo\n");
    if (menu_atributo1 == 1) {
        printf("1. (ESCOLHIDO) População\n");
    } else {
        printf("1. População\n");
    }
    if (menu_atributo1 == 2) {
        printf("2. (ESCOLHIDO) Área\n");
    } else {
        printf("2. Área\n");
    }
    if (menu_atributo1 == 3) {
        printf("3. (ESCOLHIDO) PIB\n");
    } else {
        printf("3. PIB\n");
    }
    if (menu_atributo1 == 4) {
        printf("4. (ESCOLHIDO) Número de pontos turísticos\n");
    } else {
        printf("4. Número de pontos turísticos\n");
    }
    if (menu_atributo1 == 5) {
        printf("5. (ESCOLHIDO) Densidade populacional\n");
    } else {
        printf("5. Densidade populacional\n");
    }
    if (menu_atributo1 == 6) {
        printf("6. (ESCOLHIDO) PIB per capita\n");
    } else {
        printf("6. PIB per capita\n");
    }
    if (menu_atributo1 == 7) {
        printf("7. (ESCOLHIDO) Super poder \n");
    } else {
        printf("7. Super poder\n");
    }
    printf("Escolha uma opção: \n");
    scanf("%d", &menu_atributo2);

    if (menu_atributo2 == menu_atributo1) {
        printf("Você já escolheu este atributo. Escolha outro!\n");
    } else {
        switch (menu_atributo2) {
            case 1:
                printf("--- Você escolheu o atributo >População<. ---\n");
                resultado2 = populacao_c1 > populacao_c2 ? 1 : 0;
                soma_c1_a2 = populacao_c1;
                soma_c2_a2 = populacao_c2;
                break;
            
            case 2:
                printf("--- Você escolheu o atributo >Área<. ---\n");
                resultado2 = area_cidade_c1 > area_cidade_c2 ? 1 : 0;
                soma_c1_a2 = area_cidade_c1;
                soma_c2_a2 = area_cidade_c2;
                break;
            
            case 3:
                printf("--- Você escolheu o atributo >PIB<. ---\n");
                resultado2 = pib_c1 > pib_c2 ? 1 : 0;
                soma_c1_a2 = pib_c1;
                soma_c2_a2 = pib_c2;
                break;
            
            case 4:
                printf("--- Você escolheu o atributo >Número de pontos turísticos<. ---\n");
                resultado2 = numero_pontos_turisticos_c1 > numero_pontos_turisticos_c2 ? 1 : 0;
                soma_c1_a2 = numero_pontos_turisticos_c1;
                soma_c2_a2 = numero_pontos_turisticos_c2;
                break;
            
            case 5:
                printf("--- Você escolheu o atributo >Densidade populacional<. ---\n");
                resultado2 = densidade_populacional_c1 < densidade_populacional_c2 ? 1 : 0;
                soma_c1_a2 = densidade_populacional_c1;
                soma_c2_a2 = densidade_populacional_c2;
                break;
            
            case 6:
                printf("--- Você escolheu o atributo >PIB per capita<. ---\n");
                resultado2 = pib_per_capita_c1 > pib_per_capita_c2 ? 1 : 0;
                soma_c1_a2 = pib_per_capita_c1;
                soma_c2_a2 = pib_per_capita_c2;
                break;
            
            case 7:
                printf("--- Você escolheu o atributo >Super poder<. ---\n");
                resultado2 = super_poder_c1 > super_poder_c2 ? 1 : 0;
                soma_c1_a2 = super_poder_c1;
                soma_c2_a2 = super_poder_c2;
                break;
            
            default:
                printf("Opção inválida! Tente novamente.\n");   
        }
        
        
        printf("\n>>>>> Resultado da Comparação dos Atributos <<<<<\n");
        // Exibe o resultado da comparação dos atributos individuais
        if (resultado1 && resultado2) {        
            printf("<><> Carta 1 venceu nos dois atributos! <><>\n");
        } else if (resultado1 || resultado2) {
            printf("<><> Cada carta venceu em um atributo! Empate! <><>\n");
        } else {
            printf("<><> Carta 2 venceu nos dois atributos! <><>\n");
        }

        // Exibe a cidade das cartas
        printf("\nCidade - Carta 1: %s\n", cidade_c1);
        printf("Cidade - Carta 2: %s\n", cidade_c2);

        // Exibe os dados do atributo 1
        printf("\nAtributo 1:\n");
        if (menu_atributo1 == 1) {
            printf("População - Carta 1: %u\n", populacao_c1);
            printf("População - Carta 2: %u\n", populacao_c2);
        } else if (menu_atributo1 == 2) {
            printf("Área da Cidade - Carta 1: %.2f km²\n", area_cidade_c1);
            printf("Área da Cidade - Carta 2: %.2f km²\n", area_cidade_c2);
        } else if (menu_atributo1 == 3) {
            printf("PIB - Carta 1: %.2f bilhões de reais\n", pib_c1);
            printf("PIB - Carta 2: %.2f bilhões de reais\n", pib_c2);
        } else if (menu_atributo1 == 4) {
            printf("Número de Pontos Turísticos - Carta 1: %d\n", numero_pontos_turisticos_c1);
            printf("Número de Pontos Turísticos - Carta 2: %d\n", numero_pontos_turisticos_c2);
        } else if (menu_atributo1 == 5) {
            printf("Densidade Populacional - Carta 1: %.2f habitantes/km²\n", densidade_populacional_c1);
            printf("Densidade Populacional - Carta 2: %.2f habitantes/km²\n", densidade_populacional_c2);
        } else if (menu_atributo1 == 6) {
            printf("PIB per Capita - Carta 1: %.2f reais\n", pib_per_capita_c1);
            printf("PIB per Capita - Carta 2: %.2f reais\n", pib_per_capita_c2);
        } else {
            printf("Super Poder - Carta 1: %.2f\n", super_poder_c1);
            printf("Super Poder - Carta 2: %.2f\n", super_poder_c2);
        }

        // Exibe os dados do atributo 2
        printf("\nAtributo 2:\n");
        if (menu_atributo2 == 1) {
            printf("População - Carta 1: %u\n", populacao_c1);
            printf("População - Carta 2: %u\n", populacao_c2);
        } else if (menu_atributo2 == 2) {
            printf("Área da Cidade - Carta 1: %.2f km²\n", area_cidade_c1);
            printf("Área da Cidade - Carta 2: %.2f km²\n", area_cidade_c2);
        } else if (menu_atributo2 == 3) {
            printf("PIB - Carta 1: %.2f bilhões de reais\n", pib_c1);
            printf("PIB - Carta 2: %.2f bilhões de reais\n", pib_c2);
        } else if (menu_atributo2 == 4) {
            printf("Número de Pontos Turísticos - Carta 1: %d\n", numero_pontos_turisticos_c1);
            printf("Número de Pontos Turísticos - Carta 2: %d\n", numero_pontos_turisticos_c2);
        } else if (menu_atributo2 == 5) {
            printf("Densidade Populacional - Carta 1: %.2f habitantes/km²\n", densidade_populacional_c1);
            printf("Densidade Populacional - Carta 2: %.2f habitantes/km²\n", densidade_populacional_c2);
        } else if (menu_atributo2 == 6) {
            printf("PIB per Capita - Carta 1: %.2f reais\n", pib_per_capita_c1);
            printf("PIB per Capita - Carta 2: %.2f reais\n", pib_per_capita_c2);
        } else {
            printf("Super Poder - Carta 1: %.2f\n", super_poder_c1);
            printf("Super Poder - Carta 2: %.2f\n", super_poder_c2);
        }
        
        // Cálculo do resultado final somando os valores dos atributos escolhidos
        
        if (menu_atributo1 == 5 || menu_atributo2 == 5) { // Subtrai caso um dos atributos seja densidade populacional
            resultado_final_c1 = soma_c1_a1 - soma_c1_a2;
            resultado_final_c2 = soma_c2_a1 - soma_c2_a2;
            if (resultado_final_c1 < 0 || resultado_final_c2 < 0) {
                resultado_final_c1 = (soma_c1_a1 - soma_c1_a2) * -1; // Transforma em positivo caso necessário
                resultado_final_c2 = (soma_c2_a1 - soma_c2_a2) * -1; // Transforma em positivo caso necessário
            } else {
                resultado_final_c1 = soma_c1_a1 + soma_c1_a2;
                resultado_final_c2 = soma_c2_a1 + soma_c2_a2;
            }
        } else {
            resultado_final_c1 = soma_c1_a1 + soma_c1_a2;
            resultado_final_c2 = soma_c2_a1 + soma_c2_a2;
        }

        // Exibe o resultado final do jogo
        if (resultado_final_c1 > resultado_final_c2) {
            printf("\n>>> Resultado Final: CARTA 1 VENCEU O JOGO! <<<\n\n");
            printf("Soma dos atributos da Carta 1: %.2f\n", resultado_final_c1);
            printf("Soma dos atributos da Carta 2: %.2f\n\n", resultado_final_c2);
        } else if (resultado_final_c1 < resultado_final_c2) {
            printf("\n>>> Resultado Final: CARTA 2 VENCEU O JOGO! <<<\n\n");
            printf("Soma dos atributos da Carta 1: %.2f\n", resultado_final_c1);
            printf("Soma dos atributos da Carta 2: %.2f\n\n", resultado_final_c2);
        } else {
            printf("\n>>> Resultado Final: O JOGO EMPATOU! <<<\n\n");
            printf("Soma dos atributos da Carta 1: %.2f\n", resultado_final_c1);
            printf("Soma dos atributos da Carta 2: %.2f\n\n", resultado_final_c2);
        }
    }
}