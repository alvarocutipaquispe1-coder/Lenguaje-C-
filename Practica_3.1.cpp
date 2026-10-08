#include <stdio.h>
using namespace std;

int main() {
	
	//Ralize un programa que permita usar dos numeros
	//para realizar las 4 operaciones al mismo tiempo
	
	//Definir variables
	int numero1;
	int numero2;
	int suma, resta, multiplicar, dividir;
	
	//Entrada 
	printf ("Ingrese el primer numero: ");
	scanf("%d", &numero1);
	printf ("Ingrese el segundo numero: ");
	scanf("%d", &numero2);
	//Proceso
	suma=numero1+numero2;
	resta=numero1-numero2;
	multiplicar=numero1*numero2;
	dividir=numero1/numero2;
	//Salida
	printf("La suma de dos numeros es: %d\n" , suma);
	printf("La resta de dos numeros es: %d\n" , resta);
	printf("La multiplicacion de dos numeros es: %d\n" , multiplicar);
	printf("La division de dos numeros es: %d\n" , dividir);
	
	return 0;
		
}
