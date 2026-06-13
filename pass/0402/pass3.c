#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    for (int num = 0; num < 5; num++)
    {
        int num = rand();
        printf("%d\n", num);
    }
    return 0;
}

    // int main(void)
    // {
    //     srand(1)
    // }