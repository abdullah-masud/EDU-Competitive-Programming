#include <stdio.h>
main()
{
    int j=1000, x=0;
    for(int i=1; i<=200; i++)
    {
        while(x<5)
        {
            printf("%d\t",j--);
            x++;
        }
        x=0;
        printf("\n");
    }
}
