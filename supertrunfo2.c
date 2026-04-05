#include <stdio.h>

int main() {

    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    int pib1;
    int pontos1;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    int pib2;
    int pontos2;

    int opcao;

    printf("Vamos inserir os dados da Carta1\n");
    printf("Defina uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);
    printf("Insira um codigo de 2 digitos junto com o codigo da carta com letra diferente da carta anterior, exemplo: A01: ");
    scanf("%3s", codigo1);
    printf("Insira o nome da cidade: ");
    scanf("%19s", cidade1);
    printf("Qual o total aproximado desta populacao? ");
    scanf("%i", &populacao1);
    printf("Qual a area total desta cidade? ");
    scanf("%f", &area1);
    printf("Qual o PIB total desta cidade? ");
    scanf("%i", &pib1);
    printf("Insira o valor de pontos desta carta: ");
    scanf("%i", &pontos1);

    printf("\nVamos inserir os dados da Carta2\n");
    printf("Defina uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);
    printf("Insira um codigo de 2 digitos junto com o codigo da carta, exemplo: A01: ");
    scanf("%3s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%19s", cidade2);
    printf("Qual o total aproximado desta populacao? ");
    scanf("%i", &populacao2);
    printf("Qual a area total desta cidade? ");
    scanf("%f", &area2);
    printf("Qual o PIB total desta cidade? ");
    scanf("%i", &pib2);
    printf("Insira o valor de pontos desta carta: ");
    scanf("%i", &pontos2);

    printf("\nOs dados da carta 1 sao:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %i\n", pib1);
    printf("Pontos: %i\n", pontos1);

    printf("\nOs dados da carta 2 sao:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %i\n", pib2);
    printf("Pontos: %i\n", pontos2);


printf("Escolha o que deseja comparar: \n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n"); 
printf("4 - Pontos\n");
printf("Digite a sua escolha: \n ");
scanf("%i", &opcao);

printf("----------------------------------\n"); 


switch (opcao) {
case 1:
if (populacao1 > populacao2)
{
  printf("A carta 1 venceu por populacao");
}
else if (populacao2 > populacao1)
{
  printf("A carta 2 venceu por populacao");
}
else
{
  printf("Empate");
}
  break;



case 2:
if (area1 > area2)
{
  printf("A carta 1 venceu por area");
}
else if (area2 > area1)
{
  printf("A carta 2 venceu por area");
}
else
{
  printf("Empate");
}
  break;


case 3:
if (pib1 > pib2)
{
  printf("A carta 1 venceu por PIB");
}
else if (pib2 > pib1)
{
  printf("A carta 2 venceu por PIB");
}
else
{
  printf("Empate");
}
  break;





 case 4:
if (pontos1 > pontos2)
{
  printf("A carta 1 venceu por pontos turísticos");
}
else if (pontos2 > pontos1)
{
  printf("A carta 2 venceu por pontos turísticos");
}
else
{
  printf("Empate");
}
  break;




}

    return 0;
}
