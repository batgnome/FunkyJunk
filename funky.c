#include <stdio.h>
#include <unistd.h>

int main()
{
    for(;;)
    {
        printf("Funky!\n");
        sleep(1);
    }
    return 0;
}
