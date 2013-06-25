#include <stdio.h>
#include "funciones_comunes.h"
#include "modulo_informe.h"

void modulo_informe(void)
{
  int mes;
  
  pedir_mes(&mes);
  
  printf("\nEl total de ventas para el mes %d es: %.2f: ", mes, ventas[mes-1]);
}
