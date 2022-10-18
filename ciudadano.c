#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ciudadano.h"
#include "vacunass.h"
#define TAM 5

struct CiudadanoEstruc{

   char nya[20];
   int nrociudadano;
   VacunasP vacunas[TAM];

};

CiudadanoP cargarciudadano(){

    CiudadanoP c = malloc(sizeof(struct CiudadanoEstruc));

    printf("\n- Ingrese el nombre y apellido del Ciudadano: ");
    gets(c->nya);
    c->nrociudadano=100000 + rand()%(1000000);

    for(int i=0;i<TAM;i++){


        c->vacunas[i]= cargarvacunas();

    }

return c;
};


void mostrarciudadano(CiudadanoP c){

    printf("\n- Nombre y apellido del ciudadano: %s",c->nya);
    printf("\n- Numero de ciudadno: %d",c->nrociudadano);

     for(int i=0;i<TAM;i++){

        mostrarvacunas(c->vacunas[i]);

    }

};
