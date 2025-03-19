#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    char c1_estado;
    char c1_cod_carta[3];
    char c1_cidade[20];
    int c1_população;
    float c1_area_km2;
    float c1_pib;
    int c1_no_ponto_turis;
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Seja muito bem vindo(a) ao jogo Super Trunfo!!!\n\n");

    printf("O que acha de cadastrarmos 2 (duas) cartas para começarmos?\n");
    printf("Então Vamos lá");

    printf("Insira abaixo as informações solicitadas para cada carta:");
    
    printf("Carta1:");
    printf("Insira uma letra de 'A' ou 'B' para representar o Estado:");
    scanf(" %s", &c1_estado);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
