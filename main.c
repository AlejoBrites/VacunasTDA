#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ciudadano.h"
#include "vacunass.h"

int main()
{
    srand(time(NULL));

    CiudadanoP c1= cargarciudadano();
    mostrarciudadano(c1);

    return 0;
}
