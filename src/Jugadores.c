/*
 * Funciones.c
 *
 *  Created on: Sep 13, 2022
 *      Author: juliaburundarena
 */
#include <stdio.h>
#include "Jugadores.h"



void limpiarConsola()
{
	for(int i = 0; i < 51; i++)
	{
		printf("\n");
	}

}

void menuPrincipal(float costo1, float costo2, float costo3, int arqueros, int defensores, int mediocampistas, int delanteros)
	{

		printf("1. Ingreso de costos de mantenimiento\n"
				"Costo de Hospedaje -> $%.2f\n"
				"Costo de Comida -> $%.2f\n"
				"Costo de transporte -> $%.2f\n"
				"2. Carga de jugadores\n"
				"Arqueros -> %d\n"
				"Defensores -> %d\n"
				"Mediocampistas -> %d\n"
				"Delanteros -> %d\n"
				"3. Realizar todos los calculos\n"
				"4. Informar todos los resultados\n"
				"5.Salir", costo1, costo2, costo3, arqueros, defensores, mediocampistas, delanteros);


	}



void subMenuJugadores(int arqueros, int defensores, int mediocampistas, int delanteros)
{

	printf("      Menu jugadores\n"
			"1. Arqueros -> %d\n"
			"2. Defensores - %d\n"
			"3. Mediocampistas -> %d\n"
			"4. Delanteros -> %d\n"
			"5. Volver al menu principal", arqueros, defensores, mediocampistas, delanteros);

}


void subMenuConfederacion(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf)
{
	printf("    Menu Confederaciones\n"
			"1. Uefa -> %d\n"
			"2. Conmebol -> %d\n"
			"3. Concacaf -> %d\n"
			"4. Afc -> %d\n"
			"5. Ofc -> %d\n"
			"6. Caf -> %d\n", *jugadoresUef, *jugadoresConme, *jugadoresConca, *jugadoresAfc, *jugadoresOfc, *jugadoresCaf);


	int confederacion;

	scanf("%d", &confederacion);

			switch(confederacion)
			{
				case 1: if(jugadoresUef != NULL)
						{
							*jugadoresUef = *jugadoresUef + 1;
						}
				break;
				case 2: if(jugadoresConme != NULL)
						{
							*jugadoresConme = *jugadoresConme + 1;
						}
					break;
				case 3: if(jugadoresConca != NULL)
						{
							*jugadoresConca = *jugadoresConca + 1;
						}
					break;
				case 4: if(jugadoresAfc != NULL)
						{
							*jugadoresAfc = *jugadoresAfc + 1;
						}
					break;
				case 5: if(jugadoresOfc != NULL)
						{
							*jugadoresOfc = *jugadoresOfc + 1;
						}
					break;
				case 6: if(jugadoresCaf != NULL)
						{
							*jugadoresCaf = *jugadoresCaf + 1;
						}
					break;
			}
}



int arquerosFunc(int* arqueros, int* camiseta)
{
	int todoOk = 0;

	limpiarConsola();

	printf("Ingrese numero de camiseta: \n");
	scanf("%d", camiseta);

	if(arqueros != NULL)
	{

		*arqueros = *arqueros + 1;
		todoOk = 1;
	}


	return todoOk;

}

int defensoresFunc(int* defensores, int* camiseta)
{
	int todoOk = 0;

	limpiarConsola();

	printf("Ingrese numero de camiseta: \n");
	scanf("%d", camiseta);

	if(defensores != NULL)
	{

		*defensores = *defensores + 1;
		todoOk = 1;
	}


	return todoOk;

}

int mediocampistasFunc(int* mediocampistas, int* camiseta)
{
	int todoOk = 0;

	limpiarConsola();

	printf("Ingrese numero de camiseta: \n");
	scanf("%d", camiseta);

	if(mediocampistas != NULL)
	{

		*mediocampistas = *mediocampistas + 1;
		todoOk = 1;
	}


	return todoOk;

}

int delanterosFunc(int* delanteros, int* camiseta)
{
	int todoOk = 0;

	limpiarConsola();

	printf("Ingrese numero de camiseta: \n");
	scanf("%d", camiseta);

	if(delanteros != NULL)
	{

		*delanteros = *delanteros + 1;
		todoOk = 1;
	}


	return todoOk;

}

void pausa()
{
	char enter;

	printf("Presione Enter para continuar...");
	fpurge(stdin);
	scanf("%c", &enter);
}
