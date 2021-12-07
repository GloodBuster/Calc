#Programa makefile para compilar el proyecto
Calc : Calc.c
	gcc Calc.c -o Calc -lm
#Limpiar	
clean:
	rm -f *.o Calc 
