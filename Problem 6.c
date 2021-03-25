#include <stdio.h>
main()
{
    int T,n,i,lastDigit,firstDigit,sum;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&n);
        lastDigit = n%10;

        while(n>=10)
        {
            n = n/10;
        }
        firstDigit = n;

        sum = firstDigit + lastDigit;
        printf("Sum = %d\n",sum);
    }
    return 0;
}
