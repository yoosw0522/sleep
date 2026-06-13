#include <stdio.h>

int main(void)
{
    int i = 0;
    while( i <= 10 )
    {
        if(i % 2 == 1)
        i++;
        printf("%d", i++);
        i++;

        
    }
}


