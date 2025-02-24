#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        //Carta 1
    char estado1[50] = "Mato Grosso";    //Nome do estado
    char código1[50] = "A01";   //Código da cidade
    char nome_cidade1[50] = "Cuiabá" ;
    float população1 = 650.877;  //População da cidade
    float área_km²1 = 3.538;    //Área em km² da cidade
    float PIB1 = 47700.88;      //PIB da cidade
    int número_pontos_turísticos1 = 15;   //Número de pontos turísticos da cidade

    // Cadastro das Cartas:
    printf("Insira a inicial do estado: ");
    scanf("%c", estado1);
    printf("A inicial é: %c\n", estado1);

    printf("Insira o código da cidade:" );
    scanf("%s", código1);
    printf("O código da cidade é: %s", código1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("O nome da cidade é: %s", nome_cidade1);

    printf("Insira a população da cidade: ");
    scanf("%.3f", população1);
    printf("A populaçaão da cidade é: %.3f", população1);
    
    printf("Insira a área da cidade em km²: ");
    scanf("%.3f", área_km²1);
    printf("A área da cidade em km² é: %.3f", área_km²1);

    printf("Insira o PIB da cidade: ");
    scanf("%.2f", PIB1);
    printf("O PIB da cidade é: %.2f", PIB1);
    
    printf("insira o número de pontos turísticos existentes na cidade: ");
    scanf("%d", número_pontos_turísticos1);
    printf("O número de pontos turísticos é: %d", número_pontos_turísticos1);


    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
