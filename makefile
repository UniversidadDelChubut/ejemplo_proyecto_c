# makefile de ejemplo
principal:		main ventas informe
				gcc -o principal main.o modulo_ventas.o modulo_informe.o funciones_comunes.o

main:			main.c
				gcc -c main.c

ventas:		modulo_ventas.c modulo_ventas.h funciones
				gcc -c modulo_ventas.c -l funciones_comunes.o

informe:		modulo_informe.c modulo_informe.h funciones
				gcc -c modulo_informe.c -l funciones_comunes.o

funciones:		funciones_comunes.c funciones_comunes.h
				gcc -c funciones_comunes.c
clean:			
				rm -f principal *.o
