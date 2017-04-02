/**
 * Descripcion: 
 * Autor: Javier Alexis Orozco Manzano
 * Código: 201663928
 * Fecha de creacion:  de Febrero de 2017 
 * Ultima fecha de modificacion: de Febrero de 2017 
 *
 */

#include <iostream>

using namespace std;

int main(){
	
	int arregloA[10][15][20];
	
	for(int i=0 ; i<sizeof(arregloA)/sizeof(arregloA [0]); i++){
		for(int j=0 ; j< sizeof(arregloA [0])/sizeof (arregloA [0][0]); j++){
			for (int k=0; k < sizeof(arregloA [0][0]) / sizeof (int) ;k++){
				arregloA [i][j][k] = i+j+k;
				}
			}
		
		}
	/*
	for (int i=0 ; i< sizeof(arregloA)/ sizeof(arregloA)[0] ; i++){
		for(int j=0; j<sizeof (arregloA[0]) / sizeof(arregloA [0][0]); j++){
			for (int k=0; k< sizeof(arregloA [0][0]) / sizeof (int) ;k++){
				cout << arrregloA [i][j][k] << " ";
				}
			}
			cout << endl;
		}
*/
	
	
	
	
	

	
	int arregloB[10] [12] [14] [22];
	
	
	for(int i=0 ; i<sizeof(arregloB)/sizeof(arregloB [0]); i++){
		for(int j=0 ; j< sizeof(arregloB [0])/sizeof (arregloB [0][0]); j++){
			for (int k=0; k< sizeof(arregloB [0][0]) / sizeof(arregloB [0][0][0]) ; k++){
				for (int l =0; l< sizeof(arregloB [0][0][0]) / sizeof (int) ; l++){
				arregloB [i][j][k][l] = i + j + k;
				}
			}
		}
	}

	/*
	int arregloC [11] [12] [12] [12] [12] [12] [12] [12] [23];

		for(int i=0 ; i<sizeof(arregloC)/sizeof(arregloC [0]); i++){
			for(int j=0 ; j< sizeof(arregloC [0])/sizeof (arregloC [0][0]); j++){
				for (int k=0; k< sizeof(arregloC [0][0]) / sizeof(arregloC [0][0][0]) ; k++){
					for (int l =0; l< sizeof(arregloC [0][0][0]) / sizeof (arregloC [0][0][0][0]) ; l++){
						for (int m =0; m< sizeof(arregloC [0][0][0][0]) / sizeof (arregloC [0][0][0][0][0]) ; m++){
				arregloB [i][j][k][l] = i + j + k;
				}
			}
		}
	}
	*/
	
	}
