/*
 * Funciones.h
 *
 *  Created on: Sep 13, 2022
 *      Author: juliaburundarena
 */

#ifndef JUGADORES_H_
#define JUGADORES_H_

/// @brief Imprime en pantalla el menu principal, mostrando los costos y jugadores cargados hasta el momento
/// @param costo1 float Costo de hospedaje
/// @param costo2 float Costo de comida
/// @param costo3 float Costo de transporte
/// @param arqueros int Cantidad de arqueros
/// @param defensores int Cantidad de defensores
/// @param mediocampistas int cantidad de mediocampistas
/// @param delanteros int cantidad de delanteros
void menuPrincipal(float costo1, float costo2, float costo3, int arqueros, int defensores, int mediocampistas, int delanteros);

/// @brief Imprime en pantalla espacios en blanco para crear un efecto de limpieza de consola
void limpiarConsola();

/// @brief Imprime en pantalla el menu de jugadores con los datos cargados hasta el momento
/// @param arqueros int Cantidad de arqueros
/// @param defensores int Cantidad de defensores
/// @param mediocampistas int cantidad de mediocampistas
/// @param delanteros int cantidad de delanteros
void subMenuJugadores(int arqueros, int defensores, int mediocampistas, int delanteros);

/// @brief Imprime en pantalla el menu por confederacion con los datos cargados hasta el momento, acumula la cantidad de jugadores ingresados por confederacion
/// @param jugadoresUef int* referencia donde colocar la cantidad de jugadores de la UEFA
/// @param jugadoresConme int* referencia donde colocar la cantidad de jugadores de la Conmebol
/// @param jugadoresConca int* referencia donde colocar la cantidad de jugadores de Concacaf
/// @param jugadoresAfc int* referencia donde colocar la cantidad de jugadores de Afc
/// @param jugadoresOfc int* referencia donde colocar la cantidad de jugadores de Ofc
/// @param jugadoresCaf int* referencia donde colocar la cantidad de jugadores de Caf
void subMenuConfederacion(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf);

/// @brief Permite el ingreso del numero de camiseta y acumula los arqueros ingresados
/// @param arqueros int* referencia donde colocar la cantidad de arqueros ingresados
/// @param camiseta int* referencia donde colocar el numero de camiseta ingresado
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int arquerosFunc(int* arqueros, int* camiseta);

/// @brief Permite el ingreso del numero de camiseta y acumula los defensores ingresados
/// @param defensores int* referencia donde colocar los defensores ingresados
/// @param camiseta int* referencia donde colocar el numero de camiseta ingresada
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int defensoresFunc(int* defensores, int* camiseta);

/// @brief Permite el ingreso del numero de camiseta y acumula los mediocampistas ingresados
/// @param mediocampistas int* referencia donde colocar los mediocampistas ingresados
/// @param camiseta int* referencia donde colocar el numero de camiseta ingresada
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int mediocampistasFunc(int* mediocampistas, int* camiseta);

/// @brief Permite el ingreso del numero de camiseta y acumula los delanteros ingresados
/// @param delanteros int* referencia donde colocar los delanteros ingresados
/// @param camiseta int* referencia donde colocar el numero de camiseta ingresada
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int delanterosFunc(int* delanteros, int* camiseta);

/// @brief pide que se ingrese enter para continuar el programa, sirve de pausa
void pausa();

#endif /* JUGADORES_H_ */
