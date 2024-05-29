#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio()
{
  int num = rand() % 100;
  return num;
}

int gerarVetorAleatorio(int posicoes, int vet[])
{
  for (int i = 0; i < posicoes; i++)
  {
    int numAleatorio = gerarNumeroAleatorio();
    vet[i] = numAleatorio;
  }
  return 0;
}

void mostrarVetor(int vet[], int tamanho)
{
  printf("[ ");
  for (int i = 0; i < tamanho; i++)
  {
    if (i == tamanho - 1)
    {
      printf("%d", vet[i]);
    }
    else
    {
      printf("%d, ", vet[i]);
    }
  }
  printf(" ]");
}

void quickSort(int vet[], int tamanhoDoVetor)
{
  if (tamanhoDoVetor < 2)
  {
    return;
  }
  else
  {
    int pivo = tamanhoDoVetor / 2;

    // Separa os itens menores que o pivo
    // Declaração de vetores
    int menoresQPivo[tamanhoDoVetor];
    int maioresQPivo[tamanhoDoVetor];
    // Declaração de contadores
    int contadorMenor = 0, contadorMaior = 0;

    for (int i = 0; i < tamanhoDoVetor; i++)
    {
      if (vet[i] < vet[pivo])
      {
        menoresQPivo[contadorMenor++] = vet[i];
      }
      else if (vet[i] > vet[pivo])
      {
        maioresQPivo[contadorMaior++] = vet[i];
      }
    }

    // Chama a função recursivamente
    quickSort(menoresQPivo, contadorMenor);
    quickSort(maioresQPivo, contadorMaior);

    // Adiciona elementos ordenados no vetor original
    int j = 0;
    for (int i = 0; i < contadorMenor; i++)
    {
      vet[j++] = menoresQPivo[i];
    }
    vet[j++] = vet[pivo];
    for (int i = 0; i < contadorMaior; i++)
    {
      vet[j++] = maioresQPivo[i];
    }
  }
}

int main(void)
{
  const int tamanho = 5;
  int vetor[tamanho];
  gerarVetorAleatorio(tamanho, vetor);

  printf("Vetor não ordenado:\n");
  mostrarVetor(vetor, tamanho);

  quickSort(vetor, tamanho);

  printf("\nVetor ordenado:\n");
  mostrarVetor(vetor, tamanho);

  return 0;
}
