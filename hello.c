#include <stdio.h>
/*SYS TP0-HELLO WORLD*/
int main()
{
    FILE *saludo;
    saludo = stdout;
    fprintf(saludo, "Holaaaaa, Mundo!!! desde archivo saludo\n");
    return 0;
}