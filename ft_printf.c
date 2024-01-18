#include "ft_printf.h"

void ft_printf(int i, ...)
{
    va_list argptr; // esta linea declara la lista de parametros
    va_start(argptr, i); // esta linea empieza el bucle sobre la lista de parametros (sin saber el numero de parametros)

   if ( i == 0 ) {
      int n = va_arg( argptr, int ); // esto es para recuperar el valor de cada parametro segun su tipo
      printf( "%d\n", n );
   } else {
      char *s = va_arg( argptr, char* );
      printf( "%s\n", s);
   }
}


int main(void)
{
    ft_printf("%d",42);
    printf("%s", "\n");
    printf("%d",42);
}