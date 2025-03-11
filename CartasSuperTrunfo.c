#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Carta 1 : Atributos
    int carta1;
       char nome1[20] = "Mato Grosso";    //nome do estado
       char codigo1[20] = "A01";          //código da cidade
       char nome_cidade1[20] = "Cuiabá";  //nome da cidade
       int populacao1 = 650877;    
       float area_km1 = 3538.0;      // área em km² da cidade
       float PIB1 = 47700.88;        //PIB da cidade
       int numero_pontos_turisticos1 = 50;  //número de pontos turísticos da cidade 
       float Densidade_Populacional1 = (populacao1 / area_km1);  // Calculo densidade e PIB per capita
       float PIB_perCapita1 = (PIB1 / populacao1);
       float SuperPoder1 = 545659704;    //soma da pop., área, PIB, PIB percapta, n° de pontos turíd. e...
                                               // ...densidade popu. invertida(q é ela dividida por 1).
      
    // Cadastro das Cartas: 
     printf("Carta 01\n");

     printf("Estado: %s\n", nome1);

     printf("Código: %s\n", codigo1);

     printf("Nome da cidade: %s\n", nome_cidade1);

     printf("População: %d\n", populacao1); // Corrigido para %d

     printf("Área em km²: %.2f\n", area_km1);

     printf("PIB: %.2f\n", PIB1);

     printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);

     printf("Densidade populacional: %.2f\n", Densidade_Populacional1);

     printf("PIB per Capita: %.2f\n", PIB_perCapita1);
     printf("\n");    //para pular linha entre a carta 1 e carta 2

    
       //Carta 2
       int carta2;
       char nome2[20] = "Mato Grosso";    //nome do estado
       char codigo2[20] = "B02";          //código da cidade
       char nome_cidade2[20] = "Cáceres";  //nome da cidade
       int populacao2 = 91626;           // Corrigido para não ter ponto
       float area_km2 = 24499.922;      // área em km² da cidade
       float PIB2 = 438136155.50;        //PIB da cidade
       int numero_pontos_turisticos2 = 21;  //número de pontos turísticos da cidade
       float Densidade_Populacional2 = (populacao2 / area_km2);  
       float PIB_perCapita2 = (PIB2 / populacao2);  // Calculo densidade e PIB per capita
       float SuperPoder2 = 4383868530174;

       //Cadrasto das cartas
       printf("Carta 02\n");

       printf("Estado: %s\n", nome2);
   
       printf("Código: %s\n", codigo2);
   
       printf("Nome da cidade: %s\n", nome_cidade2);
   
       printf("População: %d\n", populacao2); // Corrigido para %d
   
       printf("Área em km²: %.2f\n", area_km2);
   
       printf("PIB: %.2f\n", PIB2);
   
       printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);

       printf("Densidade populacional: %.2f\n", Densidade_Populacional2);

       printf("PIB per Capita: %.2f\n", PIB_perCapita2);

 printf("\n");  //pular linha

        printf("** Comparação de Cartas **");
        printf("\n");

        char nome [2][10] = {"Carta 1", "Carta 2"};  //variável auxiliar com nome da carta

           //Comparação dos atributos carta 1 e 2:
       int comparador_populacao = 0;   //controle de comparação
       int comparador_area = 0;
       int comparador_pib = 0;
       int comparador_numero = 0;
       int comparador_densidade = 0;
       int comparador_pibpercapita = 0;
       int comparador_super = 0;

       comparador_populacao = populacao1 > populacao2;
       comparador_area = area_km1 > area_km2;
       comparador_pib = PIB1 > PIB2;
       comparador_numero = numero_pontos_turisticos1 > numero_pontos_turisticos2;
       comparador_densidade = Densidade_Populacional1 > Densidade_Populacional2;
       comparador_pibpercapita = PIB_perCapita1 > PIB_perCapita2;
       comparador_super = SuperPoder1 > SuperPoder2;

       //Informação das cartas
      printf("População: %s venceu (%d)\n", nome[comparador_populacao], comparador_populacao);
      printf("Área: %s venceu (%d)\n", nome[comparador_area], comparador_area);
      printf("PIB: %s venceu (%d)\n", nome[comparador_pib], comparador_pib);
      printf("Número de pontos turísticos: %s venceu (%d)\n", nome[comparador_numero], comparador_numero);
      printf("Densidade populacional: %s venceu (%d)\n", nome[comparador_densidade], comparador_densidade);
      printf("PIB per capita: %s venceu (%d)\n", nome[comparador_pibpercapita], comparador_pibpercapita);
      printf("Super Poder: %s venceu (%d)\n", nome[comparador_super], comparador_super);

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
