#include <stdio.h>

int main()
{
  float nota1, nota2, media = 0;
  printf("Informe a nota1: ");
  scanf("%f", &nota1);

  printf("Informe a nota2: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;
  printf("Nota 1: %.2f\nNota 2: %.2f \nMedia: %.2f", nota1, nota2, media);

  if (media > 7)
  {
    printf("Aprovado");
  }
  else if (media >= 5 && media < 7)
  {
    float rec = 0;
    float maiorNota = 0;
    printf("\nInforme a nota da rec: ");
    scanf("%f", &rec);

    if (nota1 > nota2)
    {
      maiorNota = nota1;
    }
    else
    {
      maiorNota = nota2;
    }
    media = (maiorNota + rec) / 2;
    printf("\nMedia com Rec: %.2f", &media);
    if (media > 7)
    {
      printf("\nAprovado");
    }
    else
    {
      printf("\nReprovado");
    }
  }
  else
  {
    printf("\nReprovado");
  }

  return 0;
}