#include <iostream>
using namespace std;

int main() {
	//Ralize un programa que permita usar dos numeros
	//para realizar las 4 operaciones al mismo tiempo
	
	//Definir variables
	int numero1;
	int numero2;
	int suma, resta, multiplicar, dividir;
	
	//Entrada
	cout <<"Ingrese el primer numero: ";
	cin >>numero1;
	cout <<"Ingrese el segundo numero: ";
	cin >>numero2;
	
	//Proceso
	suma=numero1+numero2;
    resta=numero1-numero2;
	multiplicar=numero1*numero2;
	dividir=numero1/numero2;
	//Salida
        cout <<"la suma de dos numero es: " << suma << endl;
		cout <<"la resta de dos numeros es: " << resta << endl;
		cout <<"la multiplicacion de dos numero es: " << multiplicar <<endl;
		cout <<"la division de dos numeros es: " << dividir <<endl;
		return 0;
	}
