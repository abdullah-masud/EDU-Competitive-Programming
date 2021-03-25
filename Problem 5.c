#include <stdio.h>
main()
{
    int T,i,row,n,column;
    scanf("%d",&T);

    for(i=0; i<T; i++)
    {
        scanf("%d",&n);
        for(row=1; row<=n; row++)
        {
            for(column=1; column<=n; column++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i<T-1)
        {
            printf("\n");
        }
    }
    return 0;
}
