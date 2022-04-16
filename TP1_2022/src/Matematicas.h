/*
 * Matematicas.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Ignacio
 */

#include <stdio.h>
#ifndef MATEMATICAS_H_
#define MATEMATICAS_H_

/// @fn float Suma(float, float)
/// @brief La función realiza una suma entre deos numero tipo float
///
/// @param Primer operado a sumar
/// @param Segundo perador a sumar
/// @return Retoran el resultado en tipo de dato float al main
float Suma (float, float);

/// @fn float Resta(float, float)
/// @brief La función realiza una resta entre deos numero tipo float
///
/// @param Primer operado a restar
/// @param Segundo operador que le resta al anterior
/// @return Retoran el resultado en tipo de dato float al main
float Resta (float, float);

/// @fn float Divicion(float, float, float*)
/// @brief Realiza una divicion entre dos numero, el resultado se pasa por puntero y se usa el retorno como validación
/// 		cuando el divisor es igual a 0.
///
/// @param El dividendo
/// @param El divisor
/// @param Puntero donde se guarda el resultado de la operación.
/// @return Retoran un -1 si el divisor es 0 de lo contrario retorna un 0
int Divicion (float, float, float*);

/// @fn float Multiplicacion(float, float)
/// @brief La función realiza una multipicación entre deos numero tipo float
///
/// @param Primer operador
/// @param Segunfo operador
/// @return Retoran el resultado en tipo de dato float al main
float Multiplicacion (float, float);

/// @fn float Factorial(float, int*, int)
/// @brief Calcula el factoriald el numero inrgezado, el resultado se apsa por puntero y el return se usa como verificaión
///			retorna -1 cuando el numero a facorial es negativo, mayor al limite o es igual a 0
///
/// @param EL numero a factoriar
/// @param El puntero donde se guarda el resultado
/// @param El limite que se le quiera dar como numero maximo a factoriar
/// @return retorna un int : -1 cuando el numero a facorial es negativo mayor al limite o es igual a 0
float Factorial (float, int*, int);

/// @fn int Porcentajefloat(float, float, float*)
/// @brief En monto se ingresa el nuemro del cual se quiere saber el porcentaje y en porcentaje se ingrea el mismo que se quiera calcular
///
/// @param monto
/// @param porcentaje
/// @param resulatdoPorcentaje
/// @return retorna 0 si fallo y 1 si esta salio bien.
int Porcentajefloat(float monto, float porcentaje,float* resulatdoPorcentaje);

/// @fn int ReglaDeTresSimple(float, float, float, float*)
/// @brief se ejecuta una regla de tres simple, el multiplicador el es el dato que que sequiere conocer que multiplica al dividendo el es divido por el divisor.
///
/// @param divisor
/// @param dividendo
/// @param multiplicador
/// @param resultadoDeRegla
/// @return retorna 0 si fallo y 1 si esta salio bien.
int ReglaDeTresSimple(float divisor, float dividendo, float multiplicador, float* resultadoDeRegla);

/// @fn int Diferencia(float, float, float*)
/// @brief Saca una difrencia dependiadno de cual numero sea mayor.
///
/// @param numeroUno
/// @param numeroDos
/// @param resultadoDiferencia
/// @return retorna 0 si fallo y 1 si esta salio bien.
int Diferencia(float numeroUno,float numeroDos,float* resultadoDiferencia);

#endif /* MATEMATICAS_H_ */
