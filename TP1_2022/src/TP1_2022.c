/*
 ============================================================================
 Name        : TP1_2022.c
 Author      : Garrido Ignacio
 Version     :
 Copyright   : 
 Description : TP1
 ============================================================================
 */

#include "Obtener.h"



int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	float kilomtros;
	float aerolinasPrecio;
	float latamPrecio;
	float descuentoAerolinas;
	float descuantoLatam;
	float interesAerolinas;
	float interesLatam;
	float bitcoinAerolinas;
	float bitcoinLatam;
	float precioPorKmAerolinas;
	float precioPorKmLatam;
	float diferencia;
	int opcionAntes;
	int opcionAntesUno;
	int opcionAntesDos;

				//system("clear");

	do{


		if(opcionAntesUno==1 && opcionAntesDos==2)
		{
			opcion=3;
		}
		else
		{
			printf("\n\t\t\t\t----------------------------------------------------------------------------------");
						printf("\n \t\t\t\t|\t       Bienvenido!!                                                      |"
							   "\n \t\t\t\t|\t                                                                         |");
						printf("\n \t\t\t\t|\t1. Ingresar Kilómetros.                                                  |");
						printf("\n \t\t\t\t|\t2. Ingresar Precio de Vuelos.                                            |");
						printf("\n \t\t\t\t|\t3. Calcular todos los costos.                                            |"); // Esta la opción 3 de cacular porque en al consigna dice "El menú se tiene que ver tal cual está descrito en la consigna"
						printf("\n \t\t\t\t|\t4. Informar Resultados.                                                  |"); // Esta la opción 4 de Informar resultados porque en al consigna dice "El menú se tiene que ver tal cual está descrito en la consigna
						printf("\n \t\t\t\t|\t5. Carga forzada de datos.                                               |"); // Esta la opción 5 de carga forzada porque en al consigna dice "El menú se tiene que ver tal cual está descrito en la consigna"
						printf("\n \t\t\t\t|\t6. Salir.                                                                |");
						printf("\n\t\t\t\t----------------------------------------------------------------------------------\n");


			ObtenerIntConLimite(&opcion, "\n\nIngrese una Opcion de 1-6: ", "\n\t\tError Opcion no valida!", 1, 6, 3);
		}
		if(opcionAntesUno==1 && opcionAntesDos==2 && opcionAntes==3)
		{
			opcion=5;
		}

		switch(opcion)
		{
			case 1:
				opcionAntesUno=opcion;
				ObtenerFloatConLimite(&kilomtros, "\t Ingrese los Km por favor:  ", "\t\tERROR-Km NO validos", 2.7, 200000, 3); //PEDIR DATOS AL USUARIO
			break;
			case 2:
				opcionAntesDos=opcion;
				printf("\n \t\t Ingresar Precio de Vuelos");
				ObtenerFloatConLimite(&aerolinasPrecio,"Precio vuelo Aerolíneas: ", "\t\tERROR-Precio NO valido", 8000, 1500000, 3); //PEDIR DATOS AL USUARIO
				ObtenerFloatConLimite(&latamPrecio,"Precio vuelo Latam: ", "\t\tERROR-Precio NO valido", 8000, 1500000, 3);

			break;
			case 3:

				if(opcionAntesUno==1 && opcionAntesDos==2)
				{
					opcionAntes=opcion;
					printf("\n\tProcesando......");
					Porcentajefloat(aerolinasPrecio, 10,&descuentoAerolinas);  //DESCUENTO
					Porcentajefloat(latamPrecio, 10,&descuantoLatam);
					descuentoAerolinas=Resta(aerolinasPrecio, descuentoAerolinas);
					descuantoLatam=Resta(latamPrecio, descuantoLatam);


					Porcentajefloat(aerolinasPrecio, 25,&interesAerolinas); //INTERES
					Porcentajefloat(latamPrecio, 25,&interesLatam);
					interesAerolinas=Suma(aerolinasPrecio, interesAerolinas);
					interesLatam=Suma(latamPrecio, interesLatam);


					ReglaDeTresSimple(4606954.55, 1, aerolinasPrecio,&bitcoinAerolinas); //Bitcoin
					ReglaDeTresSimple(4606954.55, 1, latamPrecio,&bitcoinLatam);


					ReglaDeTresSimple(kilomtros, aerolinasPrecio, 1,&precioPorKmAerolinas); //PRECIO POR KM
					ReglaDeTresSimple(kilomtros, latamPrecio, 1,&precioPorKmLatam);


					Diferencia(aerolinasPrecio,latamPrecio,&diferencia); //DIFERENCIA
					printf("\n\tListo......");
					opcion=5;
				}
				else
				{
					printf("\nNo se ingresaron suficientes Datos. Asegurese de ingresar los km y los precios.\n");
				}
			break;
			case 4:
				if(opcionAntes==3)
				{
					printf("\nKm Ingresados: %.2f",kilomtros);
					printf("\nAerolines:");
					ImprimirResultados(descuentoAerolinas, interesAerolinas, bitcoinAerolinas, precioPorKmAerolinas); 	//IMPRIMIR
					printf("\nLatam:");
					ImprimirResultados(descuantoLatam, interesLatam, bitcoinLatam, precioPorKmLatam);
					printf("\nDiferencia: %.2f",diferencia);
				}
			break;
			case 5:
				if(opcionAntes==3)
				{
					printf("\nAerolines:");
					ImprimirResultados(descuentoAerolinas, interesAerolinas, bitcoinAerolinas, precioPorKmAerolinas); 	//IMPRIMIR
					printf("\nLatam:");
					ImprimirResultados(descuantoLatam, interesLatam, bitcoinLatam, precioPorKmLatam);
					printf("\nDiferencia: %.2f",diferencia);
					opcionAntesUno=0;
					opcionAntesDos=0;
				}

			break;
			case 6:
				printf("\nGracias vuelva prontos!");
			break;
			default:
				printf("\nIntentalo nuevamente.");
			break;
		}
	}while(opcion!=6);

	return EXIT_SUCCESS;
}

