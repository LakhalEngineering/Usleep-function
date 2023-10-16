#include <stdio.h>
#include <stdlib.h>

#define max_val 5

int main()
{

    for(int i = 0; i <= max_val ; i++)
    {
        printf("Hello world !\n");
        usleep(100); // (us) we can use sleep() =! usleep()
    }
}