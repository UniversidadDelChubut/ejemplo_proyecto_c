#include <stdio.h>
#include <stdlib.h>

int validar_mes(int el_mes)
{
  return el_mes >= 1 && el_mes <= 12;
}

void pedir_mes(int *el_mes)
{
  int valido = 0;
  
  do
  {
    printf("\nIngrese mes [1-12]: ");
    scanf("%d", el_mes);
    valido = validar_mes(*el_mes);
    
    if(!valido)
      printf("Error, mes no valido");
      
  } while(!valido);
  
}
