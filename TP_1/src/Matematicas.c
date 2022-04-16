/*
 * Matematicas.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Ignacio
 */


/*
 * Math_TP.c
 *
 *
 *      Author: Nacho
 */

#include "Matematicas.h"

float Suma (float numeroUno, float numeroDos){

	float resultado;

	resultado=numeroUno+numeroDos;

	return resultado;
}

float Resta (float numeroUno, float numeroDos){

	float resultado;

	resultado=numeroUno-numeroDos;

	return resultado;

}

int Divicion (float numeroUno, float numeroDos, float* divicionResultado){

	float resultado;
	int retorno;

	if(numeroDos==0.000000)
	{
		retorno=-1;
		return retorno;
		printf("\n\tNo se pude divir por 0");
	}
	else
	{
		resultado=numeroUno/numeroDos;
		retorno=0;
	}
	*divicionResultado=resultado;

	return retorno;

}

float Multiplicacion (float numeroUno, float numeroDos){

	float resultado;

	resultado=numeroUno*numeroDos;

	return resultado;

}

float Factorial (float numero,int* factorNumero, int limite){

	int i;
	int resultado;
	int retorno;

	resultado=1;
	retorno=0;


	if((numero<0 || numero>limite) || numero==0)
	{
		retorno=-1;
		return retorno;
	}

		for(i=(int)numero;i>0;i--)
		{
			resultado= resultado * i;

		}
		*factorNumero=resultado;

	return 	retorno;
}

int Porcentajefloat(float monto, float porcentaje,float* resulatdoPorcentaje)
{
	int retorno;
	float nuermo;
	float resultado;
	float resultadoDiv;
	int retornoDiv;

	retorno=0;

	if(resulatdoPorcentaje!=NULL)
	{
		nuermo=monto;
		resultado=Multiplicacion(nuermo, porcentaje);
		retornoDiv=Divicion(resultado, 100,&resultadoDiv);
		if(retornoDiv==0)
		{
			*resulatdoPorcentaje=resultadoDiv;
			retorno=1;
		}
	}

	return retorno;
}

int ReglaDeTresSimple(float divisor, float dividendo, float multiplicador, float* resultadoDeRegla)
{
	int retorno;
	float resultado;
	float resultadoDiv;
	int retornoDiv;

	retorno=0;

	if(resultadoDeRegla!=NULL)
	{
		resultado=Multiplicacion(dividendo, multiplicador);
		retornoDiv=Divicion(resultado, divisor, &resultadoDiv);
		if(retornoDiv==0)
		{
			*resultadoDeRegla=resultadoDiv;
			retorno=1;
		}
	}

	return retorno;
}

int Diferencia(float numeroUno,float numeroDos,float* resultadoDiferencia)
{
	int retorno;
	float resultado;

	retorno=0;

	if(resultadoDiferencia!=NULL)
	{
		if(numeroUno>numeroDos)
		{
			resultado=Resta(numeroUno, numeroDos);
		}
		else
		{
			resultado=Resta(numeroDos, numeroUno);
		}
		*resultadoDiferencia=resultado;
		retorno=1;
	}

	return retorno;
}
