#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    //Variáveis Carta 1
    char c1_estado, c1_cod_carta[4], c1_cidade[20]; //Função char são para caracteres, letras.
    int c1_populacao, c1_no_ponto_turis; //Função int são para números inteiros, 1, 2, 3...
    float c1_area_km2, c1_pib; //Função float são para números "quebrados", com pontos, 1.234, 56.789...

    //Variáveis Carta 2
    char c2_estado, c2_cod_carta[4], c2_cidade[20];
    int c2_populacao, c2_no_ponto_turis;
    float c2_area_km2, c2_pib;
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Seja muito bem vindo(a) ao jogo Super Trunfo!!!\n\n"); //Função printf serve para imprimir algo na tela, interação com o usuário, uma saída de dados.

    printf("O que acha de cadastrarmos 2 (duas) cartas para começarmos?\n\n");
    printf("Então vamos lá!\n");

    printf("Insira abaixo as informações solicitadas para cada carta:\n\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //###################  CARTA 1  #######################
    printf("Carta 1:\n\n");
    printf("Insira uma letra entre 'A' ou 'B' para representar o Estado:\n");
    scanf(" %c", &c1_estado);//Função scanf é para entrada de dados, ela recebe um informação advinda do teclado e armazena em variáveis.
    printf("Insira a letra do Estado seguida de um número (ex: A01, B01):\n");
    scanf(" %s", c1_cod_carta);
    printf("Escreva o nome da cidade:\n");
    scanf(" %[^\n]", c1_cidade);
    printf("Quantos habitantes a cidade tem?\n");
    scanf(" %d", &c1_populacao);
    printf("Qual a área em Km² da cidade?\n");
    scanf(" %f", &c1_area_km2);
    printf("Qual é o PIB da cidade? (bilhões)\n");
    scanf(" %f", &c1_pib);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf(" %d", &c1_no_ponto_turis);

    //###################  CARTA 2  #######################
    printf("Carta 2:\n");
    printf("Insira uma letra entre 'A' ou 'B' para representar o Estado:\n");
    scanf(" %c", &c2_estado);
    printf("Insira a letra do Estado seguida de um número (ex: A01, B01):\n");
    scanf(" %s", c2_cod_carta);
    printf("Escreva o nome da cidade:\n");
    scanf(" %[^\n]", c2_cidade); 
    // Atrvés de uma pesquisa, o nome que contém espaços, sem o [^\n] dá erro.
    // Cidades como São Paulo e Rio de Janeiro, dão um certo bug sem esse tipo.
    printf("Quantos habitantes a cidade tem?\n");
    scanf(" %d", &c2_populacao);
    printf("Qual a área em Km² da cidade?\n");
    scanf(" %f", &c2_area_km2);
    printf("Qual é o PIB da cidade? (bilhões)\n");
    scanf(" %f", &c2_pib);
    printf("Quantos pontos turísticos a cidade tem?\n");
    scanf(" %d", &c2_no_ponto_turis);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //################ INFORMAÇÕES CARTA 1 #################################
    printf("Aqui está todas as informações sobre a Carta 1 que você informou:\n\n");
    printf("Estado: %c\n", c1_estado);
    printf("Código: %s\n", c1_cod_carta);
    printf("Cidade: %s\n", c1_cidade);
    printf("População: %d habitantes\n", c1_populacao);
    printf("Área: %.2f Km²\n", c1_area_km2); 
    // %.2f foi uma pesquisa, pois o resultado dava muito estranho, número muito grande
    printf("PIB: R$ %.2f Bilhões de Reais\n", c1_pib); 
    // Serve para trabalhar com duas casas decimais, evitando um resultado estranho.
    printf("Quantidade de pontos turísticos: %d\n\n", c1_no_ponto_turis);

    //################ INFORMAÇÕES CARTA 2 #################################
    printf("Aqui está todas as informações sobre a Carta 2 que você informou:\n\n");
    printf("Estado: %c\n", c2_estado);
    printf("Código: %s\n", c2_cod_carta);
    printf("Cidade: %s\n", c2_cidade);
    printf("População: %d habitantes\n", c2_populacao);
    printf("Área: %.2f Km²\n", c2_area_km2); 
    printf("PIB: R$ %.2f Bilhões de Reais\n", c2_pib); 
    printf("Quantidade de pontos turísticos: %d\n", c2_no_ponto_turis);

    return 0;
}