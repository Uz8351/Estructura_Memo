#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "volcado.h"
int main()
{
	struct Mis_Datos
{
  int espacio1;
  int espacio2;
  char espacio3 [46];
};

struct Mis_Datos k;
struct Mis_Datos *puntero;

puntero = &k;
//(*puntero).espacio1 = 46;
strcpy ( (*puntero).espacio3, "VITAN REGIT FORTUNA, NON SAPIENTIA." );
printf("************************************\n");
printf("%s\n",(*puntero).espacio3 );
printf("************************************\n");
for (int i = 0; i < 34; ++i)
{
	printf("[Direccion:]%p [%c]\n",&(puntero->espacio3[i]),(*puntero).espacio3[i]);
}

printf("--------------------------------------------------------------------\n");

volcado((puntero->espacio3[i]),128);

}