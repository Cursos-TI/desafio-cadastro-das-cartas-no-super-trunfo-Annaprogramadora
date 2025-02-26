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
       char nome1[20] = "Mato Grosso";    //nome do estado
       char codigo1[20] = "A01";          //código da cidade
       char nome_cidade1[20] = "Cuiabá";  //nome da cidade
       int populacao1 = 650877;      // Corrigido para não ter ponto
       float area_km1 = 3538.0;      // área em km² da cidade
       float PIB1 = 47700.88;        //PIB da cidade
       int numero_pontos_turisticos1 = 50;  //número de pontos turísticos da cidade
   
    // Cadastro das Cartas: 
     printf("Carta 01\n");

     printf("Estado: %s\n", nome1);

     printf("Código: %s\n", codigo1);

     printf("Nome da cidade: %s\n", nome_cidade1);

     printf("População: %d\n", populacao1); // Corrigido para %d

     printf("Área em km²: %.2f\n", area_km1);

     printf("PIB: %.2f\n", PIB1);

     printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);
     printf("\n");       //para pular linha entre a carta 1 e carta 2
    
       //Carta 2
       char nome2[20] = "Mato Grosso";    //nome do estado
       char codigo2[20] = "B02";          //código da cidade
       char nome_cidade2[20] = "Cáceres";  //nome da cidade
       int populacao2 = 91626;           // Corrigido para não ter ponto
       float area_km2 = 24499.922;      // área em km² da cidade
       float PIB2 = 438136155.50;        //PIB da cidade
       int numero_pontos_turisticos2 = 21;  //número de pontos turísticos da cidade

       //Cadrasto das cartas
       printf("Carta 02\n");

       printf("Estado: %s\n", nome2);
   
       printf("Código: %s\n", codigo2);
   
       printf("Nome da cidade: %s\n", nome_cidade2);
   
       printf("População: %d\n", populacao2); // Corrigido para %d
   
       printf("Área em km²: %.2f\n", area_km2);
   
       printf("PIB: %.2f\n", PIB2);
   
       printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
   

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
