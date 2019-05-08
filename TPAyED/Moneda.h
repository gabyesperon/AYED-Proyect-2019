#ifndef __MONEDA_H__
#define __MONEDA_H__

#include <iostream>

#include "Posicion.h"

using namespace std;

typedef struct Mina{
    int posX;
    int posY;
  /*aca debe haber algo mas y no se q es*/
  
}Mina;


/* Tipo de estructura de Moneda */

typedef struct {
    Posicion posicion;
}Moneda;

/*    GETTERS AND SETTERS   */



/*
PRE:
Post: inicializa parametros de estacion
*/

void crearMoneda(Moneda &moneda);

/*
PRE: Moneda debe ser creada
Post: Moneda desaparece del mapa
*/

void eliminarMoneda(Moneda &moneda);

/*
PRE: Moneda debe ser creada
Post: Moneda no esta en el mapa
*/

int CrearMoneda(Moneda &moneda);



void CapturarMoneda(Moneda &moneda);
/*
PRE: crear Moneda 
Post: Moneda desaparece del mapa y se une al vagon
*/

int DesaparecerMoneda(Moneda &moneda);


#endif // __PARAMETROS_H__
