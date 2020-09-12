/*
 * funcionesCalculadora.c
 *
 *  Created on: 11 sep. 2020
 *      Author: Leo
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "funcionesCalculadora.h"
#include "utn.h"

void menuCalculadora()
{
	int opcion;
	int respuesta;
	float operando1;
	float operando2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;
	long  resultadoFactorial1;
	long  resultadoFactorial2;

	do
	{
		respuesta = utn_getInt("\n***********************************\nTP1 - Calculadora\n\n1. Ingresar los 2 operandos.\n2. Calcular.\n3. Informar Resultados.\n4. Salir.\n\n~ Seleccione la opcion: ",
				"> Error! Seleccione la opciones del 1 al 4. <\n",&opcion,2,4,1);
		if(respuesta == 0)
		{
			switch(opcion)
			{
			case 1:
				if(utn_getFloat(". Ingrese el 1er operando: ","> Error! Ingrese nuevamente el valor <\n",&operando1,2,100,-100) == 0)
				{
					printf(". Dato cargado correctamente! (Valor ingresado: %.2f)\n",operando1);
					if(utn_getFloat(". Ingrese el 2do operando: ","> Error! Ingrese nuevamente el valor <\n",&operando2,2,100,-100) == 0)
					{
						printf(". Dato cargado correctamente! (Valor ingresado: %.2f)\n",operando2);
					}
					else
					{
						printf("> No se ha podido cargar los datos <\n");
					}
				}
				else
				{
					printf("> No se ha podido cargar los datos <\n");
				}
				break;
			case 2:
				if(sumar(operando1,operando2,&resultadoSuma) == 0)
				{
					printf("\n. (+) Suma realizada.\n");
				}
				else
				{
					printf("> Ocurrio un error al sumar <");
				}
				if(restar(operando1,operando2,&resultadoResta) == 0)
				{
					printf(". (-) Resta realizada.\n");
				}
				else
				{
					printf("> Ocurrio un error al restar <");
				}
				if(dividir(operando1,operando2,&resultadoDivision) == 0)
				{
					printf(". (/) Division realizada.\n");
				}
				else
				{
					printf("> Operacion no realizada <\n");
				}
				if(multiplicar(operando1,operando2,&resultadoMultiplicacion) == 0)
				{
					printf(". (*) Multiplicacion realizada.\n");
				}
				else
				{
					printf("> Ocurrio un error al multiplicar <");
				}
				if((factorial(operando1,&resultadoFactorial1)) == 0 || (factorial(operando1,&resultadoFactorial1) == 2))
				{
					printf(". (!) Factorial del 1er operando realizado.\n");
				}
				else
				{
					printf("> Operacion no realizada <\n");
				}
				if((factorial(operando2,&resultadoFactorial2) == 0) || (factorial(operando2,&resultadoFactorial2) == 2))
				{
					printf(". (!) Factorial del 2do operando realizado.\n");
				}
				else
				{
					printf("> Operacion no realizada <\n");
				}

				printf("\n~ Seleccione la opcion 3 para ver los resultados!\n");

				break;
			case 3:
				printf("~ Informe de Resultados:\n. Suma (%.2f + %.2f): %.2f\n. Resta (%.2f - %.2f): %.2f\n",
						operando1,
						operando2,
						resultadoSuma,
						operando1,
						operando2,
						resultadoResta);

				if(dividir(operando1,operando2,&resultadoDivision) == -1)
				{
					printf("> Division: No se puede dividir por cero! <\n");
				}
				else if(dividir(operando1,operando2,&resultadoDivision) == 0)
				{
					printf(". Division (%.2f / %.2f): %.2f\n",operando1,operando2,resultadoDivision);
				}

				printf(". Multiplicacion (%.2f * %.2f): %.2f\n",operando1,operando2,resultadoMultiplicacion);

				if(factorial(operando1,&resultadoFactorial1) == -1)
				{
					printf("> Factorial de 1er operando: No se puede realizar el factorial de un numero negativo! <\n");
				}
				else if(factorial(operando1,&resultadoFactorial1) == 0)
				{
					printf(". Factorial de 1er operando (%.2f): %ld\n",operando1,resultadoFactorial1);
				}
				else if(factorial(operando1,&resultadoFactorial1) == 2)
				{
					printf(". Factorial de 1er operando (%.2f): %ld\n",operando1,resultadoFactorial1);
				}
				if(factorial(operando2,&resultadoFactorial2) == -1)
				{
					printf("> Factorial de 2do operando: No se puede realizar el factorial de un numero negativo! <\n");
				}
				else if(factorial(operando2,&resultadoFactorial2) == 0)
				{
					printf(". Factorial de 2do operando (%.2f): %ld\n",operando2,resultadoFactorial2);
				}
				else if(factorial(operando2,&resultadoFactorial2) == 2)
				{
					printf(". Factorial de 2do operando (%.2f): %ld\n",operando2,resultadoFactorial2);
				}
				break;
			}
		}
	}while(opcion != 4);
}

int sumar(float operadorA,float operadorB, float* pResultado)
{
	int retorno = -1;
	*pResultado = operadorA + operadorB;
	retorno = 0;
	return retorno;
}

int restar(float operadorA,float operadorB, float* pResultado)
{
	int retorno = -1;
	*pResultado = operadorA - operadorB;
	retorno = 0;
	return retorno;
}

int dividir(float operadorA,float operadorB, float* pResultado)
{
	int retorno = -1;
	if (operadorB != 0) {
		*pResultado = operadorA / operadorB;
		retorno = 0;
	}
	return retorno;
}

int multiplicar(float operadorA,float operadorB, float* pResultado)
{
	int retorno = -1;
	*pResultado = operadorA * operadorB;
	retorno = 0;
	return retorno;
}

int factorial(float operadorX, long* pResultado)
{
	*pResultado = 1;
	int retorno = -1;
	int i;

	if (operadorX < 0)
	{
		retorno = -1;
	}
	else
	{
		//Algunas matematicos, "consideran" que 0! da como resultado 1
		if (operadorX == 0 || operadorX == 1)
		{
			*pResultado = 1;
			retorno = 2;
		}
		else
		{
			for (i = 1; i <= operadorX; i++)
			{
				*pResultado = *pResultado * i;
				retorno = 0;
			}
		}
	}
	return retorno;
}

