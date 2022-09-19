/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"



int main(void) {
	setbuf(stdout, NULL);


	int jugadores = 0;
	float costo1 = 0;
	float costo2 = 0;
	float costo3 = 0;
	float suma = 0;
	float sumaConAumento = 0;
	float aumento = 0;
	int arqueros = 0;
	int defensores = 0;
	int mediocampistas = 0;
	int delanteros = 0;
	int opcion;
	int jugadoresUef = 0;
	int jugadoresConme = 0;
	int jugadoresConca = 0;
	int jugadoresAfc = 0;
	int jugadoresOfc = 0;
	int jugadoresCaf = 0;
	float promedioUef;
	float promedioConme;
	float promedioConca;
	float promedioAfc;
	float promedioOfc;
	float promedioCaf;
	int camiseta;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;


	do
	{
		switch(menuPrincipal(costo1, costo2, costo3, arqueros, defensores, mediocampistas, delanteros))
		{
			case 1:
				do
				{
					limpiarConsola();

					subMenuCostos(costo1, costo2, costo3);

					scanf("%d", &opcion);

					switch(opcion)
					{
						case 1:
							if(costoUno(&costo1))
							{
								printf("Se tomaron los datos correctamente.");
							}
							else
							{
								printf("Error\n");
							}
							pausa();
							break;
						case 2:
							if(costoDos(&costo2))
							{
								printf("Se tomaron los datos correctamente.");
							}
							else
							{
								printf("Error\n");
							}
							pausa();
							break;
						case 3:
							if(costoTres(&costo3))
							{
								printf("Se tomaron los datos correctamente.");
							}
							else
							{
								printf("Error\n");
							}
							pausa();
							break;
						case 4:
							break;

					}

					flag1 = 1;

				}while(opcion != 4);

				pausa();
				break;
			case 2:
				//if jugasdores < 2
				do {
					limpiarConsola();

					subMenuJugadores(arqueros, defensores, mediocampistas, delanteros);

					scanf("%d", &opcion);

					switch(opcion)
					{
						case 1:

							if(arqueros <= 2)
							{
								subMenuConfederacion(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf);
								arquerosFunc(&arqueros, &camiseta);
							}
							pausa();
							break;
						case 2:
							if(defensores <= 8)
							{
								subMenuConfederacion(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf);
								defensoresFunc(&defensores, &camiseta);
							}
							pausa();
							break;
						case 3:
							if(mediocampistas <= 8)
							{
								subMenuConfederacion(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf);
								mediocampistasFunc(&mediocampistas, &camiseta);
							}
							pausa();
							break;
						case 4:
							if(delanteros <= 4)
							{
								subMenuConfederacion(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf);
								delanterosFunc(&delanteros, &camiseta);
							}
							pausa();
							break;
						case 5:
							printf("\n Volviendo al menu principal\n");
	//------------------	NOOO VUELVEEEEEEE------------------------------------------------
							break;
					};

					if(opcion > 0 && opcion < 5)
					{
						jugadores++;
					}

				}while(opcion != 5 );

				pausa();

				flag2 = 1;

				break;

			case 3:
				if(jugadores == 22)
				{
					if(flag1 && flag2)
					{
						promedio(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf, &promedioUef, &promedioConme, &promedioConca, &promedioAfc, &promedioOfc, &promedioCaf, &jugadores);

						costoMantenimiento(&costo1, &costo2, &costo3, &suma);

						aumentoFunc(&jugadoresUef, &jugadoresConme, &jugadoresConca, &jugadoresAfc, &jugadoresOfc, &jugadoresCaf, &suma, &sumaConAumento, &aumento);

						pausa();

						flag3 = 1;

					}
					else
					{
						printf("Ingrese los datos requeridos primero \n\n");
					}
				}
				else
				{
					printf("Termine de ingresar los 22 jugadores");
				}


				break;

			case 4:
				if(flag3)
				{
					printf("      Resultados\n  "
						"Promedio Uefa %.2f \n"
						"Promedio Conmebol %.2f \n"
						"Promedio Concacaf %.2f \n"
						"Promedio Afc %.2f \n"
						"Promedio Ofc %.2f \n"
						"Promedio Caf %.2f \n"
						"El costo de mantenimiento era de %.2f",promedioUef, promedioConme, promedioConca, promedioAfc, promedioOfc, promedioCaf, suma);
					if(aumento)
					{
						printf(" y recibió un aumento de  %.2f, su nuevo valor es de: %.2f .", aumento, sumaConAumento);
					}
					pausa();
				}
				else
				{
					printf("Seleccione la tercer opcion primero. \n\n");
				}

				break;
			case 5:
				printf("\n Saliendo del menu\n");
				break;
		}







	}while(opcion != 5);


// dividir funciones en dos bibliotecas: costos y jugadores

	return 0;
}


