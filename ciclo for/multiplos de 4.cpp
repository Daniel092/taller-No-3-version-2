
/*	Programa: numeros multiplos de 4 entre 64 y 4
	Fecha: 21 de agosto de 2018
	elaborado por: Daniel Steven Agudelo Fernandez
*/



#include <stdio.h>

//funcion principal
int main() {
	//variables declaradas 
	int num;
	//ciclo for para imprimir los multiplos del 4
		for(num = 64; num >= 4; num += -4){
			printf("\n %d", num);
		}
	
	
	
	
	return 0;
}

