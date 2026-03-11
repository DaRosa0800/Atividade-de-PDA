#include <stdio.h>
 
int main (){
 
float salario, salario_total;
 
 
printf("Digite seu salario: ");
scanf("%f", &salario);
 
if ( salario <= 5000)
{
  printf("Nao houve cobranca de imposto: %f", salario_total);
}
else if ( salario <= 7500)
{
  salario_total = salario - (salario * 0.20);
  printf("Houve uma cobranca de impostos: %f", salario_total);
}
else if ( salario <= 15000)
{
  salario_total = salario - (salario * 0.40);
  printf("Houve cobranca de impostos: %f", salario_total);
}
else
{
  printf("Salario elevado, cobranca de impostos muito alta");
}
 
 
  return 0;
}