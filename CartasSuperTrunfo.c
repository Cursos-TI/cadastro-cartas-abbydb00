//Nivel Novato

/* 
    //CADA CARTA DEVERÁ CONTER
    Estado: 8 Estados A - H
    Código da Carta: 4 Cidades Letra Estado + 01 - 04 (Ex.: A01) 
    Nome da Cidade: O nome da cidade. 
    População: O número de habitantes da cidade. 
    Área (em km²): A área da cidade em quilômetros quadrados. 
    PIB: O Produto Interno Bruto da cidade. 
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. 
*/

/*
    Para gerar uma interface que entregue a carta como quadrado se utilizou simobolos de iguais
    ao redor da "CARTA 1" e "CARTA 2" nas linhas verticais foram adicionais "|" no começo de cada
    scanf e para completar os caracteres com espaços vazios utiliza-se um truque de alinhamento
    disponivel na linguagem C adicionando ao final outro "|". Quando utiliza %s ou %d imprime  
    valor e para. Colocando números e sinais entre % e s/d ele define espaços fixos para forçar 
    o texto a ocupar. A interface conta com 40 caracteres na parte de "...====== CARTA 1 =====..."
    contando esse número podemos utilizar "| Estado: %-28c |\n" onde 28 é número de espaços que falta
    e o simbolos "-" é indicativo para ficar alinhado a esquerda e ocupar os outros espaços. Nomes
    População, e PIB podem conter alterações.
    Foram usadas as cidades Lajeado e Pelotas como primeiro exemplo.
    
*/

#include <stdio.h>

int main (){
    // Declarações de Variaveis
    // -- CARTA 1 -- 
    char estado1, cod_carta1[3], nome_cidade1[20];
    int populacao1, n_pontos1;
    float area1, pib1;
    // -- CARTA 2 --
    char estado2, cod_carta2[3], nome_cidade2[20];
    int populacao2, n_pontos2;
    float area2, pib2;

    //Organização Interface da Carta com sprintf
    char str_area1[40], str_pib1[40];
    char str_area2[40], str_pib2[40];


    // Entrada de Dados

    // -- CARTA 1 --
    // Orientações
    printf("\n==================== DESAFIO SUPERTRUNFO PAÍSES ====================\n");
    printf("\nPREENCHA TODOS OS DADOS DA CARTA 1\n");
    // Estado CARTA 1
    printf("\nDigite o Estado (Atribua ele um caracter entre A e H): ");
    scanf(" %c", &estado1);
    // Código CARTA 1
    printf("\nDigite o código da cidade (Atribua a cidade 2 digitos entre 01 e 04): ");
    scanf("%s", cod_carta1);
    // Nome da Cidade CARTA 1
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    // População CARTA 1
    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao1);
    // Area CARTA 1
    printf("\nDigite a área da cidade (em km²): ");
    scanf("%f", &area1);
    // PIB CARTA 1
    printf("\nDigite o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib1);
    // N Pontos Turisticos CARTA 1
    printf("\nDigite o número de pontos turistícos da cidade: ");
    scanf("%d", &n_pontos1);


    // -- CARTA 2 --
    // Orientações
    printf("\n========================================================================\n");
    printf("\nPREENCHA TODOS OS DADOS DA CARTA 2\n");
    // Estado CARTA 2
    printf("\nDigite o Estado (Atribua ele um caracter entre A e H): ");
    scanf(" %c", &estado2);
    // Código CARTA 2
    printf("\nDigite o código da cidade (Atribua a cidade 2 digitos entre 01 e 04): ");
    scanf("%s", cod_carta2);
    // Nome da Cidade CARTA 2
    printf("\nDigite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    // População CARTA 2
    printf("\nDigite a população da cidade: ");
    scanf("%d", &populacao2);
    // Area CARTA 2
    printf("\nDigite a área da cidade (em km²): ");
    scanf("%f", &area2);
    // PIB CARTA 2
    printf("\nDigite o PIB da cidade (em bilhões de R$): ");
    scanf("%f", &pib2);
    // N Pontos Turisticos CARTA 2
    printf("\nDigite o número de pontos turistícos da cidade: ");
    scanf("%d", &n_pontos2);

    // Organização Interface Carta dentro da frase com spritf
    /*
    O sprintf faz exatamente o que o printf faz, mas ele não
    joga nada na tela. Ele "imprime" o resultado dentro de uma variável 
    (neste caso, a str_area1). Ele pega o ex.: 100.00, gruda no km² e guarda o texto 
    "100.00 km²" na memória.
    */

    // Montando as frases da Carta 1
    sprintf(str_area1, "%.2f km²", area1);
    sprintf(str_pib1, "R$ %.2f bilhões", pib1);

    // Montando as frases da Carta 2
    sprintf(str_area2, "%.2f km²", area2);
    sprintf(str_pib2, "R$ %.2f bilhões", pib2);



    printf("\nCARTAS EM JOGO: ");

    // Saída de Dados
    // -- CARTA 1 --
    printf("\n============== CARTA 1 =================\n");
    printf("| Estado: %-28c |\n", estado1);
    printf("| Código: %c%-27s |\n", estado1, cod_carta1);
    printf("| Nome da cidade: %-20s |\n", nome_cidade1);
    printf("| População: %-25d |\n", populacao1);
    printf("| Área: %-31s |\n", str_area1); // Imprimindo a frase montada
    printf("| PIB: %-32s |\n", str_pib1);   // Imprimindo a frase montada
    printf("| Nº de Pontos Turísticos: %-11d |\n", n_pontos1);
    printf("========================================\n");

    // -- CARTA 2 --
    printf("\n============== CARTA 2 =================\n");
    printf("| Estado: %-28c |\n", estado2);
    printf("| Código: %c%-27s |\n", estado2, cod_carta2);
    printf("| Nome da cidade: %-20s |\n", nome_cidade2);
    printf("| População: %-25d |\n", populacao2);
    printf("| Área: %-31s |\n", str_area2); // Imprimindo a frase montada
    printf("| PIB: %-32s |\n", str_pib2);   // Imprimindo a frase montada
    printf("| Nº de Pontos Turísticos: %-11d |\n", n_pontos2);
    printf("========================================\n");

    return 0;
}