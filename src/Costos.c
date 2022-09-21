/*
 * Costos.c
 *
 *  Created on: Sep 21, 2022
 *      Author: juliaburundarena
 */


#include <stdio.h>
#include "Costos.h"

void subMenuCostos(float costo1, float costo2, float costo3)
{
	printf("1. Costo de hospedaje -> %.2f \n", costo1);


	printf("2. Costo de comida -> %.2f \n", costo2);


	printf("3. Costo de transporte -> %.2f \n", costo3);

	printf("4. Volver al menu \n");


}

int costoMantenimiento(float* costo1, float* costo2, float* costo3, float* suma)
{
	int todoOk = 0;

	if(costo1 != NULL && costo2 != NULL && costo3 != NULL && suma != NULL)
	{
		*suma = *costo1 + *costo2 + *costo3;
		todoOk = 1;
	}


	return todoOk;

}

int aumentoFunc(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* suma, float* sumaConAumento, float* aumento)
{
	int todoOk = 0;

	if(jugadoresUef != NULL && jugadoresConme != NULL && jugadoresConca != NULL && jugadoresAfc != NULL && jugadoresOfc != NULL && jugadoresCaf)
	{
		if(*jugadoresUef > *jugadoresConme && *jugadoresUef > *jugadoresConca)
		{
			if(*jugadoresUef > *jugadoresAfc && *jugadoresUef > *jugadoresOfc && *jugadoresUef > *jugadoresCaf)
			{
				*aumento = *suma * 0.35;
				*sumaConAumento = *suma + *suma * 0.35;

				todoOk = 1;
			}
		}

	}

	return todoOk;
}

int promedio(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* promedioUef, float* promedioConme, float* promedioConca, float* promedioAfc, float* promedioOfc, float* promedioCaf, int* jugadores)
{

	int todoOk = 0;

	if(jugadoresUef != NULL && jugadoresConme != NULL && jugadoresConca != NULL && jugadoresAfc != NULL && jugadoresOfc != NULL && jugadoresCaf)
	{
		if(promedioUef != NULL && promedioConme != NULL && promedioConca != NULL && promedioAfc != NULL && promedioOfc && promedioCaf && jugadores != NULL && *jugadores != 0)
		{
			*promedioUef = (float) *jugadoresUef / *jugadores;
			*promedioConme = (float) *jugadoresConme / *jugadores;
			*promedioConca = (float) *jugadoresConca / *jugadores;
			*promedioAfc = (float) *jugadoresAfc / *jugadores;
			*promedioOfc = (float) *jugadoresOfc / *jugadores;
			*promedioCaf = (float) *jugadoresCaf / *jugadores;

			todoOk = 1;
		}
	}

	return todoOk;

}

int costoUno (float* pCosto)
{
	int todoOk = 0;
	float costo;

	if(pCosto != NULL)
	{
		printf("Ingresar costo de hospedaje: ");
		scanf("%f", &costo);
		*pCosto += costo;
		todoOk = 1;
	}

	return todoOk;
}

int costoDos (float* pCosto)
{
	int todoOk = 0;
	float costo;

	if(pCosto != NULL)
	{
		printf("Ingresar costo de comida: ");
		scanf("%f", &costo);
		*pCosto += costo;
		todoOk = 1;
	}

	return todoOk;
}

int costoTres (float* pCosto)
{
	int todoOk = 0;
	float costo;

	if(pCosto != NULL)
	{
		printf("Ingresar costo de transporte: ");
		scanf("%f", &costo);
		*pCosto += costo;
		todoOk = 1;
	}

	return todoOk;
}
