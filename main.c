#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * mi primer programa en C
**/

int main(int argc, char* argv[])
{
    /*
    printf("Hello world!\n");
    return 0;
    */
    if(strcmp(argv[1], "-h") == 0)
        printf("SI ERA POR QUE EN EL OTRO NO ANDAAAAAA D:\n");

    for (int i=0; i<argc; i++)
        printf("Argumento %d: %s\n", i, argv[i]);

    return 0;
}
