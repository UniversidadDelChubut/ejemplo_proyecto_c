#include <stdio.h>
#include <stdlib.h>

#include "modulo_ventas.h"
#include "modulo_informe.h"

int main(void)
{
  int opcion;

  do
  {
    printf("\nElija opcion (1-ventas, 2-informe, 0-salir): ");
    scanf("%d", &opcion);
    
    switch(opcion)
    {
      case 1:
      modulo_ventas();
      break;
      case 2:
      modulo_informe();
      break;
      case 0:
      break;
      default:
      printf("\nOpcion incorrecta...");
    }
  } while(opcion);
  
  printf("\n\nGracias por usar este humilde programa...");
  return 0;
}
