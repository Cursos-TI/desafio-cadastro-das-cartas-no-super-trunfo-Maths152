#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
  //carta 1
  int populacao,pontos; //cadastro da pupulação e da quantidade de pontos turisticos a cidade possui.
  char codigo[10],cidade [50],estado [50]; // cadastro do código da carta, nome da cidade e nome do estado.
  float area, PIB; //cadastro da área em km² e do PIB.

 
  printf("Insira o estado: "); // solicitar para o usuário insira o estado
  scanf("%s", estado); // Usuário insere o estado
  
  printf("Insira o nome da cidade: "); // solicitar para o usuário insira o nome da cidade
  scanf("%s", cidade); //Usuario insere a cidade

  printf("Insira o código da carta: "); // solicitar para o usuário insira o codigo da carta
  scanf("%s", codigo); //Usuário insere o código da carta

  printf("Insira a quantidade de habitantes: "); // solicitar para o usuário insira a população da cidade
  scanf("%d", &populacao); //Usúario insere a população.

  printf("Insira a quantidade de pontos turisticos: "); // solicitar para o usuário insira a quantidade de pontos turísticos.
  scanf("%d", &pontos); //Usuário insere a quantidade de pontos turísticos.

  printf("Insira a area da cidade em km²: "); // solicitar para o usuário insira a área em km² que a cidade possui.
  scanf("%f", &area); //Usuário insere a área em km².

  printf("Insira o PIB: "); // solicitar para o usuário insira o PIB.
  scanf("%f", &PIB); //Usuário insere o PIB.

  int populacao1, pontos1; //cadastro da população e quantidades de pontos turísticos da segunda carta.
  char codigo1[10], estado1[50], cidade1[50]; //cadastro do código da segunda carta, cidade e estado.
  float area1, PIB1; //cadastro da area em km² e PIB da segunda carta.

  printf("\nInsira o estado da segunda carta: "); //solicitar para o usuário insira o estado.
  scanf("%s", estado1); //Usuário insere o estado.

  printf("Insira o nome da cidade da segunda carta: "); //solicitar para o usuário insira a cidade.
  scanf("%s", cidade1); //Usuário insere a cidade.

  printf("Insira o código da segunda carta: "); //solicitar para o usuário insira o código da segunda carta.
  scanf("%s", codigo1); //Usuário insere o codigo.

  printf("Insira a quantidade de habitantes da segunda carta: "); //solicitar para o usuário insira a população.
  scanf("%d", &populacao1); //Usuário insere a população.

  printf("Insira quantos pontos turísticos possui a segunda carta: "); //solicitar para o usuário insira a quantidade de pontos turísticos.
  scanf("%d", &pontos1); //Usuário insere a quantidade de pontos turísticos.

  printf("Insira a área em km² da segunda carta: "); //solicitar para o usuário insira a área em km².
  scanf("%f", &area1); //Usuário insere a área em km².

  printf("Insira o PIB da segunda carta: "); //solicitar para o usuário insira o PIB
  scanf("%f", &PIB1); //Usuário insere o PIB.

// Faz a leitura dos dados da carta 1.
  printf("\n Detalhes da carta 1 \n");
  printf("Estado: %s  \n", estado);
  printf("Cidade: %s \n", cidade);
  printf("Codigo: %s \n", codigo);
  printf("População: %d \n", populacao);
  printf("Pontos turísticos: %d \n", pontos);
  printf("A cidade possui %.0f km² \n", area);
  printf("PIB: %.0f \n", PIB);

// Faz a leitura dos dados da carta 2.
  printf("\n Detalhes da carta 2 \n");
  printf("Estado: %s \n", estado1);
  printf("Cidade: %s \n", cidade1);
  printf("Codigo: %s \n", codigo1);
  printf("População: %d \n", populacao1);
  printf("pontos turrísticos: %d \n",pontos1);
  printf("A cidade possui %.0f km² \n", area1);
  printf("PIB: %.0f \n", PIB1);

  
  
  
  
  
  
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
