#include <stdio.h>
main()
{
    int i, N, a, b;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
