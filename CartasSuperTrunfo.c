#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

/*
EXEMPLOS DE CARTAS QUE PODEM SER USADAS NO CADASTRO:

CARTA 1:
-Estado: A
-Código: A01
-Nome da Cidade: Maceió
-População: 957916
-Área: 509.320 km²
-PIB: 27.480 bilhões de reais
-Número de Pontos Turísticos: 23

CARTA 2:
-Estado: B
-Código: B01
-Nome da Cidade: Xique-Xique
-População: 44757
-Área: 5079.662 km²
-PIB: 0.461 bilhões de reais
-Número de Pontos Turísticos: 5
*/

#include <stdio.h>

int main(){
    //VARIÁVEIS QUE SERÃO USADAS PARA ARMAZENAR OS DADOS DE CADA CARTA
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_cidade[36];
    int carta1_populacao;
    float carta1_area;
    float carta1_pib;
    int carta1_pontos_turisticos;

    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[36];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib;
    int carta2_pontos_turisticos;

    //OS DADOS DAS CARTAS SÃO COLETADOS VIA TECLADO E ARMAZENADOS EM VARIÁVEIS
    printf("-Digite uma letra entre A e H representando o estado da 1ª carta (Exemplo: A): \n");
    scanf(" %c", &carta1_estado);
    printf("-Digite o código representando a 1ª carta (Exemplo: A01): \n");
    scanf("%s", carta1_codigo);
    printf("-Digite o nome da cidade representando a 1ª carta (Exemplo: Maceió): \n");
    scanf("%s", carta1_cidade);
    printf("-Digite a quantidade de população da cidade representando a 1ª carta (Exemplo: 957916): \n");
    scanf("%d", &carta1_populacao);
    printf("-Digite a área (em km²) da cidade representando a 1ª carta (Exemplo: 509.320): \n");
    scanf("%f", &carta1_area);
    printf("-Digite o PIB (em bilhões) da cidade representando a 1ª carta (Exemplo: 27.480): \n");
    scanf("%f", &carta1_pib);
    printf("-Digite a quantidade de pontos turísticos da cidade representando a 1ª carta (Exemplo: 23): \n");
    scanf("%d", &carta1_pontos_turisticos);

    printf("\n-Digite uma letra entre A e H representando o estado da 2ª carta (Exemplo: B): \n");
    scanf(" %c", &carta2_estado);
    printf("-Digite o código representando a 2ª carta (Exemplo: B01): \n");
    scanf("%s", carta2_codigo);
    printf("-Digite o nome da cidade representando a 2ª carta (Exemplo: Xique-Xique): \n");
    scanf("%s", carta2_cidade);
    printf("-Digite a quantidade de população da cidade representando a 2ª carta (Exemplo: 44757): \n");
    scanf("%d", &carta2_populacao);
    printf("-Digite a área (em km²) da cidade representando a 2ª carta (Exemplo: 5079.662): \n");
    scanf("%f", &carta2_area);
    printf("-Digite o PIB (em bilhões) da cidade representando a 2ª carta (Exemplo: 0.461): \n");
    scanf("%f", &carta2_pib);
    printf("-Digite a quantidade de pontos turísticos da cidade representando a 2ª carta (Exemplo: 5): \n");
    scanf("%d", &carta2_pontos_turisticos);

    //A SEGUIR, OS DADOS COLETADOS ANTERIORMENTE SÃO EXIBIDOS:
    printf("\nDADOS DA CARTA 1:\n");
    printf("-Estado: %c\n", carta1_estado);
    printf("-Código: %s\n", carta1_codigo);
    printf("-Cidade: %s\n", carta1_cidade);
    printf("-População: %d habitantes\n", carta1_populacao);
    printf("-Área: %.1fkm²\n", carta1_area);
    printf("-PIB: R$%.1f bilhões\n", carta1_pib);
    printf("-Pontos Turísticos: %d\n", carta1_pontos_turisticos);

    printf("\nDADOS DA CARTA 2:\n");
    printf("-Estado: %c\n", carta2_estado);
    printf("-Código: %s\n", carta2_codigo);
    printf("-Cidade: %s\n", carta2_cidade);
    printf("-População: %d habitantes\n", carta2_populacao);
    printf("-Área: %.1fkm²\n", carta2_area);
    printf("-PIB: R$%.1f bilhões\n", carta2_pib);
    printf("-Pontos Turísticos: %d\n", carta2_pontos_turisticos);

    return 0;
}
