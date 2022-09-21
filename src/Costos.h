/*
 * Costos.h
 *
 *  Created on: Sep 21, 2022
 *      Author: juliaburundarena
 */

#ifndef COSTOS_H_
#define COSTOS_H_

/// @brief  Imprime el menu de costos con los valores ingresados hasta el momento
/// @param costo1 float Costo de hospedaje
/// @param costo2 float Costo de comida
/// @param costo3 float Costo de transporte
void subMenuCostos(float costo1, float costo2, float costo3);

/// @brief Permite el ingreso del costo de hospedaje y lo acumula
/// @param pCosto float* Referencia donde colocar el costo de hospedaje
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int costoUno (float* pCosto);

/// @brief Permite el ingreso del costo de comida y lo acumula
/// @param pCosto float* Referencia donde colocar el costo de comida
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int costoDos (float* pCosto);

/// @brief Permite el ingreso del costo de transporte y lo acumula
/// @param pCosto float* Referencia donde colocar el costo de transporte
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int costoTres (float* pCosto);

/// @brief realiza la suma de los tres costos para calcular el costo total
/// @param costo1 float* referencia el costo de hospedaje
/// @param costo2 float* referencia el costo de comida
/// @param costo3 float* referencia el costo de transporte
/// @param suma float* referencia donde colocar el valor de la suma de los costos
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int costoMantenimiento(float* costo1, float* costo2, float* costo3, float* suma);

/// @fn int aumentoFunc(int*, int*, int*, int*, int*, int*, float*, float*, float*)
/// @brief
///
/// @param jugadoresUef int* Referencia la cantidad de jugadores en la UEFA
/// @param jugadoresConme int* Referencia la cantidad de jugadores en la Conmebol
/// @param jugadoresConca int* Referencia la cantidad de jugadores en la Concacaf
/// @param jugadoresAfc int* Referencia la cantidad de jugadores en la Afc
/// @param jugadoresOfc int* Referencia la cantidad de jugadores en la Ofc
/// @param jugadoresCaf int* Referencia la cantidad de jugadores en la Caf
/// @param suma float* referencia de donde tomar el valor de la suma de los costos
/// @param sumaConAumento float* referencia donde colocar el valor del total de costos con aumento
/// @param aumento float* referencia donce colocar el valor del aumento
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int aumentoFunc(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* suma, float* sumaConAumento, float* aumento);

/// @fn int promedio(int*, int*, int*, int*, int*, int*, float*, float*, float*, float*, float*, float*, int*)
/// @brief
///
/// @param jugadoresUef int* Referencia el valor de la cantidad de jugadores de la UEFA
/// @param jugadoresConme int* Referencia el valor de la cantidad de jugadores de la Conmebol
/// @param jugadoresConca int* Referencia el valor de la cantidad de jugadores de la Concacaf
/// @param jugadoresAfc int* Referencia el valor de la cantidad de jugadores de la Afc
/// @param jugadoresOfc int* Referencia el valor de la cantidad de jugadores de la Ofc
/// @param jugadoresCaf int* Referencia el valor de la cantidad de jugadores de la caf
/// @param promedioUef float* Referencia donde colocar el promedio de jugadores de UEFA
/// @param promedioConme float* Referencia donde colocar el promedio de jugadores de Conmebol
/// @param promedioConca float* Referencia donde colocar el promedio de jugadores de Concacaf
/// @param promedioAfc float* Referencia donde colocar el promedio de jugadores de Afc
/// @param promedioOfc float* Referencia donde colocar el promedio de jugadores de Ofc
/// @param promedioCaf float* Referencia donde colocar el promedio de jugadores de Caf
/// @param jugadores int* referencia al valor de la cantidad de jugadores ingresados
/// @return retorna 1 si las operaciones fueron exitosas, 0 en caso contrario
int promedio(int* jugadoresUef, int* jugadoresConme, int* jugadoresConca, int* jugadoresAfc, int* jugadoresOfc, int* jugadoresCaf, float* promedioUef, float* promedioConme, float* promedioConca, float* promedioAfc, float* promedioOfc, float* promedioCaf, int* jugadores);



#endif /* COSTOS_H_ */
