#ifndef CIUDADANO_H_INCLUDED
#define CIUDADANO_H_INCLUDED

struct CiudadanoEstruc;

typedef struct CiudadanoEstruc * CiudadanoP;

CiudadanoP cargarciudadano();

void mostrarciudadano(CiudadanoP c);

#endif // CIUDADANO_H_INCLUDED
