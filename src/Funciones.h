/*
 * Funciones.h
 *
 *  Created on: Sep 13, 2022
 *      Author: juliaburundarena
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


//documentar acá
int menuPrincipal(float costo1, float costo2, float costo3, int arqueros, int defensores, int mediocampistas, int delanteros);
void limpiarConsola();
void subMenuCostos(float costo1, float costo2, float costo3);
void subMenuJugadores(int arqueros, int defensores, int mediocampistas, int delanteros);
int costoUno (float* pCosto);
int costoDos (float* pCosto);
int costoTres (float* pCosto);
void subMenuConfederacion(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf);
int arquerosFunc(int* arqueros, int* camiseta);
int defensoresFunc(int* defensores, int* camiseta);
int mediocampistasFunc(int* mediocampistas, int* camiseta);
int delanterosFunc(int* delanteros, int* camiseta);
int costoMantenimiento(float* costo1, float* costo2, float* costo3, float* suma);
int aumentoFunc(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* suma, float* sumaConAumento, float* aumento);
int promedio(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* promedioUef, float* promedioConme, float* promedioConca, float* promedioAfc, float* promedioOfc, float* promedioCaf, int* jugadores);
void pausa();

#endif /* FUNCIONES_H_ */
