#include <stdio.h>
char Codigo_ascii[17];
int i;
 char volcado(  unsigned char Mi_Bufer, int bytes_volcado)
{
for (i = 0; i < bytes_volcado; ++i) {
        printf("%02X ", ((unsigned char*)&Mi_Bufer)[i]);
        if (((unsigned char*)&Mi_Bufer)[i] >= ' ' && ((unsigned char*)&Mi_Bufer)[i] <= '~')
         {
            Codigo_ascii[i % 16] = ((unsigned char*)&Mi_Bufer)[i];
        } else {
            Codigo_ascii[i % 16] = '.';
        }
        if ((i+1) % 8 == 0 || i+1==bytes_volcado) {
            printf(" ");
            if ((i+1) % 16 == 0) {
                printf(" |  %s \n", Codigo_ascii);
 
}}}
return 0;
}