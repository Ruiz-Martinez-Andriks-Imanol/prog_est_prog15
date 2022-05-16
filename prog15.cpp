/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 21/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de ciclos en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -for
    -Contador en el for
    -Comentarios para la documentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaración de variables
	float numero, suma=0;
	int cuantos;
	//Procesos
	printf("Cuantos numeros deseas leer: ");
	scanf("%d", &cuantos);
	//for(int i=1;i<=20;i=i+2)
	//for(int i=1;i<=20;i+=2)
	//for(int i=1;i<=20;i++)
	//for(int i=20;i>=1;i-=3)
//	for(int i=20;i>=1;i--)
	for(int i=1;i<=cuantos;i++){ //Ciclo for
	//	printf("Introduce un numero %d: ", i);
		printf("Introduce el valor numero %d: ", i);
		scanf("%f", &numero);
		//suma=suma+numero;
		suma+=numero;
	}
	//Salida
	printf("La suma es %.2f", suma);
	return 0;	
}
