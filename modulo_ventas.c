#include <stdio.h>

#include "funciones_comunes.h"
#include "modulo_ventas.h"

float ventas[12] = {0};

void modulo_ventas(void)
{
  int mes;
  float monto;
  
  pedir_mes(&mes);
  validar_mes(mes);
  
  printf("\nIngresar monto vendido: ");
  scanf("%f", &monto);
  validar_venta(monto, MIN_VENTA, MAX_VENTA);
  
  ventas[mes-1] += monto;
  
  printf("\n Registro exitoso :D");
}

int validar_venta(float valor, float min, float max)
{
  return valor >= min && valor <= max;
}
