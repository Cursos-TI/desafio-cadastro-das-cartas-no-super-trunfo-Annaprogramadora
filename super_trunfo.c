#include <stdio.h>

int main(){

    char estado = "Mato Grosso";
    char código[50] = "A01";
    char nome_cidade[50] = "Cuiabá" ;
    int população = 650.877;
    float área_km² = 3.538;
    float PIB = 47700.88;
    int número_pontos_turísticos = 15;


    printf("Estado: %s\n", estado);


    printf("Código: %s\n", código);

    printf("Nome da cidade: %s\n", nome_cidade);
    

    printf("População: %.3f", população);
    
    printf("Área em km²: %.3f", área_km²);

    printf("PIB: %.2f", PIB);
    
    printf("Número de pontos turísticos: %d", número_pontos_turísticos);

    
}