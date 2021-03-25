#include <stdio.h>
main()
{
    int i,n,first = 1, second = 1, fibonacci,sum=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fibonacci = first + second;
        first = second;
        second = fibonacci;
    }
    printf("%d\n",fibonacci-1);
}
