/*
 * utn.h
 *
 *  Created on: 11 sep. 2020
 *      Author: Leo
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo);
/**
 * @brief utn_getInt(): Solicita un numero entero al usuario.
 * @param char* mensaje: Es el mensaje a ser mostrado al usuario.
 * @param char* mensajeError: Es el mensaje de error a ser mostrado al usuario.
 * @param int* pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @param int reintentos: Cantidad de oportunidades para ingresar el dato.
 * @param int maximo: Valor maximo admitido.
 * @param int minimo: Valor minimo admitido.
 * @return (-1) Error / (0) Ok
 */

int utn_getFloat(char* mensaje, char* mensajeError, float* pResultado,int reintentos,int maximo,int minimo);
/**
 * @brief utn_getFloat(): Solicita un numero flotante al usuario.
 * @param char* mensaje: Es el mensaje a ser mostrado al usuario.
 * @param char* mensajeError: Es el mensaje de error a ser mostrado al usuario.
 * @param int* pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @param int reintentos: Cantidad de oportunidades para ingresar el dato.
 * @param int maximo: Valor maximo admitido.
 * @param int minimo: Valor minimo admitido.
 * @return (-1) Error / (0) Ok
 */

int utn_getChar(char* mensaje, char* mensajeError, char* pResultado,int reintentos,int maximo,int minimo);
/**
 * @brief utn_getFloat(): Solicita un caracter char al usuario.
 * @param char* mensaje: Es el mensaje a ser mostrado al usuario.
 * @param char* mensajeError: Es el mensaje de error a ser mostrado al usuario.
 * @param char* pResultado: Puntero al espacio de memoria donde se dejara el valor obtenido.
 * @param int reintentos: Cantidad de oportunidades para ingresar el dato.
 * @param int maximo: Valor maximo admitido.
 * @param int minimo: Valor minimo admitido.
 * @return (-1) Error / (0) Ok
 */

#endif /* UTN_H_ */
