/*
 * funcionesCalculadora.h
 *
 *  Created on: 11 sep. 2020
 *      Author: Leo
 */

#ifndef FUNCIONESCALCULADORA_H_
#define FUNCIONESCALCULADORA_H_

void menuCalculadora(void);
/**
 * @brief menuCalculadora(): Menu con opciones a elegir por el usuario.
 */

int sumar(float operadorA, float operadorB, float *pResultado);
/**
 * @brief sumar(): Realiza la suma de 2 operandos.
 * @param float operadorA: Se recibe el primer operando.
 * @param float operadorB: Se recibe el segundo operando.
 * @param float *pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @return (-1) Error / (0) Ok
 */

int restar(float operadorA, float operadorB, float *pResultado);
/**
 * @brief restar(): Realiza la resta de 2 operandos.
 * @param float operadorA: Se recibe el primer operando.
 * @param float operadorB: Se recibe el segundo operando.
 * @param float *pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @return (-1) Error / (0) Ok
 */

int multiplicar(float operadorA, float operadorB, float *pResultado);
/**
 * @brief multiplicar(): Realiza la multiplicacion de 2 operandos.
 * @param float operadorA: Se recibe el primer operando.
 * @param float operadorB: Se recibe el segundo operando.
 * @param float *pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @return (-1) Error / (0) Ok
 */

int dividir(float operadorA, float operadorB, float *pResultado);
/**
 * @brief dividir(): Realiza la division de 2 operandos.
 * @param float operadorA: Se recibe el primer operando.
 * @param float operadorB: Se recibe el segundo operando.
 * @param float *pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @return (-1) Error / (0) Ok
 */

int factorial(float operadorX, long* pResultado);
/**
 * @brief factorial(): Realiza el factorial de un numero que ingresa el usuario.
 * @param float operadorX: Se recibe el numero.
 * @param long *pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @return (-1) Error / (2) Si se ingreso el valor 1 o 0 / (0) Ok
 */

#endif /* FUNCIONESCALCULADORA_H_ */
