#include <stdio.h>

int main(void)
{
  float salario = 3000;

  float salarioComReajuste = salario * 1.05;
  float beneficioComReajuste = 28 * 30;
  float valorTotal = salarioComReajuste + beneficioComReajuste;
  float valorPagoPorHr = (valorTotal / 20) / 4;

  printf("\nSeu novo salario e de R$%.2f", salarioComReajuste);
  printf("\nSeu novo beneficio e de R$%.2f", beneficioComReajuste);
  printf("\nSeu valor total e de R$%.2f", valorTotal);
  printf("\nSeu valor pago por hora e de R$%.2f", valorPagoPorHr);

  return 0;
}