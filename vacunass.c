#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ciudadano.h"
#include "vacunass.h"

struct VacunasEstruc{

    char nomvacuna[15];
    char lote[10];

};

VacunasP cargarvacunas(){

    VacunasP v= malloc(sizeof(struct VacunasEstruc));

    printf("\n    - Ingrese el nombre de la vacuna: ");
    gets(v->nomvacuna);

   int aleatorio;
   char caracteres[]="ae123iloub0cdv456pjkwqrc78dm9nxzgyfh";

   for(int i=0;i<10;i++){

      aleatorio= rand() %(strlen(caracteres));
      v->lote[i]=caracteres[aleatorio];

   }

   v->lote[10]='\0';

   return v;
};

void mostrarvacunas(VacunasP v){

    printf("\n   - Nombre de la vacuna: %s \n",v->nomvacuna);
    printf("\n   - Lote: %s \n",v->lote);

};



