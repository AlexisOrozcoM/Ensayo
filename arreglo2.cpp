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
	
	// sizeof ( < arreglo >) / sizeof ( < tipo >)
	int cuadrados[100] ;
	int size = sizeof ( cuadrados ) / sizeof ( int ) ;
		for ( int i =0; i < size ; i ++){
				cuadrados [ i ] = i * i ;
			}
	
	bool arregloBool [200] ;
	int sizeB = sizeof ( arregloBool ) / sizeof ( bool ) ;
		for ( int i =0; i < sizeB ; i ++){
			cout << arregloBool [ i ] << endl ;
}
	
	}


/*	
	* 
	*/ 
